//
// Created by sanch on 8/29/2019.
//
#include <iostream>
#include <vector>
#include "matrizDispersa.h"
using namespace std;
matrizDispersa::matrizDispersa(int, int)
{
    cin>>numfilas;
    cin>>numcolumnas;
    matriz = new int*[numfilas];
    for (int i=0; i<numfilas;i++)
    {
        matriz[i]= new int [numcolumnas];
    }
    cout<< "Digitar los valores de las matrices";
    for(int i=0; i<numfilas; i++)
    {
        for(int j=0; j<numcolumnas; j++)
        {
            cin>> *(*(matriz+i)+j);
        }
    }

}


