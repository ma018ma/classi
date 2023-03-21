#ifndef TELEVISIONE_H
#define TELEVISIONE_H
#include <iostream>
 
using namespace std;
 
class Televisore{
    private:
        bool stato; // true = acceso, false = spento
        int volume;
        int canale;
        bool muto;
 
    public:
        Televisore(){
 
            cout << "sono nel costruttore :)";
 
            stato = false;
            volume = 10;
            canale = 0;
            muto = false;
        }
 
        void pulsanteRosso(){
            if(stato == true){
                stato = false;
            }else{
                stato = true;
            }
        }
 
        void canaleSuccessivo(){
            if(stato == true){
                canale++;
                if(canale > 99)
                    canale = 0;
            }
        }
 
        void canalePrecedente(){
            if(stato == true){
                canale--;
                if(canale < 0)
                    canale = 99;
            }
        }
 
        void aumentaVolume(){
            if(stato == true && muto == false){
                volume++;
                if(volume > 10)
                    volume = 10;
            }
 
        }
 
        void abbassaVolume(){
            if(stato == true && muto == false){
                volume--;
                if(volume < 0)
                    volume = 0;
            }
        }
 
        void impostaCanale(int c){
            if(stato == true && c >= 0 && c <= 99){
                canale = c;
            }
            else{
                cout << "Canale non valido" << endl;
            }
        }
 
        void print(){
            cout << "Stato: " << (stato ? "acceso":"spento" )<< endl;
            cout << "Volume: " << volume << endl;
            cout << "Canale: " << canale << endl;
            cout << "Muto: " << (muto ? "muto":"non muto" ) << endl;
        }
 
        void pulsanteSilenzioso(){
            if(stato == true){
                if(muto == true){
                    muto = false;
                }else{
                    muto = true;
                }
            }
        }
};
 
int main(){
 
    Televisore tv;
 
    tv.print();
 
    tv.pulsanteRosso();
 
    tv.impostaCanale(3);
    tv.aumentaVolume();
    tv.aumentaVolume();
    tv.aumentaVolume();
    tv.aumentaVolume();
 
 
 
 
 
 
    cout << "--------" << endl;
    tv.print();
 
 
}