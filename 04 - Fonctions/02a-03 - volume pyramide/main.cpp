#include <iostream>
#include <iomanip> // setprecision()
#include <string>

using namespace std;

double valumePyramide(double longueur, double largeur, double hauteur) {
    double valumeRectangular = longueur * largeur;
    double valumePyramide = valumeRectangular * hauteur / 3;
    return valumePyramide;
    // return longueur * largeur * hauteur / 3 ;
}

// put the function in the function
// string pass by const reference
void displayResult ( const string& message, double valuer, int precision) {

    cout << fixed << setprecision(precision) << message << valuer << endl;

}

int main() {
    cout << "Valum of Pyramide 1 = "  << valumePyramide(10,3.5,12) << endl;
    displayResult("Valum of Pyramide 1 = ", valumePyramide(10,3.5,12), 1 );
    cout << "Valum of Pyramide 2 = " << valumePyramide(3.6, 2.4, 2.7) << endl;
    displayResult("Valum of Pyramide 2 = ", valumePyramide(3.6, 2.4, 2.7), 1);
    return 0;
}