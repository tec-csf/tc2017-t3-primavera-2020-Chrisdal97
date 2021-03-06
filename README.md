# Tarea *3*. *Tecnicas de Diseño de algortimos*

---

##### Integrantes:
1. *Christian Alberto Dalma Schultz* - *A01423166* - *CSF*

---
## 1. Aspectos generales

Las orientaciones de la tarea se encuentran disponibles en la plataforma **Canvas**.

Este documento es una guía sobre qué información debe entregar como parte de la tarea, qué requerimientos técnicos debe cumplir y la estructura que debe seguir para organizar su entrega.


### 1.1 Requerimientos técnicos

A continuación se mencionan los requerimientos técnicos mínimos de la tarea, favor de tenerlos presente para que cumpla con todos.

* El código debe desarrollarse en C++, cumpliendo con el último estándar [C++17](https://isocpp.org/std/the-standard).
* Toda la programación debe realizarse utilizando Programación Genérica.
* Deben utilizarse las [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).
* Todo el código debe estar correctamente documentado, siguiendo los lineamientos que aparecen en [Documenting C++ Code](https://developer.lsst.io/cpp/api-docs.html).
* Todo el código de la tarea debe alojarse en este repositorio de GitHub.
* Debe configurar su repositorio para que utilice el sistema de Integración Continua [Travis CI](https://travis-ci.org/).

### 1.2 Estructura del repositorio

El proyecto debe seguir la siguiente estructura de carpetas:
```
- / 			        # Raíz del repositorio
    - README.md			# Archivo con la información general de la actividad (este archivo)
    - sources  			# Códigos fuente con la solución
    - examples			# Archivos de ejemplo que pueden utilizarse para verificar que la solución funciona.
```

## 2. Solución

1. Ejercicio conjunto a subconjuntos

* *SumaSubCon()* El codigo utiliza recusividad para encontrar  si el ultimo elemento es mas grande que la suma este es ignorado, de lo contrario checa si la suma puede ser obtenida ya sea incluyendo el ultimo o sin incluir el ultimo elemento del conjunto

* *ParticionCon()* Regresa Booleano "true" si el arreglo puede ser particionado en 2 sub conjuntos que equivalgan la suma deseada

* O(2^n) en el peor de los casos, ya que esta solucion prueba 2 opciones

2. Procesador y mejor ocupacion 

* *struct Procesador* es una estructura que usaremos para definir el procesador a base de su ID, su tiempo y el orden preferibel de uso

* *Comparacion()* funcion para separar los procesadores de acuerdo al tiempo

* *printProceso()* funcion que regresa el numero necesario para los trabajos 



* O(n^2) se podria optimisar si se usan sets disjuntos


### 2.1 Pasos a seguir para utilizar la aplicación

1. Ejercicio conjunto a subconjuntos

Es necesario bajar el codigo c++, despues para cambiar el arreglo debes meterte al main y en donde esta el arreglo es donde puedes poner el arreglo deseado, despues de eso es necesario compilarlo y correr el programa

2. Procesador y mejor ocupacion 

Es necesario bajar el codigo c++, seguido de eso puedes entrar al arrreglo del main donde se encuentran las 3 cosas qu epuedes cmabiar como usuario, el ID, el orden preferencial, y el timpo. Seguido de eso se le recomienda al usuario compliarlo y seguido de eso correr el programa donde le dara los procesos y el orden en el que se deben ejecutar (comenzano por el primero)

## 3. Referencias

https://www.techiedelight.com/partition-problem/
https://www.codespeedy.com/job-sequencing-with-deadlines-in-cpp/
