#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    Contact(string n, string t, string e) {
        nom = n;
        telephone = t;
        email = e;
    }

    string getNom() const { return nom; }

    void afficher() const {
        cout << "Nom : " << nom
             << ", Telephone : " << telephone
             << ", Email : " << email << endl;
    }
};

void supprimerContact(Contact** carnet, int& taille, string nom) {
    int position = -1;

    for (int i = 0; i < taille; i++) {
        if (carnet[i]->getNom() == nom) {
            position = i;
            break;
        }
    }
    delete carnet[position]; 

    for (int i = position; i < taille - 1; i++) {
        carnet[i] = carnet[i + 1];
    }

    taille--;
    cout << "Contact supprime !" << endl;
}

int main() {
    int n;
    cout << "Combien de contacts voulez-vous creer ? ";
    cin >> n;
    cin.ignore();

    if (n <= 0) {
        cout << "Nombre invalide !" << endl;
        return 1;
    }

    Contact** carnet = new Contact*[n];

    for (int i = 0; i < n; i++) {
        string nom, telephone, email;

        cout << "\n Contact " << i + 1 << endl;
        cout << "Nom : ";
        getline(cin, nom);
        cout << "Telephone : ";
        getline(cin, telephone);
        cout << "Email : ";
        getline(cin, email);

        carnet[i] = new Contact(nom, telephone, email);
    }

    cout << "Les contacts donnee:" << endl;
    for (int i = 0; i < n; i++) {
        carnet[i]->afficher();
    }

    string Supp;
    cout << "Saisit le nom du contact voulu supprimer : ";
    getline(cin, Supp);

    supprimerContact(carnet, n, Supp);

    for (int i = 0; i < n; i++) {
        carnet[i]->afficher();
    }

    for (int i = 0; i < n; i++) {
        delete carnet[i];
    }
    delete[] carnet;

    cout << "\nQuitter le programme." << endl;
    return 0;
}


