#include "Shuffle.h";
#include <ctime>; // fonctionnalit� du nombre al�atoire
#include <cstdlib>; // fonctionnalit� du nombre al�atoire
#include <string>;

using namespace std;

string shuffle(string motMystere)
{
    srand(time(0));//initialisation de la g�neration de nombres al�atoire.
    string melange;
    int position(0);
    while (motMystere.size() != 0)//Tant que la taille n'est pas encore egale a zero on pioche les lettres sans remise puis on les melange
    {

        position = rand() % motMystere.size();//Coix d'un mot � une p�sition
        melange += motMystere[position];//Positionnement d'une lettre dans Mot_mystere
        motMystere.erase(position, 1);//on retire la lettre du lettre mystere pour qu'elle ne soit plus retirer.
    }
    return melange;
}