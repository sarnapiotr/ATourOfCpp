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
	int v[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (auto i : v)//for each i in v, notice how we dont have to specify an array bounds
		std::cout << v[i] << '\n';

	for (auto i : { 10, 20, 30, 40, 50 })
		std::cout << i << '\n';

	double* pd = nullptr;
	if(pd != nullptr){}//example of checking if pointer refers somewhere f.e inside of a function
}

int main()
{
	return 0;
}
