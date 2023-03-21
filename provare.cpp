class Televisione {
private:
  int volume;
  int canale;
  bool acceso;

public:
  Televisione() {
    volume = 0;
    canale = 1;
    acceso = false;
  }

  void accendi() {
    acceso = true;
    std::cout << "La televisione è accesa." << std::endl;
  }

  void spegni() {
    acceso = false;
    std::cout << "La televisione è spenta." << std::endl;
  }

  void cambiaCanale(int nuovoCanale) {
    if (acceso) {
      canale = nuovoCanale;
      std::cout << "Canale cambiato a " << canale << std::endl;
    } else {
      std::cout << "Accendi la televisione per cambiare il canale." << std::endl;
    }
  }

  void aumentaVolume() {
    if (acceso && volume < 100) {
      volume++;
      std::cout << "Volume aumentato a " << volume << std::endl;
    } else {
      std::cout << "La televisione è già al massimo volume." << std::endl;
    }
  }

  void abbassaVolume() {
    if (acceso && volume > 0) {
      volume--;
      std::cout << "Volume abbassato a " << volume << std::endl;
    } else {
      std::cout << "La televisione è già al minimo volume." << std::endl;
    }
  }
};