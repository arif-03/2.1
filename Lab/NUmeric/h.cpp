#include <bits/stdc++.h>
using namespace std;

double func(double x)
{
	return x * x  - 3* x + 2;
}

double derivFunc(double x)
{
	return 2* x - 3;
}

int main()
{
	double errlimit;
	cout << "Enter err limit: ";
	cin >> errlimit;
	double x;
	cout << "Enter initial value: ";
	cin >> x;
	double h = func(x) / derivFunc(x);
	while (abs(h) >= errlimit)
	{
		h = func(x) / derivFunc(x);
		x = x - h;
	}

	cout << "The value of the root is : " << x;
	return 0;
}