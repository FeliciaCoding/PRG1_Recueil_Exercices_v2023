/* 03-07 Opérations sur le type char
 * Que va afficher le programme C++ suivant ?
*/


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

    //// char shows in letters, can calculate with numbers which correspond to ASC||

    char x = 'A'; // 65
    char y = '0'; // 48
    char z;

    z = x + 4; // 69
    cout << "1. " << z << endl; //69 -> E
    cout << "2. " << ++z << endl; // ++z = 70 -> F,  (z=70)

    //// 錯誤
    z = x + 0; // XXXX 65 + 48 = 113 -> q
    ////REVISED : 65 + 0(int 0) =  65 -> A
    cout << "3. " << z << endl;

    //// 錯誤
    z = x + '0'; // A0
    //// REVISED : 65 + 48(char 0) = 113 -> q
    cout << "4. " << z << endl;

    return EXIT_SUCCESS;

}