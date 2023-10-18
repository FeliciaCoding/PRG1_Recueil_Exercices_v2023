/* 03-08 Concaténation
 * Indiquer la valeur de la variable s
 * après chacune des séquences d'instructions suivantes :
 * (si erruer, indiquez la)
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    string string1 = "A";
    string s;

    s = string1 + "BC";
    cout << "1. "<< s << endl; // ABC

    s = string1 + "BC";
    cout << "2. "<< s << endl; // ABC

////    s = "A" + "BC";
////    cout << "3. "<< s << endl; // ERROR.cannot "string" + "string"

    s = "AB";
    s += "C";
    cout << "4. "<< s << endl; // ABC

////    s = "AB";
////    s += 5;
////    cout << "5. "<< s << endl; // error, cannot combine string with numbers

    s = "PRG";
    string s1= "2023-01-01";
    s += s1[4]; //s = PRG-
    s += s1[6]; //s = PRG-1
    cout << "6. "<< s << endl; // PRG-1


    return EXIT_SUCCESS;

}