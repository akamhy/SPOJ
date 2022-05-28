#include <bits/stdc++.h>
using namespace std;

/*
Date: 28 May 2022
Link: https://www.spoj.com/problems/LASTDIG/
*/


int main()
{
	int cases;
	cin >> cases;

	while (cases--)
	{
        int a,b,last_digit;
		cin >> a >> b;

		if (b>4) b=(b%4)+4;

		last_digit=1;

		last_digit = (int)pow(a,b)%10;

		cout << last_digit << "\n";
	}
	return 0;
}