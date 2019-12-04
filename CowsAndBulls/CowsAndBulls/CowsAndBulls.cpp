
#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();

//start gry
int main()
{
	PrintIntro();
	PlayGame();
	return 0;
}

void PlayGame()
{
	// loopsy i powroty
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		string Guess = "";
		Guess = GetGuess();
	
		cout << "Twoja odpowiedz to: " << Guess << endl;
		GetGuess();
		cout << endl;
	}
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
string GetGuess()
{
	cout << "Zapisz odpowiedz: ";
	string Guess = "";
	getline(cin, Guess);

	
	return Guess;
}