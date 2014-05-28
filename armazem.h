/* 
 * File:   armazem.h
 * Author: sos
 *
 * Created on 28 de Maio de 2014, 21:22
 */
#include "uteis.h"
#include "listaligadas.h"
#define STR 80
#ifndef ARMAZEM_H
#define	ARMAZEM_H

void InitArm(ApArmazem); // inicializa todas as listas do armazem
int ProcuraCodigoRoloemPacks(ApArmazem, char);
void ReceberRolo(ApArmazem, ApQueue);
void AdRoloArm(ApArmazem, ApQueue); 
void RemoverRolo(ApArmazem); 
void AlterarRolos(ApArmazem);
void ListarRolos(ApArmazem);
void CriarPack(ApArmazem);
void AdicionarRoloPack(ApArmazem);
void ListarPacks(ApArmazem);
void ListarPacksExpds(ApNoListaExpds);
void RemoverPack(ApArmazem);
void FecharPack(ApArmazem);
void ProcuraEncomenda(ApArmazem);
void CriarExpedicao(ApArmazem);
void AdicionarPackExpds(ApArmazem);
void RemoverPackExpds(ApArmazem);
void ListarExpedicoes(ApArmazem);
void RemoverExpds(ApArmazem);
void FecharExpedicao(ApArmazem);
void CriarGuia(ApArmazem);
void FecharGuia(ApArmazem);
void AdicionarExpGuia(ApArmazem);
void RemoverGuia(ApArmazem);




#endif


