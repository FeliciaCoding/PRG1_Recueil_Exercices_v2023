#include <cstdlib>
#include <string>
#include "userInput.h"

using namespace std;


int main() {

    const string message = "votre saisie ";
    // No need to call 2 times 'saisir'
    // saisir (message, 0, 10);
    int value = saisir (message, 0, 10);
    display (message, value);


    return EXIT_SUCCESS;

}