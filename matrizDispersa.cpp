//
// Created by sanch on 8/29/2019.
//
#include <iostream>
#include <vector>
#include "matrizDispersa.h"
using namespace std;
matrizDispersa::matrizDispersa()
{
    cin>>numfilas;
    cin>>numcolumnas;
    matriz1 = new int*[numfilas];
    for (int i=0; i<numfilas;i++)
    {
        matriz1[i]= new int [numcolumnas];
    }
    cout<< "Digitar los valores de las matrices";
    for(int i=0; i<numfilas; i++)
    {
        for(int j=0; j<numcolumnas; j++)
        {
            cin>> *(*(matriz1+i)+j);
        }
    }

    matriz2 = new int*[numfilas];
    for (int i=0; i<numfilas;i++)
    {
        matriz2[i]= new int [numcolumnas];
    }
    cout<< "Digitar los valores de las matrices";
    for(int i=0; i<numfilas; i++)
    {
        for(int j=0; j<numcolumnas; j++)
        {
            cin>> *(*(matriz2+i)+j);
        }
    }
}

void matrizDispersa::suma(int **matriz1, int **matriz2, int , int )
{
    for (int i = 0; i<numfilas; i++)
        for (int j =0; j<numcolumnas; j++)
        {
            *(*(matriz1 + i) + j) += *(*(matriz2 + i) + j);
        }
}

void matrizDispersa::multiplicacion(int **matriz1, int **matriz2, int , int )
{
    for (int i = 0; i<numfilas; i++)
        for (int j =0; j<numcolumnas; j++)
        {
            *(*(matriz1 + i) + j) *= *(*(matriz2 + i) + j);
        }

}

void matrizDispersa::multiplicacionPunto(int **matriz1, int **matriz2, int , int )
{
    for (int i = 0; i<numfilas; i++)
        for (int j =0; j<numcolumnas; j++);


}

void matrizDispersa::transposicion(int **matriz1, int **matriz2, int , int )
{
    for (int i = 0; i<numfilas; i++)
        for (int j =0; j<numcolumnas; j++);

}

void matrizDispersa::matrizResultante(int **matriz1, int **matriz2, int , int)
{
    for (int i = 0; i<numfilas; i++)
        for (int j =0; j<numcolumnas; j++);


}
