#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long n, length, width, result, rest;
	cin >> n;
	length = ceil(sqrt(n));
	width = n / length;
	result = (length + 1) * width + (width + 1) * length;
	rest = n - length * width;
	if (rest != 0)
	{
		result += 2 * rest + 1; // rest + 1 + rest
	}
	cout << result << endl;
    return 0;
}

