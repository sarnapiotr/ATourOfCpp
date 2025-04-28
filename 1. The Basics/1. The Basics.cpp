#include <iostream>
#include <complex>

void assignments() {
	std::complex<double> z1 = 1;
	std::complex<double> z2{ 1, 2 };

	int i1 = 7.2;//i1 becomes 7
	int i2{ 7.2 };//error: floating-point to integer conversion

	auto d = 1.2;
}

void constants() {
	const int dmv = 17;
	int var = 17;

	constexpr double max1 = dmv;//OK, dmv is a constant expression
	//constexpr double max2 = var; error: var is not a constant expression
	const double max3 = var;//OK, may be avaluated at run time
	//The same with functions
}

void pointersArraysReferences() {

}

int main()
{
	return 0;
}
