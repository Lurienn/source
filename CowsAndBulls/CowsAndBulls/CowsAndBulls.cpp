
#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
string GetGuessandPrintBack();

//start aplikacji
int main()
{
	PrintIntro();

	// loopsy i powroty
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		GetGuessandPrintBack();
		cout << endl;
	}

	return 0;
}

// wprowadzenie
void PrintIntro()
{
	constexpr int WORLD_LENGHT = 5;
	cout << "Witaj w grze o krowach i byczkach" << std::endl;
	cout << "Zgadnij jakie slowo na " << WORLD_LENGHT;
	cout << " liter przychodzi mi na mysl\n";
	cout << endl;
	return;
}
//zapytanie
string GetGuessandPrintBack()
{
	cout << "Zapisz odpowiedz: ";
	string Guess = "";
	getline(cin, Guess);

	//prints the guess
	cout << "Twoja odpowiedz to: " << Guess << endl;
	return Guess;
}