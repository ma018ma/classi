#include<iostream>
#include<fstream>
#include"Utente.h"

using namespace std;


int main(){

    cout<< "Ciao, inserisci il tuo nome"<< endl;
    string nome;
    cin>> nome;

//apro file
ifstream file;
file.open("utenti.txt");

//cerco il nome dell'utente
string riga;
while(getline(file,riga)){
    if(riga == nome){
        //ho trovato l'utente
        //prendo il punteggio alla riga successiva

    }
}
//se non esiste lo creo
//se esiste lo carico(prendo il punteggio alla riga successiva)




}