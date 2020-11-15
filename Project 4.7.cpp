#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a , R=0 , S;
	int n;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(9) << "exp(x)" << "  |"
		<< setw(7) << "S" << "    |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk && x>=-1 && x<1)
	{
		n = 1;
		a = -1; 
		S = a;
		do {
			n++;
			R = x*(n - 1.) / n;
			a *= R;
			S += a;
		} while (a >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(4) << exp(x) << " |"
			<< setw(10) << setprecision(4) << S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}