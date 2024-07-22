#include <iostream>

using namespace std;
/*
 * Rules for Leap Year
    1. A year is a leap year if it is divisible by 4.
    2. However, if the year is divisible by 100, it is not a leap year, unless:
    3. The year is also divisible by 400, in which case it is a leap year.
 */

const string POSITIVE_MESSAGE = " is a Leap Year.";
const string NEGATIVE_MESSAGE = " is not a Leap Year.";


bool isLeapYear(int year ) {
    cout << year;

    if (year % 4 == 0) {
        if (year % 400 == 0) {
            cout << POSITIVE_MESSAGE << endl;
            return true;
        } else if ( year % 100 == 0 ){
            cout << NEGATIVE_MESSAGE<< endl;
            return false;
        } else {
            cout << POSITIVE_MESSAGE<< endl;
            return true;
        }
    } else {
        cout << NEGATIVE_MESSAGE<< endl;
        return false;
    }
}



int main() {
    isLeapYear(1900);
    isLeapYear(2000);
    isLeapYear(2010);
    isLeapYear(2020);
    return 0;
}
