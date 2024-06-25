#include <iostream>
#include <cstdlib>

using namespace std;

void emptyLine() {
    cout << endl;
}

// 01-05 Switch(1)
void switch1(int a){
    switch (a) {
        case 0 :
        case 1 :
        case 2 :
        case 3 :
        case 4 :
        case 5 :
            cout << "A";
            break;
        case 6 :
            cout << "3";
        case 7 :
            cout << "4";
            break;
        default :
            cout << "D";
    }
}

void switch1_test1(int a) {
    if (a >= 0 and a <= 5) {
        cout << "A";
    } else if (a == 6) {
        cout << "34";
    } else if (a == 7) {
        cout << "4";
    } else {
        cout << "D";
    }
}

void switch1_test2(int a) {
    if (a >= 0 && a <=5) {
        cout << "A";
    } else if (a >= 0 && a <= 7) {
        if (a==6){
            cout << "3";
        }
        cout << "4";
    } else {
        cout << "D";
    }
}



int main() {


    cout << "01-05 Switch(1)"<< endl;
    switch1(6);
    emptyLine();
    switch1_test1(6);
    emptyLine();
    switch1_test2(6);
    emptyLine();
    emptyLine();

    switch1(7);
    emptyLine();
    switch1_test1(7);
    emptyLine();
    switch1_test2(7);
    emptyLine();
    emptyLine();

    switch1(3);
    emptyLine();
    switch1_test1(3);
    emptyLine();
    switch1_test2(3);
    emptyLine();
    emptyLine();

    switch1(-2);
    emptyLine();
    switch1_test1(-2);
    emptyLine();
    switch1_test2(-2);
    emptyLine();
    emptyLine();

    switch1(100);
    emptyLine();
    switch1_test1(100);
    emptyLine();
    switch1_test2(100);
    emptyLine();
    emptyLine();



    return 0;
}