#include <iostream>
#include <string>
using namespace std;

class Personne {
private:
    string nom;
    int age;

public:

    Personne(string n, int a) {
        nom = n;
        age = a;
    }

  
    void afficher() const {
        cout << "Nom : " << nom << endl;
        cout << "Age : " << age << " ans" << endl;
    }
};

int main() {
    string nom;
    int age;

    cout << " le nom : ";
    getline(cin, nom);
    cout << " l'age : ";
    cin >> age;

    Personne* p = new Personne(nom, age);

 
    cout << "la personne :" << endl;
    p->afficher();

    delete p;
    p = NULL;

    return 0;
}

