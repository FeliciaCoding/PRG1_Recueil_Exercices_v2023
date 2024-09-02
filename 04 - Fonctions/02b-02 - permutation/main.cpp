/*
 * Ecrire un programme C++ qui met à disposition une fonction
 * sans valeur de retour et prenant 3 paramètres de type double
 * permettant d'effectuer une permutation circulaire droite
 * de ces 3 valeurs.
 */

#include <iostream>

using namespace std;

void afficher(double& a,double& b,double& c) {
    cout << "( a = " << a << ", b = " << b << ", c = " << c << " )" <<  endl;
}

void permutationDroit (double& a,double& b,double& c) {
    double t ;

    for (int i = 0 ; i < 3 ; ++i){
        // a = c, b = a, c = b // 3, 3, 3
        t = c, c = b, b = a, a = t;
        afficher(a,b,c);

    }

    cout << "End of permutation." << endl;
}



int main() {

    double x = 1, y = 2, z = 3 ;

    permutationDroit(x,y,z);

    return 0;
}
