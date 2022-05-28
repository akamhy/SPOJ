#include <bits/stdc++.h>
using namespace std;

/*

Date: 28 May 2022
Link: https://www.spoj.com/problems/ACPC10A/

*/

int main() {

    while (1) {
        int a1,a2,a3;
        cin>>a1>>a2>>a3;

        if (a1 == a2 && a2 == a3 && a3 == 0 ) {
            break;
        }

        int diff_a2_a1 = a2 - a1;
        int diff_a3_a2 = a3 - a2;

        if (diff_a2_a1 == diff_a3_a2) {
            cout  << "AP " << a3 + diff_a2_a1 << "\n";
        }

        else {
            int ratio_a2_a1 = a2/a1;
            int ratio_a3_a2 = a3/a2;

            if (ratio_a2_a1 == ratio_a3_a2) {
                cout << "GP " << a3*ratio_a2_a1 << "\n";
            }
        }
    }

    return 0;
}