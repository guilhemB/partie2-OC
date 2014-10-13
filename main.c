#include <stdio.h>
#include <stdlib.h>
#include "lire_lettre.h"


int main()
{
    char motSecret[8]= {};
    char motJoueur[8]= {"********"};  //initialisation du mot

    puts("Entrez un mots de 8 lettres");
    int i;
    for(i=0; i<8; i++)
    {
        motSecret[i]=lire_lettre();  // Demande letre a letre lemot a deviner
    }
    system("clear"); //efface le mot en clair a l'ecran

int chance=5;
    while(chance!=0)        //tant que je n'ai pas perdu
    {
        int i;
        int victoire=1;
        for(i=0; i<8; i++)
        {
            if(motJoueur[i]=='*')
            {
                victoire*=0; //si une seule lettre est differente, on enleve une chanse
            }
        }
        if(victoire==1)
        {
            for(i=0; i<8; i++)
            {
                printf("%c",motJoueur[i]); //sinon on a gagner
            }

            printf("\nBravo, vous avez gagnez\n");
            return 0;
        }

        printf("Il vous reste %d chances pour trouver le mot\n",chance);
        int bonne_lettre=0;
        for(i=0; i<8; i++)
        {
            printf("%c",motJoueur[i]);
        }
        printf("\n");

        char test=lire_lettre();
        for(i=0; i<8; i++)
        {
            if(test==motSecret[i])
            {
                motJoueur[i]=motSecret[i];
                bonne_lettre=1;
            }
        }
        if(bonne_lettre==0)
        {
            chance-=1;
        }
    }

    printf("Vous avez perdu, le mot a trouver était ");
    for(i=0; i<8; i++)
    {
        printf("%c",motSecret[i]);
    }
 
   printf("\n");
    return 0;
}
