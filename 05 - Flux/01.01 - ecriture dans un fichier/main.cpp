/*
 * 01.01 Ecriture dans un fichier
 * But : Sauvegarde de texte dans un fishier
 * Date : 23.10.23
 * Remarque : done
 */


#include <iostream> // cin, cout
#include <iomanip> // EXIT_SUCCESS
#include <fstream> // ifstream, ofstream
#include <string>


using namespace std;


int main() {

    // Demandez à l'utilisateur de saisir le nom du fichier de sortie.
    string fileName; // déclarer la variable
    cout << "Please enter the file name : ";
    //cin >> file_name;
    getline(cin, fileName); //// -> using getline(cin, F) instead of cin

    // Ouvrir le ficher,  si le fichier existe déjà, il ne doit pas être écrasé.

    /*
     * ofstream fileOut;
     * fileOut.open(fileName,ios::app); //// -> append mode: to overwrite the file if the file is exist
     */

    ofstream fileOut(fileName, ios::app); //// Declare + action instead of .open()

    // Le programme gère les erreurs d'ouverture de fichier.
    if (!fileOut) {
        cerr << " Errors during opening the file. \n"; // backslash option+shift+7
        return 1; // return EXIT_FAILURE
    }

    // Demandez à l'utilisateur de saisir du texte et enregistrez le texte saisi dans le fichier de sortie.
    // Répétez cette action tant que l'utilisateur n'a pas terminé.

    cout << "Saisir le text à enregister dans le fichier (Tapez #exit# pour terminer la saisie): ";
    string       text;
    const string terminate = "#exit#";


    //// Do...While is not a good way to verify the user input
    /*
    do {
        cout << " Please enter the context you would like to add in the file ( enter #exit# for terminating ) : ";
        cin >> user_text;
        file_out << user_text << endl;

        // Pour terminer la saisie, l'utilisateur pourra taper #exit# dans une ligne séprée ou utiliser Ctrl+D.
    } while (user_text != terminate);
    */

    while (getline(cin, text)) {
        //// dont put inside the loop, otherwise cin before the question
        //cout << "Saisir le text à enregister dans le fichier (Tapez #exit# pour terminer la saisie): ";

        // Taper #exit# pour terminer la saisie.
        if (text == terminate) break;
        // Ecrivez le text dans le ficher (enregistrez le texte saisi dans le fichier de sortie)
        fileOut << text << endl;

    };


    // Fermez le ficher
    fileOut.close();

    return EXIT_SUCCESS;

}

