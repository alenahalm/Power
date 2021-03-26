#include <iostream>

using namespace std;

int power(double x, int n) {
	if (n == 0)
		return 1;
	else if (n % 2 == 0)
		return power(x * x, n / 2);
	else
		return x* power(x, n - 1);
}

int main()
{
	cout << "Enter X and N" << endl;
	int x, n;
	cin >> x >> n;
	cout << power(x, n) << endl;
}