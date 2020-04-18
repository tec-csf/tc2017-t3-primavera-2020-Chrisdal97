//
//  Procesador.cpp
//  Procesador
//
//  Created by Christian Alberto Dalma Schults on 4/17/20.
//  Copyright © 2020 Christian Alberto Dalma Schultz. All rights reserved.
//

#include<iostream>
#include<algorithm>
using namespace std;
  
// Estructura del procesador
struct Procesador
{
   char num;      // inidcador del procesador
   int orden;    // orden preferible
   int Tiempo;  // tiempo que tarda en hacerse
};
  
// funcion para ceprar los procesadores de acuerdo al tiempo
bool comparacion(Procesador a, Procesador b)
{
     return (a.Tiempo > b.Tiempo);
}
  
// regresa el numero minimo necesario para los trabajos
void printProceso(Procesador arr[], int n)
{
    // arregla los procesos de acuerdo a orden decreciente
    sort(arr, arr+n, comparacion);
  
    int result[n]; // resultado o secuencia de procesadores
    bool slot[n];  // tener orden del tiempo necesario
  
    // inicializacion de las slots
    for (int i=0; i<n; i++)
        slot[i] = false;
  
    // funcion de for para hacerlo en cada procesador
    for (int i=0; i<n; i++)
    {
        //busqueda de slot necesaria para que este libre
       for (int j=min(n, arr[i].orden)-1; j>=0; j--)
       {
          // slot libre
          if (slot[j]==false)
          {
             result[j] = i;
             slot[j] = true; //marcar la slot como ocupada
             break;
          }
       }
    }
  
    // funcion simple de print
    for (int i=0; i<n; i++)
       if (slot[i])
         cout << arr[result[i]].num << " ";
}
  
//Metodo main
int main()
{
    /*
     Arreglo de procesadores:
     * 'a','b','c'
     * orden preferible para utilizarlo (1,2,3,4,5)
     * Tiempo que tradara en utilizarce (20,13,24,1)
     */
    Procesador arr[] = { {'a', 5, 10}, {'b', 1, 18}, {'c', 3, 30}, {'d', 2, 2}, {'e', 4, 5}};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "La forma mas eficiente de utilizar los procesadores es la siguiente: ";
    printProceso(arr, n);
    cout << "\n";
    return 0;
}
