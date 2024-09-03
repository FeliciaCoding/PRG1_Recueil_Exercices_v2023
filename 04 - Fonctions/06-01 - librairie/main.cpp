#include <iostream>
#include <string>

using namespace std;



int saisir (const string& message, int min, int max);

void display (const string& message, int value);

void librairie ();

int main() {

    librairie ();
    return 0;

}

int saisir (const string& message, int min, int max){
    int value;
    do{
        cout << message << "[" << min << ".." << max << "] : ";
        cin >>  value;
        // return value;

    } while( value > max or value < min );

    return value;

}

void display (const string& message, int value) {
    cout << message << " : " << value;
}



void librairie () {

    const string message = "votre saisie ";
    // No need to call 2 times 'saisir'
    // saisir (message, 0, 10);
    int value = saisir (message, 0, 10);
    display (message, value);

}