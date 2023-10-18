/* Classe exercice 03-02 - Division entière et réelle
 *
 * Soient les déclarations suivantes :
 *
 */

#include <iostream>

using namespace std;

int main() {

    int i = 5, j = 11;
    double x = 5, y = 11;

    double m = 0 ;

    //// !!! 小心 entre＆sortir 的data type
    //// !!! 小心 implicit conversion : double + integer = double
    //// !!! double 3.0 = 3

    m = j / i;
    cout <<  " m = j / i = " << m << endl; // 2.0

    m = y / x;
    cout << " m = y / x = " << m << endl;  // 2.2

    m =  j/ i + 1.0;
    cout << " m =  j / i + 1.0 = " << m << endl; // 2 + 1.0 = 3.0

    m = y / x + 1;
    cout << " y / x + 1 = " << m << endl; // 2.2 + 1 = 3.2

    m = y / x + j / i;
    cout << " y / x + j / i =" << m << endl; // 2.2 + 2 0 = 4.2

    m = i + y / x;
    cout << " i + y / x = " << m << endl; // 5 + 2.2 = 7.2

    cout << " x + j / i =" << x + j / i << endl; // 5 + 2 = 7.0

}

