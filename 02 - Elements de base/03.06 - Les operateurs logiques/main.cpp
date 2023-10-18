
/*
 * Classe exercice 03-06 - Les opérateurs logiques
 * On suppose disposer de deux entiers x et y. Ecrire la condition permettant de tester :

    que nos deux entiers valent 0
    qu'au moins l'un de nos deux entiers vaut 0
    qu'un seul de nos deux entiers vaut 0
    qu'au moins un de nos deux entiers ne vaut pas 0
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {

    // conditions -> ==
    // calculation -> =

    int A, B;

    cout << " Enter 2 integers : ";
    cin >> A >> B;
    cout << " A = " << A << "," << " B = " << B << endl;

    while (A==0 && B==0) {
        cout << "nos deux entiers valent 0" << endl; // !( x && y )
        // x*y=0 && x==y
        break;
    }

    while (A==0 || B==0) {
        cout << "au moins l'un de nos deux entiers vaut 0" << endl;
        break;
    }

    while (A*B==0 && A!=B) {
        cout << "un seul de nos deux entiers vaut 0" << endl; // (x == 0 && y != 0) || (x != 0 && y == 0)
        break;
    }

    while (!(A*B==0 && A==B)) { // 10 01 11, exclude 00

        cout << "au moins un de nos deux entiers ne vaut pas 0 " << endl; // x != 0 || y != 0
        // !(x == 0 && y == 0)
        break;
    }

    return EXIT_SUCCESS;
}




