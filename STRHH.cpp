#include <iostream>
#include <string.h>

/*

Link : https://www.spoj.com/problems/STRHH/
Date : 9 May 2022

*/

using namespace std;

int main() {
	// your code goes here
	int cases;
	cin >> cases;

    // cout << cases << endl;
	
	for (int i = 0; i < cases; i++) {
		string sequence;
        cin >> sequence;
		int sequence_length = sequence.length();
		int subsequence_length = sequence_length/2;
		string subsequence  = sequence.substr(0, subsequence_length);

        // cout << subsequence << endl;

        for (int j = 0; j < subsequence_length; j++) {
            if ((j % 2) == 0) {
                cout << subsequence[j];

            }
        }
        cout << endl;
		
		
	}
	return 0;
}