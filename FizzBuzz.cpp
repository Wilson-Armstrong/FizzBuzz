/*  This program was made while watching the YouTube video "FizzBuzz: One Simple Interview Question" by Tom Scott.
    Video URL: https://www.youtube.com/watch?v=QPZ0pIK_wsc */

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main () {
    const int GOAL_NUM = 100;
    const map<int, string> MODULO_STRINGS = {
        {3, "Fizz"},
        {5, "Buzz"},
        {7, "Fuzz"},
        {11, "Bizz"},
        {13, "Biff"}
    };

    for (int i = 1; i <= GOAL_NUM; i++) {
        bool multipleFound = false;
        for (map<int, string>::const_iterator it = MODULO_STRINGS.begin(); it != MODULO_STRINGS.end(); it++) {
            if (i % it->first == 0) {
                multipleFound = true;
                cout << it->second;
            }
        }
        if (!multipleFound) { cout << i; }
        cout << endl;
    }

    // My first implementation for just the original 3:Fizz, 5:Buzz
    /*for (int i = 1; i <= GOAL_NUM; i++) {
        if (i % 3 == 0) {
            if (i % 5 == 0) {
                cout << "FizzBuzz" << endl;
            }
            else {
                cout << "Fizz" << endl;
            }
        }
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }
        else {
            cout << static_cast<int>(i) << endl;
        }
    }*/

    return 0;
}