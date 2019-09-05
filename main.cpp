#include <iostream>
#include <vector>
#include "matrizDispersa.h"
using namespace std;

void suma(int **matriz1, int **matriz2, int numfilas, int numcolumnas)
{
    for (int i = 0; i<numfilas; i++)
        for (int j =0; j<numcolumnas; j++)
        {
            *(*(matriz1 + i) + j) += *(*(matriz2 + i) + j);
        }
}

void multiplicacion(int **matriz1, int **matriz2, int numfilas, int numcolumnas)
{
    for (int i = 0; i<numfilas; i++)
        for (int j =0; j<numcolumnas; j++)
        {
            *(*(matriz1 + i) + j) *= *(*(matriz2 + i) + j);
        }

}

void multiplicacionPunto(int **matriz1, int **matriz2, int numfilas , int numcolumnas)
{
    for (int i = 0; i<numfilas; i++)
        for (int j =0; j<numcolumnas; j++);


}

void transposicion(int **matriz1, int numfilas, int numcolumnas)
{
    for (int i = 0; i<numfilas; i++)
        for (int j =0; j<numcolumnas; j++)
        {
            cout<<*(*(matriz1+j)+i);
        }

}

void matrizResultante(int **matriz1, int **matriz2, int numfilas , int numcolumnas)
{
    for (int i = 0; i<numfilas; i++)
        for (int j =0; j<numcolumnas; j++);

}
int main()
{
    matrizDispersa m1(5,5);
    matrizDispersa m2(5,5);


    return 0;
}