#include <iostream>
#include <cmath>

using namespace std;

int main() {

    const double GRAVITY = 9.81;

    double coeffRebond;
    do{
        cout << " Coefficient de rebond (0 <= coeff < 1) : " ;
        cin >> coeffRebond;
    } while (coeffRebond>=1 || coeffRebond<0);

    double initHigh;
    do{
        cout << " Hauteur initiale [m]  (h0 >= 0)        : " ;
        cin >> initHigh;
    } while (initHigh<0);

    double numRebound;
    do{
        cout << " Nombre de rebonds     (n >= 0)         : " ;
        cin >> numRebound;
    } while (numRebound<0);

    double initSpeed;
    initSpeed = sqrt(2*GRAVITY *initHigh);

    double currHigh;
    double currentSpeed = initSpeed ;

    for (int i = 0; i < numRebound; ++i) {
        currentSpeed *= coeffRebond;
        currHigh = pow(currentSpeed, 2)/( 2 * GRAVITY );
    }


    cout << "La hauteur atteinte apres " << numRebound << " rebond" << ((numRebound >1)? "s":"")
    << " : " <<  currHigh << " [m]";

    return 0;
}
