/* 
 * File:   types.h
 * Author: sos
 *
 * Created on 28 de Maio de 2014, 20:38
 */

#ifndef TYPES_H
#define	TYPES_H

typedef struct listarolos *ApListaRolos;
typedef struct apnolistarolos *ApNoListaRolos;

typedef struct listapacks *ApListaPacks;
typedef struct nolistapacks *ApNoListaPacks;

typedef struct listaexpds *ApListaExpds;
typedef struct nolistaexpds *ApNoListaExpds;

typedef struct listaguias *ApListaGuias;
typedef struct nolistaguias *ApNoListaGuias;

typedef struct stack *ApStack;
typedef struct queue *ApQueue;

typedef struct no *ApNo;

typedef struct armazem *ApArmazem;

typedef struct data{
    int dia, mes, ano;
}Data;

typedef struct rolo{
    char codigo[10], descr[80];
    int enc, qualid;
    float comp;
}Rolo;

typedef struct no{
    Rolo elemento;
    ApNo NoSeguinte;
}No;

typedef struct queue{
    ApNo cabeca, cauda;
}Queue;

typedef struct stack{
    ApNo top;
}Stack;

typedef struct pack{
    char codigo[7];
    Data data;
    Stack pilharolos;
    int open;
}Pack;

typedef struct nolistarolos{
    Rolo elemento;
    ApNoListaRolos NoSeguinte;
}NolistaRolos;

typedef struct listarolos{
    ApNoListaRolos cabeca;
    int contador;
}ListaRolos;

typedef struct nolistapacks{
    Pack elemento;
    ApNoListaPacks NoSeguinte;
}NoListaPacks;

typedef struct listapacks{
    ApNoListaPacks cabeca;
    int contador;
}ListaPacks;

typedef struct{
    int enc;
    ListaPacks lpacks;
}Expedicao;

typedef struct nolistaexpds{
    Expedicao elemento;
    ApNoListaExpds NoSeguinte;
}NoListaExpds;

typedef struct listaexpds{
    ApNoListaExpds cabeca;
    int contador;
}ListaExpds;

typedef struct{
    int num, cliente;
    ListaExpds lexpds;
    int open;
}Guia;

typedef struct nolistaguias{
    Guia elemento;
    ApNoListaGuias NoSeguinte;
}NoListaGuias;

typedef struct listaguias{
    ApNoListaGuias cabeca;
    int contador;
}ListaGuias;

typedef struct armazem{
    ListaRolos lrolos;
    ListaPacks lpacks;
    ListaExpds lexpds;
    ListaGuias lguias;
}Armazem;

#endif
