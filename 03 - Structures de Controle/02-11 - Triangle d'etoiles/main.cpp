#include <iostream>

using namespace std;

int main() {

    // assuming the high can only be integer
    int high;
    do {
        cout << "Enter the high of the triangle (h > 0): ";
        cin >> high;
    } while (high <= 0);

    for (int i = 0; i <high ; ++i){
        for (int j = 0; j < high+i+1 ; ++j){
            if ( j < high - i ) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
