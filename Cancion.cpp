//
// Created by Melissa Belalcazar on 30/09/25.
//
#include "Cancion.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

Cancion::Cancion(string t, string a, int d) {
    titulo = t;
    artista = a;
    duracion = d;
}

string Cancion::formatoDuracion() const {
    int minutos = duracion / 60;
    int segundos = duracion % 60;
    stringstream ss;
    ss << setw(2) << setfill('0') << minutos << ":"
       << setw(2) << setfill('0') << segundos;
    return ss.str();
}

void Cancion::mostrarInfo() const {
    cout << "Título: " << titulo
         << " | Artista: " << artista
         << " | Duración: " << formatoDuracion() << endl;
}

