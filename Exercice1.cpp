#include <iostream>
using namespace std;

int main() {
    int taille;

    cout << "saisir la taille ";
    cin >> taille;
    

    int* tableau = new int[taille];


    cout << " Veuillez remplir le  tableau" << endl;
    for (int i = 0; i < taille; i++) {
       cout << "tableau[" << i + 1 << "]: ";
        cin >> tableau[i];
    }


    cout << " Tableau : ";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    delete[] tableau;
    tableau = NULL; 

    return 0;
}

