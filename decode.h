#ifndef ALCHIMIE_H_INCLUDED
#define ALCHIMIE_H_INCLUDED

#define MAX_ELEMENT 20		// nb max de sorts
#define MAX_INCANTATION 300 // taille max d'un incantation

/* Les élémentaux des sorts */
typedef enum {terre=0,eau=1,air=2,feu=3} ElementSort;

/* les types de sorts */
typedef enum {illusion=10,abjuration=15,enchantement=20, alteration, conjuration, evocation,invocation, divination} TypeSort;

/* decode une inscription */
void decodeParchemin(char inscriptionADecoder[],int nbsort,char incantationSorts[MAX_ELEMENT][MAX_INCANTATION], TypeSort typeSorts[MAX_ELEMENT], ElementSort elementSorts[MAX_ELEMENT]);

#endif // ALCHIMIE_H_INCLUDED
