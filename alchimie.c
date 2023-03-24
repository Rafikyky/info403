#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decode.h"
#include "alchimie.h"



void elt2Char(ElementSort elt, char chaine[])
 {
     switch (elt)
        {
            case feu   : strcpy(chaine,"feu  ") ; break;
            case air   : strcpy(chaine,"air  "); break;
            case eau   : strcpy(chaine,"eau  "); break;
            case terre : strcpy(chaine,"terre") ; break;
            default    : strcpy(chaine,"*****") ; break;
        }
 }



ElementSort saisieElement(){

    char mot[15];
    ElementSort res=-1;

    printf("%s","Entrez un element (terre, air, eau, feu): ");
    scanf("%s",mot);

    if (strcmp(mot,"terre")==0) res=terre;
    if (strcmp(mot,"air")==0) res=air;
    if (strcmp(mot,"eau")==0) res=eau;
    if (strcmp(mot,"feu")==0) res=feu;

    return res;

}


void type2Char(TypeSort typ, char chaine[])
 {
     switch (typ)
        {
            case illusion     : strcpy(chaine,"illusion    ") ; break;
            case abjuration   : strcpy(chaine,"abjuration  "); break;
            case enchantement : strcpy(chaine,"enchantement"); break;
            case alteration   : strcpy(chaine,"alteration  ") ; break;
            case conjuration  : strcpy(chaine,"conjuration ") ; break;
            case evocation    : strcpy(chaine,"evocation   "); break;
            case invocation   : strcpy(chaine,"invocation  ") ; break;
            case divination   : strcpy(chaine,"divination  ") ; break;
            default           : strcpy(chaine,"************") ; break;
        }
 }

TypeSort saisieType(){

    char mot[15];
    TypeSort res=-1;

    printf("%s","Entrez un type (illusion, abjuration, ... ): ");
    scanf("%s",mot);

    if (strcmp(mot,"illusion")==0) res=illusion;
    if (strcmp(mot,"abjuration")==0) res=abjuration;
    if (strcmp(mot,"enchantement")==0) res=enchantement;
    if (strcmp(mot,"alteration")==0) res=alteration;
    if (strcmp(mot,"conjuration")==0) res=conjuration;
    if (strcmp(mot,"evocation")==0) res=evocation;
    if (strcmp(mot,"invocation")==0) res=invocation;
    if (strcmp(mot,"divination")==0) res=divination;

    return res;

}


