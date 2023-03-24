#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decode.h"
#include "alchimie.h"

/*
 *  l exemple suivant décrit la saisie du livre de sorts connus qui
 *  est structuré sous la forme de trois tableaux de taille MAX_ELEMENT
 *
 *     - incantationSortsConnus : liste des noms des sorts connus
 *     - typeSortsConnus : liste des types de sorts connus
 *     - elementSortsConnus : liste des éléments des sorts connus
 */


/* Liste des sorts connus  sous la forme d un
 * tableau de chaine dont la taille maximum est MAX_ELEMENT
 */
char incantationSortsConnus[MAX_ELEMENT][MAX_INCANTATION];

/* Types des sorts connus sous la forme d'un
 * tableau de TypeSorts
 */
TypeSort typeSortsConnus[MAX_ELEMENT];

/* Elements des sorts connus sous la forme d'un
 * tableau de ElementSorts
 */
ElementSort elementSortsConnus[MAX_ELEMENT];

int main()
{
    char temp[100];

    printf("%s","Saisie de votre livre de sorts\n");
    for (int i;i<MAX_ELEMENT;i++)
    {
        printf("%s %d %s","Sort[",i,"] - Entrez incantation : ");
        scanf("%s",&temp);
        strcpy(incantationSortsConnus[i], temp);
        printf("%s %d %s","Sort[",i,"] - ");
        elementSortsConnus[i]=saisieElement();
        printf("%s %d %s","Sort[",i,"] - ");
        typeSortsConnus[i]=saisieType();
    }

    printf("%s","\n\Livre de sorts\n");
    for (int i;i<MAX_ELEMENT;i++)
    {
        printf("%s %d %s %s %s","Sort[",i,"] Incantation : ",incantationSortsConnus[i],"\n");
        elt2Char(elementSortsConnus[i],temp);
        printf("%s %d %s %s %s","Sort[",i,"] Element     : ",temp,"\n");
        type2Char(typeSortsConnus[i],temp);
        printf("%s %d %s %s %s","Sort[",i,"] Type        : ",temp,"\n\n");
    }

    return 0;
}
