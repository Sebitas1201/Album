#include "Cancion.h"
#include <iostream>
using namespace std;

int main() {
    Cancion c1("Viva la Vida", "Coldplay", 242);
    Cancion c2("Bohemian Rhapsody", "Queen", 354);

    c1.mostrarInfo();
    c2.mostrarInfo();

    return 0;
}
