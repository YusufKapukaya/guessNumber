#include <cstdlib>		// srand, rand
#include <ctime>		// time
#include <iostream>
using namespace std;

int main()
{
	srand( static_cast<unsigned int>( time(nullptr) ) ); // seed anhand der Systemzeit initialisieren

	unsigned int rateVersuche = 0;

	unsigned int benutzerZahl = 0;
	unsigned int computerZahl = ( rand() % 10 ) + 1;

	cout << "Der Computer hat sich eine Zahl von 1 bis 10 ausgedacht." << endl;
	cout << "Raten Sie die Zahl!\n" << endl;

	do
	{
		++rateVersuche; // Versuch zählen

		cout << "Rateversuch Nummer " << rateVersuche << ": ";
		cin >> benutzerZahl;

	} while( computerZahl != benutzerZahl );

	cout << "\nHerzlichen Glueckwunsch!\nSie haben die Zahl '"
		 << computerZahl
		<< "' mit " << rateVersuche
		<< " Versuchen geraten!\n" << endl;

	system("PAUSE"); // alternativ: cin.get();
	return 0;
}
