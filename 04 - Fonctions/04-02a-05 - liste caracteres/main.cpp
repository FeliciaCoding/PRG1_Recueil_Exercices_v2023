#include <iostream>

using namespace std;

// Rien n'est affiché si debut > fin.
// listerCaracteres('A', 'C') => ABC

bool listerCaracteres ( char start, char end) {

    // char current = start;

    if ( start >  end) {
        return false;
    } else {
        for (int i = 0 ; i <= end-start ; ++i  ) {
            cout << char(start + i)  ;
        }
        cout << endl;
        return true;
    }


}

int main() {
    listerCaracteres('A', 'A');
    listerCaracteres('A', 'C');
    listerCaracteres('B', 'A');
    listerCaracteres('0', '9');
    listerCaracteres(65, 67);
    listerCaracteres(147, 155);
    listerCaracteres(120, 127);
    listerCaracteres(120, 140);
    // listerCaracteres("65", "67");
    return 0;
}

