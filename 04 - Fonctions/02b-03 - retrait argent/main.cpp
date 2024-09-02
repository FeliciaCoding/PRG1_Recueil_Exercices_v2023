#include <iostream>
#include <iomanip>

using namespace std;



double& withdraw(double& currentBalance, double& withdrawAmount){

    if (currentBalance >= withdrawAmount){
        currentBalance -= withdrawAmount;
    } else {
        withdrawAmount = currentBalance;
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

    double withdrawAmount = 300;
    double effectiveWithdraw;

    effectiveWithdraw = withdraw(currentBalance, withdrawAmount);

    displayResult("Effective Withdraw", effectiveWithdraw, 2, 21);
    displayResult("Current Balance", currentBalance, 2, 21);

    effectiveWithdraw = withdraw(currentBalance, withdrawAmount);

    displayResult("Effective Withdraw", effectiveWithdraw, 2, 21);
    displayResult("Current Balance", currentBalance, 2, 21);


    return 0;
}
