#include <iostream>

/*

Link : https://www.spoj.com/problems/SMPWOW/
Date : 12 May 2022

*/

int main() {
    int times;
    std::cin >> times;
    std::cout << "W";
    for (int i = 0; i < times; i ++)
        std::cout << "o";
    std::cout << "w" << "\n";
    return 0;
}