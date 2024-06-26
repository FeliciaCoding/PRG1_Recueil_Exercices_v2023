/*
 * 01-02 - lecture et ajout dans un fichier
 */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


bool readFile(const string &fileName);

bool writeFile(const string &fileName);


int main() {

    // Demander à l'utilisateur de saisir le nom du fichier de sortie.
    cout << "Please enter the file name : ";
    string fileName;
    getline(cin, fileName);

    writeFile(fileName);

    readFile(fileName);

    // Demander à l'utilisateur de saisir le nom du fichier source
    cout << "Please enter the name of source file : ";
    string fileSource; getline(cin,fileSource);

    // utiliser cin pour lire depuis le fichier source

    ifstream fileIn(fileSource); //open file

    if (!fileIn){ // if file cannot open
        cerr << "Errors during opening the file \n";
        return EXIT_FAILURE;
    }


    auto cinBuf = cin.rdbuf(); // back up the buffer of cin
    cin.rdbuf(fileIn.rdbuf()) ;

    writeFile(fileName);

    cin.rdbuf(cinBuf);
    fileIn.close();


    return EXIT_SUCCESS;











    return EXIT_SUCCESS;
}


bool readFile(const string &fileName) {
    ifstream fileIn(fileName);

    if (!fileIn) {
        cerr << "Errors during opening the file to read" << endl;
        return false;
    }

    while (fileIn) {
        string oneLine;
        getline(fileIn, oneLine); // read one line
        cout << oneLine << endl; // show on screen
    }

    fileIn.close();

    return true;
}


bool writeFile(const string &fileName) {

    // ovrir la fichier
    // Si le fichier existe déjà, il ne doit pas être écrasé.
    ofstream fileOut(fileName, ios::app);

    // Les erreurs d'ouverture de fichier.
    if (!fileOut) {
        cerr << "Errors during opening the file to write" << endl;
        return false;
    }

    string       text;
    const string terminate = "#exit#";

    // Demandez à l'utilisateur de saisir du text
    cout << "Enter the text you want to add in the file : ";

    // Pour terminer la saisie, l'utilisateur pourra tapez #exit#
    // dans une ligne séprée ou utiliser Ctrl+D.
    while (getline(cin, text)) { // build text
        if (text == terminate) break;
        fileOut << text << endl; // write
    }

    // Fermez le fichier
    fileOut.close();

    return true;
}