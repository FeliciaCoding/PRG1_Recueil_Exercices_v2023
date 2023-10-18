/*
 * 03-03 - Modulo
 */

#include <iostream>

using namespace std;

int main() {

    //// !!! 小心 only integers can use modulo

    int i = 5, j = 11, n = 10;
    double x = 5, y = 11;

    cout <<  " j % i = " <<  j % i << endl; // 1

    cout <<  " n % i = " << n % i << endl;  // 0

////    cout << " y % x = " << y % x << endl; // xx 1 --> error

////    cout << " y % i = " << y % i << endl; // xx 11 % 5 = 1 --> error

    cout << " -j % i = " << -j % i << endl; // -11 % 5 = -1

    cout << " n % ++i = " << n % ++i << endl;  // i = 6,  10 % 6 = 4,

    cout << " n++ % ++i = " << n++ % ++i << endl; // n = 11, n++= 10, i = 7, ++i = 7;
    // 10 % 7 = 3


}

