#include <bits/stdc++.h>
using namespace std;

/*
Date: 29 May 2022
Link: https://www.spoj.com/problems/ONP/
*/

int main() {
    int t;
    cin>>t;
    while (t--) {
        string input_string;
        cin >> input_string;

        string rpn;
        stack<char> stacked_op;


        for (int i = 0; i<input_string.length(); i++) {
            if (input_string[i] >= 'a' and input_string[i] <= 'z') rpn += input_string[i];

            else if (input_string[i] == '(') stacked_op.push(input_string[i]);

            else if (input_string[i] == ')') {
                while (stacked_op.top() != '(') {
                    rpn += stacked_op.top();
                    stacked_op.pop();

                }
                stacked_op.pop();          
            }

            else stacked_op.push(input_string[i]);
        
        
        }

        cout << rpn << "\n";

        

        

    }
    return 0;
}
