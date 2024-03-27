// SDA1 TP 9 PILE de TAD (PILE d'ELEMENT)

#include "pile.h"
#include "file.h"

void testFile(T_File *mafile ){ 
	initFile(mafile);
	T_Elt elts=1;
	ajouter(mafile, &elts);
	elts=2;
	ajouter(mafile, &elts);
	retirer(mafile, &elts); //cela retire le premier element de la file donc 1 ici et cela laisse le 2
	afficherFile(mafile);
}

void testPile(T_Pile *mapile){
	initPile(mapile);
	T_Elt elt=1;
	empiler(mapile, elt);
	elt=2;
	empiler(mapile, elt);
	depiler(mapile, &elt); //cela retire le dernier element placé sur le haut de la pile donc ici 2, donc cela laisse le 1 qui était le premier élément de la pile
	afficherPile(mapile);
}

int menu()
{

int choix;
printf("\n\n\n SDA1 TP9");
printf("\n\n\n 1 : tester mon fichier file.c");
printf("\n 2 : tester mon fichier pile.c");
printf("\n 3 : afficher et compter les permutations d'une chaine");
printf("\n 4 : afficher et compter les solutions pour un échiquier ");
printf("\n 0 :  QUITTER  ");
printf("\n votre choix ?  ");
scanf("%d",&choix);
return choix;
}

int main()
{
T_File mafile;
T_Pile mapile;
int chx;
// int taille;
//char chaine[20];

do
{
chx=menu();
switch (chx)
	{
	case 1 :  
		//testez toutes vos fonctions par un jeu de test de votre choix
		testFile(&mafile);// //TP9 partie 1 : à ecrire 
		break;
	case 2 : //testez toutes vos fonctions par un jeu de test de votre choix
		testPile(&mapile); //TP9 partie 1 : à ecrire 

		break; 
	case 3 : 
		//scanf("%s",chaine); //une chaine de longueur <=MAX
		//permut(&mapile,chaine); //TP9 partie 2: ecrire permut
		break;
	case 4 : 
		//scanf("%d",&taille);//taille echiquier <=MAX
		//echiquier(&mapile,taille); //TP9 partie 3: ecrire echiquier
		break;



	}
}while(chx!=0);

printf("\nau plaisir de vous revoir ...\n");
return 0;
}
