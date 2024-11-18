#include"TP2.h"


void ExuctionTP2(int &valeurTmp)
{
    int n, e, qst = 0;
    int nombreInitial;
    printf("veuillez donner le nombre pour initialiser la chaine de caractere  :");
    std::cin>>nombreInitial;
    Liste* maListe = initialisation(nombreInitial);
    printf("Donner le nombre d'elements pour votre liste :");
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        printf("la val du %d element :", i + 1);
        std::cin >> e;
        insertion(maListe, e);
    }
    afficherListe(maListe);
    printf("\n\n");
    do
    {
        printf("a ce que vous voulez supprimer le 1er elements:(1/0)\ntapez 1 pour oui et 0 pour non\n");
        std::cin >> qst;
        if (qst == 1)
            suppression(maListe);
        afficherListe(maListe);
    } while (qst == 1);
    printf("\nLa version final de votre chaine est : \n\n");
    afficherListe(maListe);

}
Liste* initialisation(int premierNombre)
{
    Liste *variableListe = (Liste*)malloc(sizeof(*variableListe));//et liste cest la variable
    Element *variableElement = (Element*)malloc(sizeof(*variableElement));

    if (variableListe == NULL || variableElement == NULL)
    {
        exit(0);
    }

    variableElement->nombre = premierNombre;
    variableElement->next = NULL;
    variableListe->debut = variableElement;

    return variableListe;
}
void insertion(Liste* variableListe, int nvNombre)
{
    Element* nouveau = (Element*)malloc(sizeof(*nouveau));
    if (variableListe == NULL || nouveau == NULL)
    {
        exit(0);
    }
    nouveau->nombre = nvNombre;

    nouveau->next = variableListe->debut;
    variableListe->debut = nouveau;
}
void suppression(Liste* variableListe)
{
    if (variableListe == NULL)
    {
        exit(0);
    }

    if (variableListe->debut != NULL)
    {
        Element* elementSupprimer = variableListe->debut;
        variableListe->debut = variableListe->debut->next;
        free(elementSupprimer);
    }
}
void afficherListe(Liste* variableListe)
{
    if (variableListe == NULL)
    {
        exit(0);
    }

    Element* actuel = variableListe->debut;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->nombre);
        actuel = actuel->next;
    }
    printf("NULL\n");
}