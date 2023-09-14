//
// Created by Usuario on 13/9/2023.
//

#ifndef ELIMINARDELISTAS_LISTAS_H
#define ELIMINARDELISTAS_LISTAS_H

typedef struct nodo{

    int dato;
    struct nodo * sig;

}Nodo;

typedef struct lista{
    Nodo * cabecera;
}Lista;

Nodo * newNodo(int dato);
Lista * newLista ();

void insertar (Lista * lista, Nodo * nodo);//funcion que inserta nodos en una lista
void imprimir (Lista * lista);//funcion que imprime la lista q recibe como parametro
Lista * eliminarRepetido (Lista * lista1, Lista * lista2);//funcion que compara 2 listas
                                                         //elimina los datos repetidos

#endif //ELIMINARDELISTAS_LISTAS_H
