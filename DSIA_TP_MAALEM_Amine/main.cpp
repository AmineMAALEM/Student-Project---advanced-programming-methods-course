#include"main.h"
#define WIDTH 60
int main()
{
	Forme1(WIDTH, '|');
	textAnimation(welcomText);
	textAnimation("From :Amine MAALEM\nSpeciality :Data Science et Intelligence Artificielle\n",50);
	textAnimation("To :Mr Oussama ARKI\n",50);
	Sleep(500);
	textAnimation("Chargement en cours .....\n", 200);
	
	int choixTp;
	Forme1(WIDTH, '|');
	
	int valeurTmp;
	do
	{
		system("cls");
		Forme1(WIDTH, '|');
		std::cout << "quelle TP voullez vous ?\n" << std::endl;
		printf("(1) 1er TP les Algorithmes de trie\n");
		printf("(2) 2eme TP les listes chaines \n");
		printf("(3) 3eme TP introduction C++ avec Structure\n");
		printf("(4) 4eme TP Gestion de Promtion d'eleves en C++ \n");
		printf("(5) 5eme TP Heritage et Polymorphisme en C++\n");
		printf("(0) Pour Quitter le programme \n");
		Forme1(WIDTH, '|');
		std::cout << "Votre Choix:";
		std::cin >> choixTp;
		switch (choixTp)
		{
		case TP1:
			system("cls");
			Forme1(WIDTH, '|');
			ExuctionTP1(valeurTmp);

			break;

		case TP2:
			system("cls");
			Forme1(WIDTH, '|');
			ExuctionTP2(valeurTmp);
			break;

		case TP3:
			system("cls");
			Forme1(WIDTH, '|');
			ExuctionTp3(valeurTmp);
			break;

		case TP4:
			system("cls");
			Forme1(WIDTH, '|');
			ExuctionTp4(valeurTmp);
			break;

		case TP5:
			system("cls");
			Forme1(WIDTH, '|');
			ExuctionTp5(valeurTmp);
			break;
		case QUITTER:
			system("cls");
			Forme1(WIDTH, '|');
			textAnimation("Merci pour votre Temps et a plus tard\n");
			Forme1(WIDTH, '|');
			return 0;
			break;

		default:
			Ligne();
			std::cout << "Choix invalide\n";
			Ligne();
			break;
			
		}

	} while (choixTp != 0);
	return 0;
}
