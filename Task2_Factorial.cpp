#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int i, temp;
	i = 1; temp = 1;
	int answer;
	while (i < n)
	{
		temp *= i;
		if (temp == n)
		{
			answer = i;
			break;
		}
		i++;
	}
	cout << answer << endl;
    return 0;
}

