#include "file.h"

void initFile(T_File *ptrF) {
    ptrF->Tete = -1;
    ptrF->Queue = -1; 
}

int retirer(T_File *ptrF, T_Elt *ptrE) {

    if (fileVide(ptrF)==0) {
        *ptrE = ptrF->Elts[ptrF->Tete];
        if (ptrF->Tete == ptrF->Queue) {
           
            ptrF->Tete = ptrF->Queue = -1;
        } else {
            ptrF->Tete = (ptrF->Tete + 1); 
        }
        return 1; 
    }
    return 0; 
}

int ajouter(T_File *ptrF, T_Elt *ptrE) {
    if (filePleine(ptrF)==0) {
        if (fileVide(ptrF)) {
           
            ptrF->Tete = ptrF->Queue = 0;
        } else {
            ptrF->Queue = (ptrF->Queue + 1);
        }
        ptrF->Elts[ptrF->Queue] = *ptrE; 
        return 1;
    }
    return 0; 
}

int fileVide(const T_File *ptrF) {
    return (ptrF->Tete == -1 && ptrF->Queue == -1);
}

int filePleine(const T_File *ptrF) {
    return ((ptrF->Queue + 1) == ptrF->Tete);
}

T_Elt premier(T_File *ptrF) {
   
    return ptrF->Elts[ptrF->Tete];
}

void afficherFile(const T_File *ptrF) {

    printf("Contenu de la file : ");
    if (ptrF->Tete == -1) {
        printf("File vide.\n");
    } else {
        for (int i = ptrF->Tete; i <= ptrF->Queue; i++) {
            printf("%d ", ptrF->Elts[i]);
        }
        printf("\n");
    }
}
