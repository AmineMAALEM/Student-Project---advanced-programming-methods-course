#pragma once
#include<stdio.h>
#include<cstdlib>
#include<iostream>
typedef struct Element Element;
struct Element
{
    int nombre;
    Element* next;
};
//ou op peut cree la structure comme ça :
/*typedef struct Element
{
    int nombre;
    struct Element *suivant;
}Element;*/
typedef struct Liste Liste;//Liste cest le type
struct Liste
{
    Element* debut;
};
Liste* initialisation(int premierNombre);
void insertion(Liste* liste, int nvNombre);
void suppression(Liste* liste);
void afficherListe(Liste* liste);





void ExuctionTP2(int &valeurTmp);
