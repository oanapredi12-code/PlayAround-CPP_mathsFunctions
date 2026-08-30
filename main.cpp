#include <iostream>
#include <cmath>
#include <math.h>
#define PI 3.14159265
#define e 2.71828
using namespace std;
int main()
{
	double var = 2.2;
	double tangent = sin(var) / cos(var);
	double testVar = 278;
	double invTangent= 1 / tangent;
	double cotangent = cos(var) / sin(var);

	cout << "Error is: " << fabs(cotangent - invTangent) << endl;

	double x = exp(var);
	double xMinus = exp(-var);
	double mod = x / xMinus;

	cout << "Mod of exp operation is: "<<mod;

	//number approximate
	int rPI = round(var);
	int cPI = ceil(var);
	int fPI = floor(var);
	int rDivTans = 0;
	int rDivCotang = 2;

	if (cotangent!= tangent)

	{
		int rDivTans = tangent / fabs(cotangent - tangent);
		int rDivCotang = cotangent / fabs(cotangent - tangent);
	}

	int tCoSigns = rDivTans / rDivCotang;
	double cosH_ = 1;
	double sinH_ = 0;
	double tanH_ = 0;
	double coTanh_ = 0;
	double margErrorTanh = 0;
	double thCohSigns = 0;
	double overloadedSign = 0;
	int rDivTanh = 0;;
	int rDivCoTanh = 0;

	if (tCoSigns == 0)
	{
		cout << "Commputing stops here." << endl;
		exit(1);
	}
	else
	{
		tangent = sin(testVar) / cos(testVar);
		cotangent = 1 / tangent;
		sinH_ = (pow(e, testVar) - pow(e, -testVar)) / 2;
		cosH_ = (pow(e, testVar) + pow(e, -testVar)) / 2;
		tanH_ = (exp(2 * testVar) - 1) / (exp(2 * testVar) + 1);
		coTanh_ = (exp(2 * testVar) + 1) / (exp(2 * testVar) - 1);

		if (tanH_ - coTanh_ == 0)
		{
			cout << "Computing stops here";
			exit(1);
		}


		rDivTanh = tanH_ / fabs(tanH_ - coTanh_);
		rDivCoTanh = coTanh_ / fabs(tanH_ - coTanh_);
		thCohSigns = rDivTanh / rDivCoTanh;

		if (tCoSigns == 1)
		{
			overloadedSign = (tCoSigns - 2) / thCohSigns;
		}
		else
			overloadedSign = tCoSigns / thCohSigns;

		if (cosH_ == 0)
		{
			cout << "Commputing stops here." << endl;
			exit(1);
		}
		else
		{
			margErrorTanh = fabs(tanh(testVar) - sinH_ / cosH_);
			cout << "marg of error for tanH is: " << margErrorTanh << endl;
		}
	}


		// = (pow(e, -testVar)) / 2;

		///
