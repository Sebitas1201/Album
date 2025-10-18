//
// Created by Melissa Belalcazar on 30/09/25.
//

#ifndef BIBLIOTECAMUSICAL_CANCION_H
#define BIBLIOTECAMUSICAL_CANCION_H

#endif //BIBLIOTECAMUSICAL_CANCION_H
#ifndef CANCION_H
#define CANCION_H

#include <string>
using namespace std;

class Cancion {
private:
    string titulo;
    string artista;
    int duracion; // en segundos

public:
    Cancion(string t, string a, int d);
    void mostrarInfo() const;
    string formatoDuracion() const;
};

#endif
