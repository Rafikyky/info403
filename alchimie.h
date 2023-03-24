#ifndef ALCHIMIE_H_INCLUDED
#define ALCHIMIE_H_INCLUDED



/* procedure qui convertit un élément dans une chaine */
void elt2Char(ElementSort elt, char chaine[]);

/* procedure qui convertit un type dans une chaine */
void type2Char(TypeSort typ, char chaine[]);

/* fonction qui permet de saisir au clavier un element */
ElementSort saisieElement(void);

/* fonction qui permet de saisir au clavier un type */
TypeSort saisieType(void);

#endif // ALCHIMIE_H_INCLUDED
