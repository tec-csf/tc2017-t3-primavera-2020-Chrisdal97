//  Conjunto_A_Subconjuntos.cpp
//  Quizz 3 Q4
//
//  Created by Christian Alberto Dalma Schults on 4/17/20.
//  Copyright © 2020 Christian Alberto Dalma Schultz. All rights reserved.

#include <iostream>
using namespace std;

/*
Funcion que regresa un booleano "true" si el subconjunto puede ser sumado para hacer uno de los numeros del arreglo primario esot es usando con recursividad del mismo metodo.
 */

bool SumaSubCon (int conjunto[], int n, int suma)
{
    // casos base
    if (suma == 0)
        return true;
    if (n == 0 && suma != 0)
        return false;

/*
 si el ultimo elemento es mas grande que la suma este es ignorado, de lo contrario checa si la suma puede ser obtenida ya sea incluyendo el ultimo o sin incluir el ultimo elemento del conjunto
*/

    if (conjunto[n-1] > suma)
    return SumaSubCon (conjunto, n-1, suma);
    return SumaSubCon (conjunto, n-1, suma) || SumaSubCon (conjunto, n-1, suma-conjunto[n-1]);
}
  
/*
Regresa Booleano "true" si el arreglo puede ser particionado en 2 sub conjuntos que equivalgan la suma desada
*/

bool ParticionCon (int conjunto[], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    suma += conjunto[i];
  
    // si la suma es inpar entonces 2 subconjuntos no pueden igualar la suma
    if (suma%2 != 0)
    return false;
    
    /*
     funcion recursiva para saber si hay un subconjunto que sea igual a la mitad de la suma total
     */
    
    return SumaSubCon (conjunto, n, suma/2);
}
  
// Codigo Main

int main()
{
    int conjunto[] = {5, 12, 1, 5, 22, 1};
    int n = sizeof(conjunto)/sizeof(conjunto[0]);
    if (ParticionCon(conjunto, n) == true)
        cout << "el arreglo puede dividirse en 2 subconjuntos que equivalen la suma deseada \n\n";
    else
        cout << "el arreglo no puede dividirse en 2 subconjuntos que equivalen la suma deseada \n\n";
    return 0;
}

