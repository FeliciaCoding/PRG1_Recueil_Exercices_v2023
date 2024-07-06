/*
 Nombre de jours d'un mois

 Compléter le programme C++ ci-dessous pour qu'il affiche combien le mois choisi
 (1 pour janvier, 2 pour février, etc) compte de jours. Si l'utilisateur entre la valeur 2,
 le programme doit répondre : "Ce mois comporte 28 ou 29 jours"
 */
#include <iostream>

using namespace std;

int days;



void days_switch (int no_month) {

    switch (no_month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            cout << days;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            cout << days;
            break;
        case 2: cout << "28 or 29" ; break;
        default : cout << "invalide month number\n"; break;

    }
}

void days_if_else ( int no_month) {

    if (no_month == 1 || no_month == 3 || no_month == 5 || no_month ==7 || no_month == 8 || no_month == 10 || no_month == 12) {
        days = 31; cout << days;
    } else if (no_month == 2){
        cout << "28 or 29";
    } else if (no_month == 4 || no_month == 6 || no_month == 9 || no_month == 11){
        days = 30; cout << days;
    } else {
        cout << "invalide month number\n";
    }
}


void days_operator ( int no_month) {
    (no_month == 2) ? cout << "28 or 29 days (depending on leap year)\n" :
    (no_month == 4 || no_month == 6 || no_month == 9 || no_month == 11) ?
    cout << (days = 30) :
    (no_month >= 1 && no_month <= 12) ? cout << (days = 31) :
    cout << "Invalid month number\n";

    //  Not suitable for executing multiple statements or for mixing different types of operations (like printing and assigning values)
//    (no_month == 2) ? cout<< "29 or 29\n"  :
//    (no_month == 4 || no_month == 6 || no_month == 9 || no_month == 11 ) ?
//    days = 30 : days = 31;
//    cout << days;
}


/*

 Function Pointers:
 allow to pass the address of a function as an argument
 to another function.

 void callFunction(void (*func)(int), int arg) {
    // Call the function using the function pointer
    func(arg);
}

 */

void print_days(const string& method, void (*days_function)(int), int no_month){

    cout << "Using " << method << " : \n";

    if (no_month>12 or no_month < 1) {
        cout << "Invalid month number\n";
    } else {
        cout << "This month includes ";
        days_function(no_month);
        cout << " days\n\n" ;
    }

}



int main() {
    cout << "Entering a number of month (1-12) : ";
    int no_month; cin >> no_month;

//    cout << "This month includes ";
//    days_switch(no_month);
//    cout << " days." << endl;

    print_days("Switch Case", days_switch, no_month);

//
//    cout << "This month includes ";
//    days_if_else(no_month);
//    cout << " days." << endl;
    print_days("If-Else",days_if_else, no_month);
//
//    cout << "This month includes ";
//    days_operator(no_month);
//    cout << " days." << endl;
    print_days("Ternary Operator", days_operator, no_month);
}
