#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Donnez les valeurs de a, b, et c de l'equation a*x^2+b*x+c : ";
    double a, b, c;
    cin >> a >> b >> c;

    double discriminant = pow(b,2) - 4*a*c;

    // 0x^2 + 0x + 0 = 0  👉tout x est un solution
    // 0x^2 + 0x + C = 0, C!= 0 👉 pas de  solution
    // 0x^2 + bx + C = 0, b != 0 && c != 0  👉 1 solution = - c/b

    // Discriminant
    // b^2-4ac > 0 👉 2 solutions = (-b + discriminant) / (2a) & (-b - discriminant) / (2a)
    // b^2-4ac = 0 👉 1 solution = -b / 2a
    // b^2-4ac < 0 👉 pas de  solution

    if (a == 0) {
        if (b == 0){
            if (c == 0) {
                cout << "All X is a solution" << -c/b << endl;
            } else {
                cout << "No solutions" << endl;
            }
        } else {
            cout << "1 Solution, x = " << -c/b << endl;
        }
    } else {
        if (discriminant > 0 ){
            cout << "2 solutions: x = " << (-b + discriminant) / (2*a)  << " and " << (-b - discriminant) / (2*a) << endl;
        } else if (discriminant == 0 ){
            cout << "1 solutions : x = " << (-b) / (2*a)<<  endl;
        } else {
            cout << "No solutions" << endl;
        }

    }

    return 0;
}
