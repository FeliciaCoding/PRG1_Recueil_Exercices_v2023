/* 04-01
 * Pointeurs et const
 *
    int i = 5;
    const int j = 10;

    int *ptr_i = &i;
    const int *ptr_j = &j;

    const int *ptr_i_1 = &i;
    int* const ptr_i_2 = &i;

 * Indiquez si les instructions suivantes sont correctes ou pas (génère une erreur) ?
 * Expliquez votre réponse,
 * Quelle serait la valeur de i et j si l'instruction est exécutée.
 *

 */

#include <iostream>

#include <cstdlib>

using namespace std;

int main(){

    int i = 5;
    const int j = 10; // ->  const int* prt_j
    const int k = 15;

    int *ptr_i = &i; //  *ptr_i = value i
    const int *ptr_j = &j; //int *ptr_j_1 = &j;

    const int *ptr_i_1 = &i; //  i = 5 (const)
    int* const ptr_i_2 = &i; // adress i (const)


    // 1.
    *ptr_i = 15;    // int *ptr_i = &i;
    // value and address are mutable
    // = *(&i), mutable, i = 15, j = 10

    cout << "1. *ptr_i = " << *ptr_i << "  = value. ptr" << endl
         << "    ptr_i = " << ptr_i << "  = adr_i "<< endl
         << "   &ptr_i = " << &ptr_i << "  = adr. ptr" << endl
         << "   i     = " << i << endl
         << "   j     = " << j << endl;


    // 2.
/*
    int *ptr_j_1 = &j; // const int j., erreur, donc ->  const int *prt_J_1
    cout << "1. int *ptr_j_1 = " << *ptr_j_1 << endl;
*/

    // 3.
    cout << "3. " << endl
         << "  ptr_i = " << ptr_i << endl
         << "  ptr_j = " << ptr_j << endl;

    ptr_j = ptr_i; // point to the same memory address i
    //
    //
    // j = 10 , i = 15
    cout << endl
         << "  ptr_j = ptr_i " << endl // from right to left, take address i
         << "  ptr_i = " << ptr_i << endl
         << "  *ptr_i = " << *ptr_i << endl
         << "  ptr_j = " << ptr_j << endl
         << "  *ptr_j = " << *ptr_j << endl
         << "   i     = " << i << endl
         << "   j     = " << j << endl;


/*
    // 4. wrong
    *ptr_i_1 = 25; //  const int *ptr_i_1 = &i;
                   //  &i est pas const int
                   //  error
*/

    // 5.
    *ptr_i_2 = 30; // int* const ptr_i_2 = &i
    // value changeable
    // int* const ptr_i_2 = &i = 30
    // i = 30, j =10

    cout << "5. *ptr_i_2 = " << *ptr_i_2 << endl
         << "   i     = " << i << endl
         << "   j     = " << j << endl;

    // 6.
    ptr_i_1 = &j;   // const int *ptr_i_1 = &i;
    // const int j = 10
    // ptr changeable, ptr_i_1 vers j
    // value immutable
    // i = 30, j = 10
    cout << "6. ptr_i_1 = " << ptr_i_1 << endl
         << "  *ptr_i_1 = " << *ptr_i_1 << endl
         << "   &i      = " << &i << endl
         << "    i      = " << i << endl
         << "   &j      = " << &j << endl
         << "   j       = " << j << endl;


    // 7. Wrong : constant pointer cannot change where it point to, but can change the value
    cout << "6. ptr_i_2 = " << ptr_i_2 << endl
         << "  *ptr_i_2 = " << *ptr_i_2 << endl;

    *ptr_i_2 = 50;   // int* const ptr_i_2 = &i
                    // int *ptr_i = &i;
                    // const ptr v.s. pas constant
                    // error

    cout << "-----> après *ptr_i_2 = 50 "<< endl
         << "   ptr_i_2 = " << ptr_i_2 << endl
         << "   *ptr_i_2= " << *ptr_i_2 << endl
         << "   &i      = " << &i << endl
         << "   i       = " << i << endl
         << "   &j      = " << &j << endl
         << "   j       = " << j << endl;





    return EXIT_SUCCESS;

}

