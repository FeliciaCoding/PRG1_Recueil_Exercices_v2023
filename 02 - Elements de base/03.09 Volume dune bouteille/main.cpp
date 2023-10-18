/* 03-09 Volume d'une bouteille
 *
*/

/// 1.
//// declaration right before the utilisation

/// 2.
///// comments

//// declare constants first
//// declare variables just right before using

///3
///declare CONSTANT together with ALGORITHEM


#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){



    // declare constants
    const double pi = 3.1415929535323846;
    const double cm3_in_litre= 1E-3; ////錯誤 : 1 litre = 1000 cm3





    // declare variables
    double r1, h1,                         //// rayon [cm] et hauteur [cm] du cylindre 1
           r2, h2,                                //// rayon [cm] et hauteur [cm] du cylindre 2
           h3;                                    //// hauteur [cm] du tronc de cône

    ////錯誤 : declare together with algorithem
    //double volume1,volume2, volume3, volumeTotal;


    // user input
    cout << "Enter R1[cm] = ";
    cin >> r1;

    cout << "Enter R2[cm] = ";
    cin >> r2;

    cout << "Enter H1[cm] = ";
    cin >> h1;

    cout << "Enter H2[cm] = ";
    cin >> h2;

    cout << "Enter H3[cm] = ";
    cin >> h3;




    //calculate different parts of volumes and total volume
    ////!! declare CONSTANT together with ALGORITHEM
    const double volume1 = pow(r1, 2)* h1 * pi;
    const double volume2 = pow(r2,2 )* h2 * pi;
    //// 算法錯誤 ：
    const double volume3 = 1/3 * (pow(r1, 2)*pow(r2,2 )*r1*r2) * h3 * pi; ////錯誤

    //// 換算錯誤 ：cm3 translate into litre
    const double volumeTotal = (volume1+volume2+volume3)*cm3_in_litre;




    //display result
    cout << "\nLa contenance de la bouteille = "
         << volumeTotal << " litre"

         //// 錯誤 ： single v.s. plural
         << (volumeTotal < 2 ? "" : "s") << endl;


    return EXIT_SUCCESS;

}

