#include <iostream>
using namespace std;


int main() {

    double note;
    cout << "Entrez la note UNIGE : " << endl;
    cin >> note;

    string message = "La note ECTS est : ";

      //// PROBLEM: repeating codes `cout << message <<`
//    if (note > 6. || note < 0.) {
//        cout << " Erreur ";
//    } else if ( 5.25 <= note){
//        cout << message << "A";
//    } else if ( 4.75 <= note ) {
//        cout << message << "B";
//    } else if ( 4.50 <= note  ){
//        cout << message << "C";
//    } else if ( 4.25 <= note ) {
//        cout << message << "D";
//    } else if ( 4. <= note ) {
//        cout << message << "E";
//    }  else if ( 0. <= note ) {
//        cout << message << "F";
//    }


    if (note > 6. || note < 0.) {
        cout << "Erreur ";
    } else {
        cout << message;

        if ( 5.25 <= note){
            cout << "A";
        } else if ( 4.75 <= note ) {
            cout << "B";
        } else if ( 4.50 <= note  ){
            cout << "C";
        } else if ( 4.25 <= note ) {
            cout << "D";
        } else if ( 4. <= note ) {
            cout << "E";
        }  else if ( 0. <= note ) {
            cout << "F";
        }
    }


    return 0;
}
