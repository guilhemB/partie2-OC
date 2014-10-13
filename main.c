#include <stdio.h>
#include <stdlib.h>

char lire_lettre()
{                                   //fonction renvoyant une lettre
    char c[2];
    printf("Entrez une lettre :  ");
    scanf("%s",c);
    return c[0];
}

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
 
   printf("\n");
    return 0;
}
