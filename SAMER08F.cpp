#include <bits/stdc++.h>
using namespace std;

/*

Date: 29 May 2022
Link: https://www.spoj.com/problems/SAMER08F/

*/

int main() {

    int t = 1;

    while (t != 0) {
        cin >> t;
        if (t > 0) {
            cout << (t * (t + 1) * (2*t + 1)) / 6 << endl;
        }
    }
    return 0;
}