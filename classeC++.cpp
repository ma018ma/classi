#include <iostream>
#include <cstdlib>
utilizzando lo spazio dei nomi std; 
 
class Cliente {
 privato: 
 stringa cf; 
 nome stringa; 
 stringa cognome; 
 indirizzo stringa; 
 stringa telefono; 
 
 pubblico: 
 
        Cliente()
        {
            cf = "";
            nome = "";
            cognome = "";
            indirizzo = "";
            telefono = "";
        }
 
        Cliente(string codiceFiscale, string nome, string cognome, string indirizzo, string telefono)
        {
            cf = codiceFiscale;
            nome = nome;
            cognome = cognome;
            indirizzo = indirizzo;
            telefono = telefono;
        }
 
        string getCodiceFiscale(){
 ritorno cf; 
        }
 
        string getNome(){
 nome di ritorno; 
        }
 
        string getCognome(){
 restituire il cognome; 
        }
 
        string getIndirizzo(){
 indirizzo di ritorno; 
        }
 
        string getTelefono(){
 telefono di ritorno; 
        }
 
        void setIndirizzo(string indirizzo){
            indirizzo = indirizzo;
        }
 
        void setTelefono(string telefono){
            telefono = telefono;
        }
};
 
class ContoCorrente {
 privato: 
        Cliente proprietario;
        int numeroConto;
 doppio saldo; 
 
 
 pubblico: 
    ContoCorrente( Cliente prop)
    {
        proprietario = prop;
        numeroConto = rand();
        saldo = 0;
    }
 
 Void Deposito(Double importo){ 
        saldo += importo;
    }
 
    double getSaldo(){
 ritorno Saldo; 
    }
 
    void prelievo(double importo){
        saldo -= importo;
    }
 
    string getProprietario()
    {
        return proprietario.getNome() + " " + proprietario.getCognome();
    }
 
};
 
int main(){
 
 banca 
 
 creare conto corrente 
 cfr 
    Cliente persona("123456789", "Mario", "Rossi", "Via Roma 1", "123456789");
    ContoCorrente c1(persona);
 
    c1.deposito(1000);
    cout << c1.getSaldo() << endl;
    c1.prelievo(500);
    cout << c1.getSaldo() << endl;
}