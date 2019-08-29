//
// Created by sanch on 8/29/2019.
//
#include <iostream>
#include <vector>
#ifndef MATRIZ_DISPERSA_MATRIZDISPERSA_H
#define MATRIZ_DISPERSA_MATRIZDISPERSA_H
using namespace std;

class matrizDispersa {
private:
    int **matriz1;
    int **matriz2;
    int numfilas;
    int numcolumnas;
public:
    matrizDispersa();
    void suma(int **, int**, int, int);
    void multiplicacion(int **, int**, int, int);
    void multiplicacionPunto(int **, int**, int, int);
    void transposicion(int **, int**, int, int);
    void matrizResultante(int **, int**, int, int);


};


#endif //MATRIZ_DISPERSA_MATRIZDISPERSA_H
