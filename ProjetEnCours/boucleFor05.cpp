//But: Demander à l'utilisateur un nombre compris entre 1 et 70. Si le nombre est bien compris entre 1 et 70, alors afficher autant d'* que les nombre choisi. Sinon afficher erreur.
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

	int nb;

	cout << "Entrez un nombre compris entre 1 et 70: \n";
	cin >> nb;

	cout << nb << ": ";
	if (nb >= 1 && nb <= 70)
	{
		for (int compteur = 0; compteur < nb; compteur++)
		{
			cout <<"*";
		}
	}
	else
	{
		cout << "Erreur. Le nombre n'est pas compris entre 1 et 70.";
	}
	return 0;
}