#include "Play.h";
#include "Shuffle.h";
#include <iostream>;
#include <string>;

using namespace std;

void play()
{
	playGame();
	replay();
}

void playGame()
{
	string mysteryWord;
	cout << "Joueur 1 - Merci de saisir un mot :" << endl;
	cin >> mysteryWord;

	string shuffledWord = shuffle(mysteryWord); // mélanger le mot mystère
	string tryWord("");
	int lap(5); // le joueur a 5 essais pour truvé le mot mystère
	while (!tryWord._Equal(mysteryWord) && lap > 0) // tant que le joeur n'a pas trouvé le mot mystère et qu'il lui reste encore des essais
	{
		cout << "Joueur 2 - vous avez " << lap << " essais. Quel est ce mot : " << shuffledWord << endl; // demander le nouveau mot du joueur 2
		cin >> tryWord; //Stocker ce mot dans la variable tryWord
		lap--; // supprimer un tour de jeu
	}

	if (tryWord == mysteryWord) {
		cout << "BRAVO !! Vous avez trouve le mot mystere !" << endl;
	}
	else {
		cout << "DOMMAGE ! Vous avez epuise toutes vos chances." << endl;
	}
}

void replay()
{
	string response;
	cout << "Voulez-vous rejouer ? (o/n)" << endl;
	cin >> response;

	if (response._Equal("o")) {
		play();
	}
	else if (response._Equal("n")) {
		cout << "Au revoir ! A bientot ;)" << endl;
	}
	else {
		replay();
	}
}
