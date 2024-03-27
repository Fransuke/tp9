#include "pile.h"
void initPile(T_Pile *P) {
    P->nbElts = -1; 
}


int pilePleine(const T_Pile *P) {
    return P->nbElts == MAX - 1;
}


int pileVide(const T_Pile *P) {
    return P->nbElts == -1; 
}


int empiler(T_Pile *P, T_Elt e) {
    if (pilePleine(P)) { 
        return 0; 
    }
    P->nbElts++; 
    P->Elts[P->nbElts] = e; 
    return 1; 
}


int depiler(T_Pile *P, T_Elt *pelt) {
    if (pileVide(P)) { 
        return 0; 
    }
    *pelt = P->Elts[P->nbElts]; 
    P->nbElts--; 
    return 1; 
}


T_Elt sommet(const T_Pile *P) {
    if (pileVide(P)) { 
        return -1;
    }
    return P->Elts[P->nbElts]; 
}


int hauteur(const T_Pile *P) {
    return P->nbElts + 1;
}


void afficherPile( T_Pile *P) {
    printf("Contenu de la pile : ");
    for (int i = 0; i <= P->nbElts; i++) { 
        printf("%d ", P->Elts[i]); 
    }
    printf("\n");
}
