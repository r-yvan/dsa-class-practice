#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T>
T addition(T a, T b)
{
	return a + b;
}

template <typename T>
T addition(T a, T b, T c)
{
	return a + b + c;
}
int main()
{
	double sum = addition<double>(12, 13);
	cout << "The Sum is: " << sum << endl;
	return 0;
}
