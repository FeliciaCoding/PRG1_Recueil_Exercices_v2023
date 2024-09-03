#include "utile.h"

;

//void display() {
//    for (static int counter = 1; counter < 4 ; ++counter)
//    std:: cout <<"Appeal numéro "<< counter << std::endl;
// }

static int counter = 0;

void display(){
    std:: cout <<"Appeal numéro "<< ++counter<< std::endl;
}

