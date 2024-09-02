#include <iostream>

using namespace std;

void permutationCirculaireDroite (double* a, double* b, double* c) {

    double temp;

    temp = *c, *c= *b, *b = *a, *a = temp;

}

void display (double a, double b, double c) {

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

int main() {

    double a = 1, b = 2, c = 3;

    for (int i = 0; i < 3; ++i ) {

        // permutationCirculaireDroite(a, b, c);
        permutationCirculaireDroite(&a, &b, &c);

        display(a, b, c);
    }






    return 0;
}
