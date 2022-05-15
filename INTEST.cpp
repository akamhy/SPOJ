#include <bits/stdc++.h>

/*

Date: 15 May 2022
Link: https://www.spoj.com/problems/INTEST/

*/


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


    int n,k,t;
    std::cin >> n >> k;
    int count = 0;
    for (int i = 0; i<n; i++) {

        std::cin >> t;

        if (t%k == 0) {
            count = count + 1; 
        }

    }

    std::cout << count << "\n";
    return 0;
}