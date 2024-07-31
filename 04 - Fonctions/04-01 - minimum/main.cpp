// ne pas utilise de if

#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 2;
    int c = 9;

    cout << min(a, b, c);
    min(a, b, c) = 1;
    int& d = min(a, b, c);

    return 0;
}
