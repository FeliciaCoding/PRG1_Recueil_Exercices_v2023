/*
 * 03-05 - Comparer des chaines de caracatères
 */

//// ' ' < '0' < '9' < 'A' < 'Z' < 'a' < 'z'

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {

    ////1
    /// lettre à lettre

    ////2
    /// stop after the first difference, result out

    string s1 = "prg1";
    string s2 = "prg2";
    string s3 = "pdl";
    string s4 = "prg";
    string s5 = "pdg23";
    string s6 = "Prg1";

    cout << (s1 < s2 ) << endl; //1

    cout << (s1 > s3 ) << endl; //1

    cout << (s1 < s4 ) << endl; //0, car 1>/0

    cout << (s3 > s5 ) << endl; //1, car l>g

    cout << (s1 > s6 ) << endl; //1, car p > P

    return EXIT_SUCCESS;
}

