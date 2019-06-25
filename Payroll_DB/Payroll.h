#pragma once
using namespace System;
using namespace System::Windows::Forms;

ref class Payroll
{
private:
	float new_income = 0;
	float new_salary = 0;
	float taxes = 0;
	bool marry;
	
	//float benefits;

public:
	Payroll() {};
	bool getMarriage();
	float get_taxes(bool marry, float pay);
	int getID(String^ fname, String^ lname);
	void newPaycheck(int, float, int);
	float updateSalary(int hours, float phsalary, int id);
	float updateIncome(float, int);
};
