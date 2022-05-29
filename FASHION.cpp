#include <bits/stdc++.h>
using namespace std;

/*
Date: 29 May 2022
Link: https://www.spoj.com/problems/FASHION/
*/

int main() {

    int t;
    cin >> t;

    while(t--) {

        int num, f, m, hb, sum_hb = 0;

        cin >> num;

        vector<int> males;
        vector<int> females;

        for (int i = 0; i < num; i++) {
            cin >> m;
            males.push_back(m);
        }

        for (int i = 0; i < num; i++) {
            cin >> f;
            females.push_back(f);
        }

        sort(males.begin(), males.end());
        sort(females.begin(), females.end());


        for (int i = 0; i < num; i++) {
            hb = males[i] * females[i];
            sum_hb += hb;
        }

        cout << sum_hb << "\n";

    }

    return 0;
}