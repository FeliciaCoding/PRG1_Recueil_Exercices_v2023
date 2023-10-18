
/*
 * 03-04 - Evaluation d'expressions - Opérateurs logiques
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

    //// 1
    //// how to break ?? : k = (i++ > j) || (j++ != 3)
    //// xxxxxx (k = i++ > j) || (j++ != 3)

    //// 2
    //// (A || B) si A est true, B est pas traité

    //// 3
    //// (A && B) si A est False, B est pas traité

    int i, j, k;

    i = j = k = 1;
    i += j += k; // j = j + k = 1+1=2, i = i+j = 1+2 = 3
    cout << "A : i = " << i << " j = " << j << " k = " << k << endl; // k = 1, j =2, i = 3


    i = 3; j = 2;
    k = i++ > j || j++ != 3;


    // (i++ > j)  : i++ = 3, i =4, j = 2, donc i++>j true
    // xxxxx (j++ != 3) : j++ = 2, j = 3, donc j++ != 3 true
    ////!! k = True = 1
    cout << "B : i = " << i << " j = " << j << " k = " << k << endl; // i = 4, xxxxj = 3, k = 1
    //// !!!! wrong: j = 2
    //// because ( j++ != 3) est pas fait

    i = 3; j = 2;
    k = i++ < j || j++ != 3;
    // i++ = 3, i =4 , j = 2, false
    // j++ = 2, j = 3 , j++ !=3, true
    // k = false || true = 1
    cout << "C : i = " << i << " j = " << j << " k = " << k << endl; // i = 4, j=3, k=1

    //// !!!! wrong :j = 2
    i = 3; j = 2;
    k = ++i == 3 && ++j == 3;
    // ++i = 4, i =4, false
    //// xxxx ++j = 3, j = 3 , true --> ne traité pas
    //// !! k = false= 0
    cout << "D : i = " << i << " j = " << j << " k = " << k << endl; // i=4, j=3, k=0

    i = 3; j = 2;
    k = ++i > 3 && ++j == 3;
    // ++i = 4, i=4, true
    // ++j = 3 , j = 3 , true
    // k = 1
    cout << "E : i = " << i << " j = " << j << " k = " << k << endl; // i=4, j= 3, k=1

    return EXIT_SUCCESS;
}

