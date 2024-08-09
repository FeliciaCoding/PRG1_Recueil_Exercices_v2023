#include <cstdlib>
#include <iostream>

using namespace std;

int& min(int& a, int& b, int& c) {
    return a < c ?
           a < c ? a : c :
           b < c ? b : c ;
}

int main() {

    int a = 12,
        b = 7,
        c = 9;

    cout << "1) a:" << a << " b:" << b << " c:" << c
         << " => min:" << min(a, b, c) << " ";
    // a=12 ,b=7 ,c=9, min=7

    int& d = min(a, b, c);
    // ---------------------------------------------------------------//
    // when minVariable was reassigned directly, d will change
    // if min(a, b, c) is reassigned, d wont change
    // ---------------------------------------------------------------//

    cout << "d:" << d << endl << endl;
    //  d=7

    b=5; // min = b, will change min and d
    cout << "2) b = 5;" << endl;
    cout << "a:" << a << " b:" << b << " c:" << c
         << " => min:" << min(a, b, c) << " ";
    cout << "d:" << d << endl << endl;
    // a=12 ,b=5 ,c=9, min=5,
    // Error d=7 -> 5 (lvalue: int& d = min(a, b, c) = b = 5)

    d=3; // will change min, d , minVariable b
    cout << "3) d = 3;" << endl;
    cout << "a:" << a << " b:" << b << " c:" << c
         << " => min:" << min(a, b, c) << " ";
    cout << "d:" << d << endl << endl;
    // a=12 ,b=5->3 ,c=9, min=5->3, d=3

    // int& d = min(a, b, c) = a or b or c = value = 3
    // Error b=5 -> 3
    // Error min=5 -> 3

    a=1; // WONT CHANGE d, because min was b
    cout << "4) a = 1;" << endl;
    cout << "a:" << a << " b:" << b << " c:" << c
         << " => min:" << min(a, b, c) << " ";
    cout << "d:" << d << endl << endl;
    // a=1 ,b=5 -> 3 ,c=9, min=1, d=3

    cout << "5) min(a, b, c) = 0;" << endl;
    min(a, b, c) = 0;
    cout << "a:" << a << " b:" << b << " c:" << c
         << " => min:" << min(a, b, c) << " ";
    cout << "d:" << d << endl << endl;
    // a=0 ,b=3 ,c=9, min=0, d=0-> 3

    // int& d = min(a, b, c) = a = value = 0
    // Error d=0 -> 3

    return EXIT_SUCCESS;
}