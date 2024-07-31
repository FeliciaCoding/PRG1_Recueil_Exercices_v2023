// ne pas utilise de 'if'

#include <iostream>

using namespace std;

// Assignable -> return type: by reference
int& min(int& a, int& b, int& c);

void printEmptyLine ();

int main() {
    int a = 5;
    int b = 2;
    int c = 9;

    cout << min(a, b, c);
    printEmptyLine ();
    min(a, b, c) = 1;
    int& d = min(a, b, c);
    cout << d;
    printEmptyLine ();
    cout << "a = " << a << ", b = " << b << ", c= " << c;
    printEmptyLine ();

    return 0;
}


int& min(int& a, int& b, int& c) {

    return a > b ? (b > c ? c : b) : (a > c ? c : a);
}

void printEmptyLine () {
    cout << endl;
}