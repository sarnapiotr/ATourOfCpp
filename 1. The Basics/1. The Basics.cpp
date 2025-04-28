#include <iostream>
#include <complex>

void assignments() {
	std::complex<double> z1 = 1;
	std::complex<double> z2{ 1, 2 };

	int i1 = 7.2;//i1 becomes 7
	int i2{ 7.2 };//error: floating-point to integer conversion

	auto d = 1.2;
}

int main()
{
	return 0;
}
