#include <iostream>
#include <string>
using namespace std;

class Livre {
private:
    string titre;
    double prix;

public:
    Livre() {
        titre = "";
        prix = 0.0;
    }

     Livre(string t, double p) {
        titre = t;
        prix = p;
    }
        void saisir() {
      	cin.ignore(); 
    cout << "Titre du livre : ";
    getline(cin, titre); 
    cout << "Prix du livre : ";
    cin>>prix;

}


    void afficher() const {
        cout << "Titre : " << titre << ", Prix : " << prix << " DH" << endl;
    }
};

int main() {
    int n;

    cout << "Combien de livres voulez-vous creer ? ";
    cin >> n;
   
    if (n <= 0) {
        cout << "Nombre invalide !" << endl;
        return 1;
    }

    Livre* tab = new Livre[n];

    for (int i = 0; i < n; i++) {
        cout << "\n Livre " << i + 1  << endl;
        tab[i].saisir();
}
    cout << "\nListe des livres saisis :" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". ";
        tab[i].afficher();
    }

  
    delete[] tab;
    tab = NULL; 

    return 0;
}

