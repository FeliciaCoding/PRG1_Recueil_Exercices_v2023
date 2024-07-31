#include <cstdlib>
#include <iostream>

// Error 1 : Declaration missing
void f ();

void g(int i, double j);

void h(int i, char c);


using namespace std;
int main() {

    // f;
    f();
    g(1, 2.0);
    h(64, 65);

    return EXIT_SUCCESS;
}

// Error 2 : missing parameter ()
// void f {
void f() {
        cout << "Appel de f\n";
}

//------------------------------------------------------------

// Erorr 3 : missing data type for the second variables
// void g(int i, j) {
void g(int i, double j) {
    cout << "Appel de g avec i = " << i << " et j = " << j << "\n";
}

//------------------------------------------------------------

// Error 4 ; Syntax
// void h(int i; char c) {

void h(int i, char c) {
cout << "Appel de h avec i = " << i << " et c = '" << c << "'\n";
}