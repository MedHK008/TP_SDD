#include"headerofall.h"

int main()
{
    tab*tb=NULL;//tableau liste
    PTliste*L=NULL;
    PTpile*P=NULL;
    PTfile*F=creerfile();

    tb=(tab*)malloc(sizeof(tab));
    Inittab(tb);
    insererFintab(tb,9);
    insererFintab(tb,4);
    insererFintab(tb,18);
    insererFintab(tb,5);
    insererFintab(tb,12);
    insererFintab(tb,6);
    insererFintab(tb,10);
    insererFintab(tb,7);
    insererFintab(tb,14);
    insererFintab(tb,8);
    insererFintab(tb,11);
    insererFintab(tb,0);
    insererFintab(tb,15);
    insererFintab(tb,-1);
    insererFintab(tb,22);
    insererFintab(tb,3);
    insererFintab(tb,19);
    insererFintab(tb,1);
    insererFintab(tb,23);
    insererFintab(tb,2);
    insererFintab(tb,17);
    insererFintab(tb,20);
    insererFintab(tb,21);
    affichageTab(*tb);
    suppressionAIndicetab(tb,0);
    suppressionAIndicetab(tb,12);
    suppressionAIndicetab(tb,tb->NbElem-1);
    affichageTab(*tb);
    insererPositiontab(tb,0,10);
    insererFintab(tb,-3);
    affichageTab(*tb);
    L=listetab_to_listeprt(L,tb);
    affichageTab(*tb);
    afficher(L);
    L=inserer_debut(L,15);
    L=inserer_fin(L,-1);
    afficher(L);
    L=supprimerOccurence(L,10);
    afficher(L);
    P=listeptr_to_pileptr(P,L);
    afficher_pile(P);
    P=insererpositionpileptr(P,7,6);
    afficher_pile(P);
    P=supprimervaleurpileptr(P,-1);
    afficher_pile(P);
    pileptr_to_fileptr(P,F);
    afficher_file(F);
    Arbre* A;
    A=creercellule(F->debut->entier);
    defiler(F);
    A=fileptr_to_arbreptr(A,F);
    afficher_infixe(A);
    A=supprimerarbre(A,4);
    afficher_infixe(A);
    return 0;
}
