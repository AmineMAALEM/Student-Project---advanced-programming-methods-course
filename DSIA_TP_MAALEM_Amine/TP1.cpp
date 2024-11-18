#include"TP1.h"

//void fusionner();
//void triFusion();

void ExuctionTP1(int &choixTp)
{
    int taille, i, j, k;
    printf("Veuillez donner la taille du tableau :\n");
    std::cin>>taille;
    int min, tmp;
    int debut = 0, fin = taille;
    
    int tab[100], clonne[100];
    printf("Maintenant veuillez entrer les valeurs des elements du tableau :\n");
    for (i = 0; i < taille; i++)
    {
        printf("La valeur du %d element est :", i + 1);
        std::cin >> tab[i];
    }
    for (i = 0; i < taille; i++)
    {
        clonne[i] = tab[i];
    }
    int choixAlgo, choix;


    printf("Avec quelle algorithme vous voulez trie votre tableau :\n");
    do
    {
        int compteur = 0;
        printf("\nVeuillez enter votre choix d algorithme :\n");
        printf("(1) Algorithme de Tri par Selection\n");
        printf("(2) Algorithme de Tri par Insertion\n");
        printf("(3) Algorithme de Tri par Propagation\n");
        //printf("(4) Algorithme de Tri par Fusion\n");
        //printf("(5) Algorithme de Tri Rapide\n");
        printf("(0) Pour Quitter le programme \n");

        std::cin >> choixAlgo;
        if (choixAlgo == 0)
        {
            int valeurTmp = 0;
        }
        if (choixAlgo != 0)
        {
            printf("\nA ce que vous voulez voir les changement a chaque iteration ?");
            printf("\ntapez '1' pour oui et '0' pour non\n");
            std::cin>>choix;
            //printf("(L affichage des iterations est disponible que pour les algo non recursif '1'et'2'et'3')\n ");
        }
        
        switch (choixAlgo)
        {
        case 1:
            printf("\nAlgorithme de Tri par Selection\n");
            for (i = 0; i < taille - 1; i++)
            {
                min = i;
                for (j = i + 1; j < taille; j++)
                {
                    if (tab[j] < tab[min])
                        min = j;
                    if (min != i)
                    {
                        tmp = tab[min];
                        tab[min] = tab[i];
                        tab[i] = tmp;
                        if (choix == 1)
                        {
                            if (j == 1)
                            {
                                for (k = 0; k < taille; k++)
                                {
                                    printf("%d\t", clonne[k]);
                                }
                                printf("\n");
                            }
                            printf("\n");


                            for (k = 0; k < taille; k++)
                            {
                                printf("%d\t", tab[k]);
                            }
                            printf("\n");
                        }
                    }
                }
            }
            break;

        case 2:
            printf("Algorithme de Tri par Insertion\n");
            for (i = 1; i < taille; i++)
            {
                tmp = tab[i];
                j = i;
                while (j > 0 && tab[j - 1] > tmp)
                {
                    tab[j] = tab[j - 1];
                    j = j - 1;
                }
                tab[j] = tmp;
                if (choix == 1)
                {
                    for (k = 0; k < taille; k++)
                    {
                        if (j == 1)
                        {
                            printf("%d\t", clonne[k]);
                        }
                    }
                    printf("\n");


                    for (k = 0; k < taille; k++)
                    {
                        printf("%d\t", tab[k]);
                    }
                    printf("\n");
                }
            }
            break;

        case 3:
            printf("Algorithme de Tri par Propagation\n");
            for (i = taille - 1; i > 0; i--)
            {
                for (j = 0; j < i; j++)
                {
                    if (tab[j + 1] < tab[j])
                    {
                        compteur++;
                        tmp = tab[j];
                        tab[j] = tab[j + 1];
                        tab[j + 1] = tmp;
                        if (choix == 1)
                        {
                            for (k = 0; k < taille; k++)
                            {
                                if (compteur == 1)
                                {
                                    printf("%d\t", clonne[k]);
                                }
                            }
                            printf("\n");


                            for (k = 0; k < taille; k++)
                            {
                                printf("%d\t", tab[k]);
                            }
                            printf("\n");
                        }
                    }
                }
            }
            break;

        case 4:
            printf("Algorithme de Tri par Fusion\n");
            printf("en travaux \n");
            //triFusion(tab, debut, fin);
            for (k = 0; k < taille; k++)
            {
                printf("%d\t", tab[k]);
            }
            break;

        case 5:
            printf("en travaux\n");
            printf("Algorithme de Tri Rapide\n");
            break;

        default:
            printf("Votre choix ne figure pas dans la liste des choix!\nVous devez choisir un nombre entre 1 et 5\n");
            break;
        
        case 0:
            
            choixAlgo = 0;
            return;
            break;
        }
        for (i = 0; i < taille; i++)
        {
            tab[i] = clonne[i];
        }
    } while (choixAlgo != 0);
}
/*void fusionner(int t[], int debut, int milieu, int fin)
{
    int tmp[fin - debut + 1];
    int i = debut;
    int gauche = debut;
    int droite = milieu + 1;
    while ((i <= milieu) && (droite <= fin))
    {
        if (t[i] <= t[droite])
        {
            tmp[gauche++] = t[i++];
        }
        else
        {
            tmp[gauche++] = t[droite++];
        }
    }
    while (i <= milieu)
        tmp[gauche++] = t[i++];
    while (droite <= fin)
        tmp[gauche++] = t[droite++];

    for (i = debut; i <= fin; i++)
    {
        t[i] = tmp[i];
    }
}
void triFusion(int t[], int debut, int fin)
{
    if (debut < fin)
    {
        int milieu = (debut + fin) / 2;
        triFusion(t, debut, milieu);
        triFusion(t, milieu + 1, fin);
        fusionner(t, debut, milieu, fin);
    }
}
*/