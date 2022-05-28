#include <bits/stdc++.h>
using namespace std;

/*
Date: 28 May 2022
Link: https://www.spoj.com/problems/LASTDIG/
*/

int get_last_digit(int num) {
    int last_digit = num % 10;
    return last_digit;
}

int main() {

    int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        // a^b
        int a, b;
        cin >> a >> b;
        int last_digit = 1;

        for (int i = 0; i < b; i++) {
            last_digit = get_last_digit(last_digit*a);

        }

        cout << get_last_digit(last_digit) << "\n";

    }


    return 0;
}