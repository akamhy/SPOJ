#include <iostream>
#include <string>

/*

Link : https://www.spoj.com/problems/ADDREV/
Date : 12 May 2022

*/

int reverse_number(int num) {
    int remainder;
    int rev_num = 0;
    while (num != 0) {
        remainder = num % 10;
        rev_num = rev_num * 10 + remainder;
        num /= 10;
    }
    return rev_num;
}

int main() {
    int cases;
    std::cin >> cases;
    for (int i = 0; cases > i; i++) {
        int num1;
        int num2;
        std::cin >> num1;
        std::cin >> num2;
        int sum = reverse_number(num1) + reverse_number(num2);
        int rev_sum = reverse_number(sum);
        std::cout << rev_sum << "\n";
    }
    return 0;
}
