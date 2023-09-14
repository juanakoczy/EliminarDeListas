//
// Created by Usuario on 13/9/2023.
//

#include "listas.h"
#include "stdio.h"
#include "malloc.h"


Nodo * newNodo(int dato){

    Nodo * aux = NULL;
    aux = malloc(sizeof(Nodo));

    if (aux == NULL){
        printf ("No hay espacio de memoria suficiente.");
        exit (-1);
    }
    else{
        aux->dato = dato;
        aux->sig = NULL;
    }
    return aux;
}

Lista * newLista (){

    Lista * aux = NULL;
    aux = malloc(sizeof(Lista));

    if (aux == NULL){
        printf("No hay espacio de memoria suficiente.");
        exit (-1);
    }
    else{
        aux->cabecera = NULL;
    }
    return aux;
    }

void insertar (Lista * lista, Nodo * nodo) {

    Nodo * aux = lista->cabecera;

    if (aux == NULL){//la lista esta vacia
        lista->cabecera = nodo;//persisto el nodo en la lista cabecera
    }
    else{
        while(aux->sig!= NULL){//recorre la lista hasta encontrar el ultimo nodo
            aux = aux->sig;
        }
        aux->sig = nodo;
    }
}
void imprimir (Lista * lista){
    Nodo * aux = lista->cabecera;
    while (aux != NULL){
        printf("\t %d \t",aux->dato);
        aux = aux->sig;
    }
    printf("\n");
}

Lista * eliminarRepetido (Lista * lista1, Lista * lista2) {

    Nodo * actual1 = lista1->cabecera;
    Nodo * anterior1 = NULL;
    Nodo * aux2 = lista2->cabecera;


    while (actual1 != NULL) {
        while (aux2 != NULL) {

            if (actual1->dato == aux2->dato){//hay numeros iguales

                if (anterior1 == NULL){//el dato igual es el primero
                    lista1->cabecera = actual1->sig;// corro la cabecera
                }

                else{
                    anterior1->sig = actual1->sig; // actual lo persisto en el anterior
                }

                Nodo * nodoAEliminar = actual1;//guardo el dato = en un nodo a eliminar
                actual1 = actual1->sig;//corro el actual al campo sig;
                free (nodoAEliminar);
            }
            aux2= aux2->sig; //avanzo la lista 2
        }

        aux2 = lista2->cabecera;//reinicio la lista2
        actual1 = actual1->sig;//avanzo la lista 1
    }

    return lista1;
}
