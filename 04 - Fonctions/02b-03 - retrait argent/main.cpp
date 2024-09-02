#include <iostream>
#include <iomanip>

using namespace std;

// Separates the calculation of the actual withdrawal amount 'effectiveWithdraw'
// from the modification of 'currentBalance', which is clearer and more maintainable.

// Keeps the original 'withdrawAmount' unchanged,
// Returns a new double value, which is safer as it avoids potential side effects.
// double& withdraw(double& currentBalance, double& withdrawAmount){
double withdraw(double& currentBalance, double withdrawAmount){

    double effectiveWithdraw;
    // exclude the case when currentBalance =  withdrawAmount
    // if (currentBalance >= withdrawAmount){
    if (currentBalance > withdrawAmount){
        effectiveWithdraw = withdrawAmount;
        currentBalance -= effectiveWithdraw;
    } else {
        effectiveWithdraw = currentBalance;
        currentBalance = 0;
    }

    return withdrawAmount;

}

void displayResult ( const string& message, const double& value, int precision, int width){

    cout << left << setw(width) << message << " = "<< fixed << setprecision(precision) << value << endl;
}

int main() {

    double intBalance = 500;
    double currentBalance = intBalance;

    // let user fill in the amount of withdraw instead of set the variable
    // double withdrawAmount = 300;
    double effectiveWithdraw;

    effectiveWithdraw = withdraw(currentBalance, 300);

    displayResult("Effective Withdraw", effectiveWithdraw, 2, 21);
    displayResult("Current Balance", currentBalance, 2, 21);

    effectiveWithdraw = withdraw(currentBalance, 300);

    displayResult("Effective Withdraw", effectiveWithdraw, 2, 21);
    displayResult("Current Balance", currentBalance, 2, 21);


    return 0;
}
