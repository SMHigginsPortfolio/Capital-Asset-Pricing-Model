#include<iostream>
#include"CAPM.h"

using namespace std;

int main()
{
	cout.precision(10);

	double riskfree, beta, expectedrisk;

	cout << "Risk-free rate:" << endl;
	cin >> riskfree;

	cout << "Beta of the investment" << endl;
	cin >> beta;

	cout << "Expected return of the market" << endl;
	cin >> expectedrisk;

	cout << "CAPM = " << CalculateCAPM(riskfree, beta, expectedrisk) << endl;
	return 0;
}