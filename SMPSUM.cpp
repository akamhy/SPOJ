#include <iostream>

/*

Link : https://www.spoj.com/problems/SMPSUM/
Date : 12 May 2022

*/


int sum_of_squares(int n) {
    return ((n*(n+1)*((2*n)+1))/6);
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << sum_of_squares(num2) - sum_of_squares(num1-1)  << "\n";
    return 0;
}