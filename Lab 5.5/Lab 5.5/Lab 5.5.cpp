#include <iostream>
#include <cmath>
using namespace std;
int f(int n)
{
	if (n == 1)
		return 1;
	if (n % 2 == 0)
		return (2 * f(n / 2) - 1);
	else
		return (2 * f(n / 2) + 1);
}
int main()
{
	int n;
	cout << "n= "; cin >> n;
	cout <<"x=" << f(n) << endl;
	cout << "Kp=" << n - 1 << endl;
	return 0;
}