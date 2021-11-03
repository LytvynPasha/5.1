// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double h(const double s, const double t); // прототип
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = pow(h(t * t, 1), 3) + h(1, t * s * s);
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b) // визначення
{
	return (pow(a, 2) * sin(b) + pow(b, 2) * sin(a));
}