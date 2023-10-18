/* 03-01 Opérateurs
 * Que va afficher le programme C++ suivant ?
 *
 */

#include <iostream>

using namespace std;

int main() {

    int i, j, k;

    i = 0; k = i++;
    cout << "A : i = " << i << " k = " << k << endl; // i = 1, k = 0

    i = 1; k = ++i;
    cout << "B : i = " << i << " k = " << k << endl; // i = 2, k = 2

    i = 2; j = 3;
    k = i++ * ++j;
    cout << "C : i = " << i << " j = " << j << " k = " << k << endl; // i = 3, j= 4, k = 2 * 4 = 8

    i = 3; j = 4;
    k = i *= --j; // j = 3, i = i* 3= 3*3 = 9, k= i = 9
    cout << "D : i = " << i << " j = " << j << " k = " << k << endl; // i = 9, j = 3 , k= i = 9

}

