
#include <iostream>
#include <string>
#include"CowBull.h"



void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

CowBullGame BCGame; // instatncja nowej gry

//start gry
int main()
{
	bool bPlayAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		//bPlayAgain - AskToPlayAgain();
	} 
	while (bPlayAgain);
	return 0;
}

void PlayGame()
{
	
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;
	// loopsy i powroty
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		std::string Guess = "";
		Guess = GetGuess();
	
		std::cout << "Twoja odpowiedz to: " << Guess << std::endl;
		GetGuess();
		std::cout << std::endl;
	}
}

// wprowadzenie
void PrintIntro()
{
	constexpr int WORLD_LENGHT = 5;
	std::cout << "Witaj w grze o krowach i byczkach" << std::endl;
	std::cout << "Zgadnij jakie slowo na " << WORLD_LENGHT;
	std::cout << " liter przychodzi mi na mysl\n";
	std::cout << std::endl;
	return;
}
//zapytanie
std::string GetGuess()
{
	int CurrentTry = BCGame.GetMaxTries();

	std::cout << "Try" << CurrentTry << ". Zapisz odpowiedz: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
return Guess;
}

bool AskToPlayAgain() 
{
	std::cout << "chcesz zagrac jeszcze? (y/n)";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[1] == 'y') || (Response[0] == 'Y');
}
