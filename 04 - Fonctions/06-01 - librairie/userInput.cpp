#include "userInput.h"

int saisir (const std::string& message, int min, int max){
    int value;
    do{
        std::cout << message << "[" << min << ".." << max << "] : ";
        std::cin >>  value;
        // return value;

    } while( value > max or value < min );

    return value;

}

void display (const std::string& message, int value) {
    std::cout << message << " : " << value;
}



void librairie () {

    const std::string message = "votre saisie ";
    // No need to call 2 times 'saisir'
    // saisir (message, 0, 10);
    int value = saisir (message, 0, 10);
    display (message, value);

}