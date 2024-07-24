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

// solution 1 :
bool leapYear_long(int year ) {
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


// solution 2 :

bool isLeapYear_short (int year) {
    // elle est divisible par 400 ou alors par 4 mais pas par 100.
    return year % 400 == 0 or (year % 4 == 0 && year % 100 != 0 );

}


void test (int year) {
    cout << year << " : " << boolalpha << isLeapYear_short(year) <<  endl;
}



int main() {
    leapYear_long(1900);
    leapYear_long(2000);
    leapYear_long(2010);
    leapYear_long(2020);

    cout << endl;

    test(1900);
    test(2000);
    test(2010);
    test(2020);

    return 0;
}
