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

// 01-06 Switch (2)

// # 1
void switch2 (int a ) {

    if (a == 1) {
        cout << "A";
    } else if (a == 4) {
        cout << "C";
    } else if (a == 2) {
        cout << "E";
    } else {
        cout << "BA";
    }

}

void switch2_test1 (int a ) {

    switch (a) {

        case 1 :
            cout << "A" ;
            break;
        case 2 :
            cout << "E" ;
            break;
        case 4 :
            cout << "C";
            break;
        default:
            cout << "BA" ;
            break;
    }
}

void switch2_test2 (int a ) {

    switch (a) {

        // default can place in any order
        default :
            cout << "B" ;
        case 1 :
            cout << "A" ;
            break;
        case 2 :
            cout << "E" ;
            break;
        case 4 :
            cout << "C";
            break;

    }

}

// #2
void switch2_2 (int a ){
    if (a < 0 or a >= 5) {
        cout << "D";
    } else if (a < 3) {
        cout << "A";
    } else {
        cout << "B";
    }
}

void stitc2_2_test (int a ){

    switch(a) {
        case 0:
        case 1:
        case 2: cout << "A"; break;
        case 3:
        case 4: cout << "B"; break;
        // case 5:
        default : cout << "D";
        // IS IT NECESSARY TO UT BREAK HERE ?
        // break;
    }

}

void operateurLogique ( int i, int b) {

    if (i < 1) {
        b = true;
    } else {
        b = i > 2;
    }

}

int main() {


    cout << "01-05 Switch(1)"<< endl;
    switch1(6);
    switch1_test1(6);
    switch1_test2(6);
    emptyLine();

    switch1(7);
    switch1_test1(7);
    switch1_test2(7);
    emptyLine();

    switch1(3);
    switch1_test1(3);
    switch1_test2(3);
    emptyLine();

    switch1(-2);
    switch1_test1(-2);
    switch1_test2(-2);
    emptyLine();

    switch1(100);
    switch1_test1(100);
    switch1_test2(100);
    emptyLine();


    emptyLine();
    cout << "01-06 Switch(2)" << endl;
    cout << "#2" << endl;
    switch2_2(-1);
    stitc2_2_test(-1);
    emptyLine();

    switch2_2(5);
    stitc2_2_test(5);
    emptyLine();

    switch2_2(2);
    stitc2_2_test(2);
    emptyLine();

    switch2_2(3);
    stitc2_2_test(3);
    emptyLine();


    return 0;
}