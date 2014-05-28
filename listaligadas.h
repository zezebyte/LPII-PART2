/* 
 * File:   listaligadas.h
 * Author: sos
 *
 * Created on 28 de Maio de 2014, 21:03
 */
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"
#include "types.h"
#ifndef LISTALIGADAS_H
#define	LISTALIGADAS_H

int FullLR(ApListaRolos);
int FullLP(ApListaPacks);
int FullLG(ApListaGuias);
int FullLE(ApListaExpds);
int EmptyLR(ApListaRolos);
int EmptyLP(ApListaPacks);
int EmptyLG(ApListaGuias);
int EmptyLE(ApListaExpds);
int SizeLR(ApListaRolos);
int SizeLP(ApListaPacks);
int SizeLG(ApListaGuias);
int SizeLE(ApListaExpds);
ApNoListaRolos SetPositionLR(ApListaRolos, int);
ApNoListaPacks SetPositionLP(ApListaPacks, int);
ApNoListaGuias SetPositionLG(ApListaGuias, int);
ApNoListaExpds SetPositionLE(ApListaExpds, int);
ApNoListaRolos DeleteLR(ApListaRolos, int);
ApNoListaPacks DeleteLP(ApListaPacks, int);
ApNoListaGuias DeleteLG(ApListaGuias, int);
ApNoListaExpds DeleteLE(ApListaExpds, int);
int InsertLR(ApListaRolos, ApNoListaRolos, int);
int InsertLP(ApListaPacks, ApNoListaPacks, int);
int InsertLG(ApListaGuias, ApNoListaGuias, int);
int InsertLE(ApListaExpds, ApNoListaExpds, int);
void ReplaceLR(ApListaRolos, ApNoListaRolos, int);
void ReplaceLP(ApListaPacks, ApNoListaPacks, int);
void ReplaceLG(ApListaGuias, ApNoListaGuias, int);
void ReplaceLE(ApListaExpds, ApNoListaExpds, int);
void ClearLR(ApListaRolos);
void ClearLP(ApListaPacks);
void ClearLG(ApListaGuias);
void ClearLE(ApListaExpds);
int ProcuraCodRolo(ApArmazem, char);
int ProcuraCodPack(ApArmazem ,int);
int ProcuraCodPackExp(ApNoListaExpds, int);
int ProcuraPackExpds(ApArmazem, int);
int ProcuraPackGuias(ApArmazem, int);
int ProcuraRoloGuia(ApArmazem, char);
int ProcuraRoloExpd(ApArmazem, char);

#endif


