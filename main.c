#include <stdio.h>
#include "article.h"
#include <string.h>

void affiche_facture(int quantite[5],article liste[5]);
int main() {

    char recup[6];
    int quantite[5]={0},mem,i;
    article liste[5];

    strcpy(liste[0].code,"ay45e");
    strcpy(liste[0].nom,"banane");
    liste[0].prix=45;

    strcpy(liste[2].code,"rj45r");
    strcpy(liste[2].nom,"hand spinner");
    liste[2].prix=150;

    strcpy(liste[3].code,"ba380");
    strcpy(liste[3].nom,"Boeing A380");
    liste[3].prix=0.99f;

    strcpy(liste[4].code,"coucou");
    strcpy(liste[4].nom,"Un hug");
    liste[4].prix=0.01f;

    strcpy(liste[1].code,"reddi");
    strcpy(liste[1].nom,"Reddit");
    liste[1].prix=69420;

    do {
        printf("Veuiller entrer un code d'article\n");
        fflush(stdin);
        gets(recup);

        while (check(recup,liste)){

            printf(("Code incorectre veuillez reesayer\n"));
            fflush(stdin);
            gets(recup);
        }

        printf("Qu'elle quantite?\n");
        scanf("%d",&mem);

        while (mem<=0){
            printf("Quantité invalide\n");
            scanf("%d",&mem);
        }

        while (strcmp(recup,liste[i].code)!=0){
            ++i;
        }

        quantite[i]=mem;

        printf("Voulez vous entrer une nouveau produit? 0=non,1=oui\n");
        scanf("%d",&mem);

    } while (mem);


    affiche_facture(quantite,liste);

    return 0;
}

void affiche_facture(int quantite[5],article liste[5]){

    float somme=0;

    for (int i = 0; i < 5; ++i) {
        if(quantite[i]!=0){
            printf("%s   |   %d   |   %.2f euro   |   %.2f euro\n",liste[i].nom,quantite[i],liste[i].prix,liste[i].prix * quantite[i]);

            somme = somme+liste[i].prix * quantite[i];
        }


    }

    printf("Total HT: %.2f\n",somme);
    printf("Total TTC: %.2f\n",somme/0.8);
}