//Funcion que recibe por parametro dos listas simplemente enlazadas
//elimina los elementos de la primera lista que aparece en la segunda

#include <stdio.h>
#include "listas.h"
int main() {
    Lista * lista1 = newLista();
    Lista * lista2 = newLista();

    insertar(lista1, newNodo(1));
    insertar(lista1, newNodo(2));
    insertar(lista1, newNodo(3));
    insertar(lista1, newNodo(4));

    imprimir(lista1);

    insertar(lista2, newNodo(2));
    insertar(lista2, newNodo(4));
    insertar(lista2, newNodo(5));
    insertar(lista2, newNodo(3));
    insertar(lista2, newNodo(7));

    imprimir(lista2);



    imprimir(eliminarRepetido(lista1, lista2));

    return 0;
}
