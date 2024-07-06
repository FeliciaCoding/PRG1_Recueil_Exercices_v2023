/*
 * Combine 3 exercises for better comparison
 *
 * 02-03 - accroissement d un avoir bancaire (1) - While loop
 * 02-06 - accroissement d un avoir bancaire (2) - For loop
 * 02-08 - accroissement d un avoir bancaire (3) - do while loop
 */

#include <iostream>


using namespace std;

int main() {

    cout << "Enter the initial balance : ";
    int initialBalance; cin >> initialBalance;

    cout << "Enter the target balance : ";
    int targetBalance; cin >> targetBalance;

    cout << "Enter the interest rate (%) : ";
    //// cannot be INT, once devided by 100, interestRate will become 0
    double interestRate; cin >> interestRate;

    // 02-03 - accroissement d un avoir bancaire (1) - While loop
    int numYear=0;
    int currentBalance = initialBalance;
    if(initialBalance >= targetBalance) {
        cout << "Target balance have been reached";
    } else if (interestRate<=0) {
        cout << "Target balance will never be reached";
    } else {
        //// VARIABLES CAN NOT BE DECLARED HERE, WILL DISAPPEAR ONCE THEY ARE OUTSIDE OF THE LOOP
        while (currentBalance < targetBalance) {
            ++numYear;
            currentBalance = currentBalance * (1 + interestRate / 100);
        }
        cout << "The target balance will be reached after " << numYear << " year" << ((numYear >1) ? "s" : "" ) << endl;
    }



    return 0;
}
