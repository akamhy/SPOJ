#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;

/*

Link: https://www.spoj.com/problems/FCTRL2/
Date: 15 May 2022

*/

cpp_int factorial(cpp_int num) {
    if (num == 0) // 0! = 1
        return 1;
    if (num == 1) // 1! = 1
        return 1;
    return (cpp_int)num*factorial(num-1);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);   
    int cases;
    std::cin >> cases;

    for (int i = 0; i < cases; i++) {
        cpp_int num;
        std::cin >> num;
        std::cout << factorial(num) << std::endl;

    }
    return 0;
}