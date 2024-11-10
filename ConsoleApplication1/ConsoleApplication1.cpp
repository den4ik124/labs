#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

void print(int x, int y) {
	ofstream outf("Result.txt");
	outf << "x= " << x << " " << " y= " << y << endl;
}

double calculateMultiplication(int n, int x)
{
	double y = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= n - 1; j++) {
			y *= x - i - j;
		}
	}
	return y;
}

double calculateAddition(int n, int x)
{
	double y = 0;
	for (int i = 0; i <= n; i++) {
		y += (x - i) * (x - i);
	}
	return y;
}

void checkValidation(int n)
{
	if (cin.fail()) {
		throw "Incorrect input";
	}

	if (n < 4)
	{
		throw "Incorrect input value: n = " + n;
	}
}

int main() {
	setlocale(LC_ALL, "RUS");
	int x, b, n, h;
	// Ввод числа
	try
	{
		cout << "Enter x number:" << endl;
		cin >> x;
		cout << "Enter b number:" << endl;
		cin >> b;
		cout << "Enter h number:" << endl;
		cin >> h;
		cout << "Enter n number:" << endl;
		cin >> n;

		checkValidation(n);

		while (x <= b) {
			double result;
			if (x > 0) {
				result = calculateMultiplication(n, x);
			}
			else {
				result = calculateAddition(n, x);
			}

			print(x, result);

			x += h;
		}
		return 0;
	}
	catch (const char* ex)
	{
		cout << ex << endl;
		return -1;
	}
	catch (...)
	{
		cout << "Unknown error" << endl;
		return -2;
	}
}