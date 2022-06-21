#include <bits/stdc++.h>
using namespace std;

/*
Date: 21 June 2022
Link: https://www.spoj.com/problems/HANGOVER/
*/


int main() {

    float c;
    do {
        cin >> c;
        float value = 0;
        float n = 0;
        while (value < c) {
            n++;
            value += (1.0 / (1.0 + n) );
        }
        if (c!=0) {
        cout << n << " " << "card(s)" << endl;
        }

    }

    while (c!=0);
}