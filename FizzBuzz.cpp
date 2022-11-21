/*  This program was made while watching the YouTube video "FizzBuzz: One Simple Interview Question" by Tom Scott.
    Video URL: https://www.youtube.com/watch?v=QPZ0pIK_wsc */

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main () {
    // The program will check each number from 1 to GOAL_NUM to see if the int keys of MODULO_STRINGS are even divisors
    // If it is, the ith line in the output will have the string value from MODULO_STRINGS
    // If it is not, the ith line will just have the int i
    const int GOAL_NUM = 100;
    const map<int, string> MODULO_STRINGS = {
        {3, "Fizz"}, // This element and the element {5: "Buzz"} were the prompt's original elements.
        {5, "Buzz"},
        {7, "Fuzz"}, // This element, {11, "Bizz"}, and {13, "Biff"} were briefly shown as an extension of the prompt.
        {11, "Bizz"},
        {13, "Biff"}
    };

    for (int i = 1; i <= GOAL_NUM; i++) { // From 1 to GOAL_NUM (inclusive)
        bool multipleFound = false; // Have any of the map entries provided an int where i % int == 0?
        for (map<int, string>::const_iterator it = MODULO_STRINGS.begin(); it != MODULO_STRINGS.end(); it++) { // For each element in the map
            if (i % it->first == 0) { // If i % map's key int == 0
                multipleFound = true; // At least one of the map's keys evenly divides i
                cout << it->second; // Output the string value associated with the evenly dividing int key
            }
        }
        if (!multipleFound) { cout << i; } // If no divisor was found in the map, then just output the number i
        cout << endl;
    }

    // My first implementation for just the original 3:Fizz, 5:Buzz
    /*for (int i = 1; i <= GOAL_NUM; i++) {
        if (i % 3 == 0) {
            if (i % 5 == 0) { cout << "FizzBuzz" << endl; }
            else { cout << "Fizz" << endl; }
        }
        else if (i % 5 == 0) { cout << "Buzz" << endl; }
        else { cout << static_cast<int>(i) << endl; }
    }*/

    return 0;
}