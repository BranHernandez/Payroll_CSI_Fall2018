#pragma once
#ifndef _DEDUCTIBLES
#define _DEDUCTIBLES
#include <iostream>
using namespace std;

class Deductibles
{
private:
	float tax;
	float fed = 0;       //federal tax rate
	float state = 0;    //state tax rate
	float fica = 0;   //fica includes social security and medicare
public:
	Deductibles();
	void calculateFedTaxes(bool married, float pay);
	void calculateStateTaxes(bool married, float pay);
	void calculateFICA(float pay);
	float getTaxes();
};

Deductibles::Deductibles()
{
	tax = 0.00;
}

void Deductibles::calculateFedTaxes(bool married, float pay)
{
	if (married == true)
	{//-------------------fed----------------------------------------------
		if (pay >= 0 && pay <= 19049.99)
		{
			fed = .1;
		}
		else if (pay >= 19050 && pay <= 77399.99)
		{
			fed = .12;
		}
		else if (pay >= 77400 && pay <= 164999.99)
		{
			fed = .22;
		}
		else if (pay >= 165000 && pay <= 314999.99)
		{
			fed = .24;
		}
		else if (pay >= 315000 && pay <= 399999.99)
		{
			fed = .32;
		}
		else if (pay >= 400000 && pay <= 599999.99)
		{
			fed = .35;
		}
		else if (pay >= 600000)
		{
			fed = .37;
		}
	}	//-------------------------/fed-----------------------------------
	else
	{
		//---------------fed------------------------------
		if (pay >= 0 && pay <= 9524.99)
		{
			fed = .1;			}
		else if (pay >= 9525 && pay <= 38699.99)
		{
			fed = .15;
		}
		else if (pay >= 38700 && pay <= 93699.99)
		{
			fed = .25;
		}
		else if (pay >= 93700 && pay <= 195449.99)
		{
			fed = .28;
		}
		else if (pay >= 195450 && pay <= 424949.99)
		{
			fed = .33;
		}
		else if (pay >= 424950 && pay <= 426699.99)
		{
			fed = .35;
		}
		else if (pay >= 426700)
		{
			fed = .396;
		}
	}//-------------------/fed-------------------------------
}

void Deductibles::calculateStateTaxes(bool married, float pay)
{
	if(married==true)
	{ 
		//-------------------------state----------------------------------
		if (pay >= 0 && pay <= 17149.99)
		{
			state = .04;
		}
		else if (pay >= 17150 && pay <= 23599.99)
		{
			state = .045;
		}
		else if (pay >= 23600 && pay <= 27899.99)
		{
			state = .0525;
		}
		else if (pay >= 27900 && pay <= 42999.99)
		{
			state = .059;
		}
		else if (pay >= 43000 && pay <= 161549.99)
		{
			state = .0645;
		}
		else if (pay >= 161550 && pay <= 323199.99)
		{
			state = .0665;
		}
		else if (pay >= 323200 && pay <= 2155349.99)
		{
			state = .0685;
		}
		else if (pay >= 2155350)
		{
			state = .0882;
		}
	}	//-------------/state------------------------------
	else 
	{
		//-------------------state------------------------------
		if (pay >= 0 && pay <= 8499.99)
		{
			state = .04;
		}
		else if (pay >= 8500 && pay <= 11699.99)
		{
			state = .045;
		}
		else if (pay >= 11700 && pay <= 13899.99)
		{
			state = .0525;
		}
		else if (pay >= 13900 && pay <= 21399.99)
		{
			state = .059;
		}
		else if (pay >= 21400 && pay <= 80649.99)
		{
			state = .0645;
		}
		else if (pay >= 80650 && pay <= 215399.99)
		{
			state = .0665;
		}
		else if (pay >= 215400 && pay <= 1077549.99)
		{
			state = .0685;
		}
		else if (pay >= 1077550)
		{
			state = .0882;
		}//------------------/state------------------------------
	}
}

void Deductibles::calculateFICA(float pay)
{
	double ss = .062;       //social security tax rate is 6.2%
	double medicare = 0;

	if (pay > 200000)    //if the pay is more than 200000 there is an extra .9% medicare surtax
	{
		medicare = .0235;
	}
	else
	{
		medicare = .0145;   //if the pay is not more than 200000 the medicare tax rate stays at 1.45%
	}

	fica = ss + medicare;  
}

float Deductibles::getTaxes()
{
	tax = fed + state + fica;
	return tax;  //total tax rate for this project will be federal + state + fica
}

#endif
