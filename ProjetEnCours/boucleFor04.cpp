//But:Écrivez un programme qui lit 50 nombres et qui détermine et affiche la plus grande valeur. Trois variables:
//	  Compteur: Variable jusqu'à 50
//	  Max: 
//    Nombre:
//Auteur: Hadrien Breton
//Date: 2020-09-28

#include <iostream>
using namespace std;

/*
for (int compteur = 1; compteur <= 5; compteur++
*/

int main()
{
	setlocale(LC_ALL, "");

	const int COMBIEN_DE_NOMBRES = 50;

	int max;
	int nombre;

	cout << "Entrez le 1er nombre: \n";
	cin >> max;

	for (int compteur = 1; compteur < COMBIEN_DE_NOMBRES; compteur++)
	{
		cout << "Entrez le " << compteur +2 << "e nombre: \n";
		cin >> nombre;

		if (nombre >= max)
		{
			max = nombre;
		}
	}

	cout << "Le nombre le plus grand est " << max;
}