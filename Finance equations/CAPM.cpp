
#include "CAPM.h"
double CalculateCAPM(double riskfree, double beta, double expectedrisk)
{
	return riskfree + beta * (expectedrisk - riskfree);

}
