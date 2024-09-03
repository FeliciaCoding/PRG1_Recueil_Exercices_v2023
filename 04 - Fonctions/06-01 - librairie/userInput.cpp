#include "userInput.h"
#include <iostream>

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



