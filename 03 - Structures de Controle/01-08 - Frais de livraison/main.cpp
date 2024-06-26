/*
   Une société suisse tarife ses frais de livraison comme suit :

    5.00 CHF si livraison en Suisse, à l'exception des cantons des Grisons et
        du Tessin où les frais de livraison se monte à 7.00 CHF
    7.00 CHF si livraison au Liechtenstein.
    10.00 CHF partout ailleurs dans le monde

    Complétez le programme qui suit pour qu'il détermine et affiche le tarif de livraison. Il ne peut poser que des questions auxquelles l'utilisateur répond que par "O" (oui) ou "N" (non)
 */


#include <iostream>

using namespace std;


int main() {
    const double shippingFeeSuisse = 5.00;
    // const double shippingFeeLiechtensteinGrisonsTessin = 7.00;
    const double shippingFeeGrisonsTessin = 7.00;
    const double shippingFeeLiechtenstein = 7.00;
    const double shippingFeeInternational = 10.00;

    cout << "Livraison en Suisse ? (O/N) ";
    char response1; cin >> response1;

    int shippingFee;
    if (toupper(response1) == 'O') {
        cout << "livraison aux canton des grisons ou au Tessin  (O/N) ";
        char response2; cin >> response2;

/*        if (respond2 == 'O') {
            shippingFee = shippingFeeLiechtensteinGrisonsTessin;
        } else {
            shippingFee = shippingFeeSuisse;
        }
*/
        shippingFee = (toupper(response2) == 'O') ? shippingFeeGrisonsTessin : shippingFeeSuisse;

    } else {
        cout << "livraison au Liechtenstein,  (O/N) ";
        char response3; cin >> response3;

/*        if (response3 == 'O') {
            shippingFee = shippingFeeLiechtensteinGrisonsTessin;
        } else {
            shippingFee = shippingFeeInternational;
        }
*/
        shippingFee = (toupper(response3) == 'O') ? shippingFeeLiechtenstein : shippingFeeInternational;

    }

    string message = "Shipping fee : ";
    cout << message << shippingFee;
    return 0;
}
