/*
 * 05-01 - Priorité des opérateurs
 */

#include <iostream>

#include <cstdlib>

using namespace std;

int main(){
    int a, b, c,
        d, e, f,
        g, h, i;

    + a - b or c == d > e < f and g;

    cout << "   + a - b or c == d > e < f and g" << endl
        << " -> ((+a)-b)   or   c == (d > e) < f   and  g " << endl
        << " -> ((+a)-b)   or   (c == ((d > e) < f) ) and  g " << endl
        << " -> 先計算 後比大小 再 == != AND OR, 最後=       " << endl << endl;

    cout << "   a < b or c == d and e > b " << endl
        << " -> a < b or ( c == d and e > b )" << endl
        << " -> 先== 再and 後or " << endl << endl;

    cout << "   (a == (b < c)) " << endl
        << " -> 先比大小 後== != AND OR";
    return EXIT_SUCCESS;
}

