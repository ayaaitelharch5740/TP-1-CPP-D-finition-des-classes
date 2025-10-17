#include <iostream>
#include <string>
using namespace std;


class CompteBancaire {
private:
    string titulaire;
    double solde;

public:
    
    CompteBancaire() : solde(0.0) {}

    void definirTitulaire(string nom);
    void depot(double montant);
    void retrait(double montant);
    void afficher();
};



void CompteBancaire::definirTitulaire(string nom) {
    titulaire = nom;
}

void CompteBancaire::depot(double montant) {
    solde += montant;
    cout << "Solde après dépôt : " << solde << endl;
}

void CompteBancaire::retrait(double montant) {
    if (montant <= solde) {
        solde -= montant;
        cout << "Solde après retrait : " << solde << endl;
    } else {
        cout << "Retrait impossible : solde insuffisant !" << endl;
    }
}

void CompteBancaire::afficher() {
    cout << "Titulaire : " << titulaire << endl;
    cout << "Solde actuel : " << solde << endl;
}


int main() {
    CompteBancaire compte1;

    compte1.definirTitulaire("AYA AIT EL HARCH");
    compte1.depot(50000.0);
    compte1.retrait(2000.0);
    compte1.afficher();

    return 0;
}
