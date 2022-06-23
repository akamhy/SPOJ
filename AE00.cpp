#include <bits/stdc++.h>
using namespace std;

/*
Date: 23 June 2022
Link: https://www.spoj.com/problems/AE00/
*/

int main() {
    int num;
    cin >> num;

    int count = 0;

    for (int i = 1; i <= sqrt(num); i++) {
        for (int j = i + 1; i*j <= num; j++) {
            count ++;

        }
    }

    count += sqrt(num);

    cout << count << endl;
}