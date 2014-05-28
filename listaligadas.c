
#include "listaligadas.h"
#include "string.h"

int FullLR(ApListaRolos ApLR){
    return 0;
}
int FullLP(ApListaPacks ApLP){
    return 0;
}
int FullLG(ApListaGuias ApLG){
    return 0;
}
int FullLE(ApListaExpds ApLE){
    return 0;
}

int EmptyLR(ApListaRolos ApLR){
    if(ApLR->cabeca==NULL){
        return 1;
    }
    return 0;
}
int EmptyLP(ApListaPacks ApLP){
    if(ApLP->cabeca==NULL){
        return 1;
    }
    return 0;
}
int EmptyLG(ApListaGuias ApLG){
    if(ApLG->cabeca==NULL){
        return 1;
    }
    return 0;
}
int EmptyLE(ApListaExpds ApLE){
    if(ApLE->cabeca==NULL){
        return 1;
    }
    return 0;
}

int SizeLR(ApListaRolos ApLR){
    return ApLR->contador;
}
int SizeLP(ApListaPacks ApLP){
    return ApLP->contador;
}
int SizeLG(ApListaGuias ApLG){
    return ApLG->contador;
}    
int SizeLE(ApListaExpds ApLE){
    return ApLE->contador;
}

ApNoListaRolos SetPositionLR(ApListaRolos ApLR, int pos){
    int i;
    ApNoListaRolos ApNoLR=NULL;
    
    if(pos>=0 && pos<SizeLR(ApLR)){
        ApNoLR=ApLR->cabeca;
        for(i=0; i<pos; i++){
            ApNoLR=ApNoLR->NoSeguinte;
        }
    }
    return ApNoLR;
}
ApNoListaPacks SetPositionLP(ApListaPacks ApLP, int pos){
    int i;
    ApNoListaPacks ApNoLP=NULL;
    
    if(pos>=0 && pos<SizeLP(ApLP)){
        ApNoLP=ApLP->cabeca;
        for(i=0; i<pos; i++){
            ApNoLP=ApNoLP->NoSeguinte;
        }
    }
    return ApNoLP;
}
ApNoListaGuias SetPositionLG(ApListaGuias ApLG, int pos){
    int i;
    ApNoListaGuias ApNoLG=NULL;
    
     if(pos>=0 && pos<SizeLG(ApLG)){
         ApNoLG=ApLG->cabeca;
         for(i=0; i<pos; i++){
            ApNoLG=ApNoLG->NoSeguinte;
        }
     }
    return ApNoLG;
}
ApNoListaExpds SetPositionLE(ApListaExpds ApLE, int pos){
    int i;
    ApNoListaExpds ApNoLE=NULL;
    
    if(pos>=0 && pos<SizeLE(ApLE)){
        ApNoLE=ApLE->cabeca;
        for(i=0; i<pos; i++){
            ApNoLE=ApNoLE->NoSeguinte;
        }
    }
    return ApNoLE;
}

ApNoListaRolos DeleteLR(ApListaRolos ApLR, int pos){
    ApNoListaRolos ApNoLR=NULL, prev;
    
    if(pos>=0 && pos>SizeLR(ApLR)){
        ApNoLR=SetPositionLR(ApLR, pos);
        if(pos!=0){
            prev=SetPositionLR(ApLR, pos-1);
            prev->NoSeguinte=ApNoLR->NoSeguinte;
        }else{
            ApLR->cabeca=ApNoLR->NoSeguinte;
        }
        ApLR->contador=ApLR->contador-1;
    }
    return ApNoLR;
}
ApNoListaPacks DeleteLP(ApListaPacks ApLP, int pos){
    ApNoListaPacks ApNoLP=NULL, prev;
    
    if(pos>=0 && pos>SizeLP(ApLP)){
        ApNoLP=SetPositionLP(ApLP, pos);
        if(pos!=0){
            prev=SetPositionLP(ApLP, pos-1);
            prev->NoSeguinte=ApNoLP->NoSeguinte;
        }else{
            ApLP->cabeca=ApNoLP->NoSeguinte;
        }
        ApLP->contador=ApLP->contador-1;
    }
    return ApNoLP;
}
ApNoListaGuias DeleteLG(ApListaGuias ApLG, int pos){
    ApNoListaGuias ApNoLG=NULL, prev;
    
    if(pos>=0 && pos>SizeLG(ApLG)){
        ApNoLG=SetPositionLG(ApLG, pos);
        if(pos!=0){
            prev=SetPositionLG(ApLG, pos-1);
            prev->NoSeguinte=ApNoLG->NoSeguinte;
        }else{
            ApLG->cabeca=ApNoLG->NoSeguinte;
        }
        ApLG->contador=ApLG->contador-1;
    }
    return ApNoLG;
}
ApNoListaExpds DeleteLE(ApListaExpds ApLE, int pos){
    ApNoListaExpds ApNoLE=NULL, prev;
    
    if(pos>=0 && pos>SizeLE(ApLE)){
        ApNoLE=SetPositionLE(ApLE, pos);
        if(pos!=0){
            prev=SetPositionLE(ApLE, pos-1);
            prev->NoSeguinte=ApNoLE->NoSeguinte;
        }else{
            ApLE->cabeca=ApNoLE->NoSeguinte;
        }
        ApLE->contador=ApLE->contador-1;
    }
    return ApNoLE;
}

int InsertLR(ApListaRolos ApLR, ApNoListaRolos ApNoLR, int pos){
    ApNoListaRolos aux;
    
    if(pos>=0 && pos<=SizeLR(ApLR)){
        if(pos!=0){
            aux=SetPositionLR(ApLR, pos-1);
            ApNoLR->NoSeguinte=aux->NoSeguinte;
            aux->NoSeguinte=ApNoLR;
        }else{
            ApNoLR->NoSeguinte=ApLR->cabeca;
            ApLR->cabeca=ApNoLR;
        }
        ApLR->contador=ApLR->contador+1;
        return 1;
    }
    return 0;
}
int InsertLP(ApListaPacks ApLP, ApNoListaPacks ApNoLP, int pos){
    ApNoListaPacks aux;
    
    if(pos>=0 && pos<=SizeLP(ApLP)){
        if(pos!=0){
            aux=SetPositionLP(ApLP, pos-1);
            ApNoLP->NoSeguinte=aux->NoSeguinte;
            aux->NoSeguinte=ApNoLP;
        }else{
            ApNoLP->NoSeguinte=ApLP->cabeca;
            ApLP->cabeca=ApNoLP;
        }
        ApLP->contador=ApLP->contador+1;
        return 1;
    }
    return 0;
}
int InsertLG(ApListaGuias ApLG, ApNoListaGuias ApNoLG, int pos){
    ApNoListaGuias aux;
    
    if(pos>=0 && pos<=SizeLG(ApLG)){
        if(pos!=0){
            aux=SetPositionLG(ApLG, pos-1);
            ApNoLG->NoSeguinte=aux->NoSeguinte;
            aux->NoSeguinte=ApNoLG;
        }else{
            ApNoLG->NoSeguinte=ApLG->cabeca;
            ApLG->cabeca=ApNoLG;
        }
        ApLG->contador=ApLG->contador+1;
        return 1;
    }
    return 0;
}
int InsertLE(ApListaExpds ApLE, ApNoListaExpds ApNoLE, int pos){
    ApNoListaExpds aux;
    
    if(pos>=0 && pos<=SizeLE(ApLE)){
        if(pos!=0){
            aux=SetPositionLE(ApLE, pos-1);
            ApNoLE->NoSeguinte=aux->NoSeguinte;
            aux->NoSeguinte=ApNoLE;
        }else{
            ApNoLE->NoSeguinte=ApLE->cabeca;
            ApLE->cabeca=ApNoLE;
        }
        ApLE->contador=ApLE->contador+1;
        return 1;
    }
    return 0;
}

void ClearLR(ApListaRolos ApLR){
    while(EmptyLR(ApLR)==0){
        free(DeleteLR(ApLR,0));
    }
}
void ClearLP(ApListaPacks ApLP){
     while(EmptyLP(ApLP)==0){
        free(DeleteLP(ApLP,0));
    }
}
void ClearLG(ApListaGuias ApLG){
     while(EmptyLG(ApLG)==0){
        free(DeleteLG(ApLG,0));
    }
}
void ClearLE(ApListaExpds ApLE){
     while(EmptyLE(ApLE)==0){
        free(DeleteLE(ApLE,0));
    }
}


