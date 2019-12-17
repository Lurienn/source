
#include <iostream>
#include <string>
#include"CowBull.h"
#include <fstream>


void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

//start gry
int main()
{
	bool bPlayAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		bPlayAgain - AskToPlayAgain();
	} while (bPlayAgain);
	return 0;
}

void PlayGame()
{
	CowBullGame BCGame; // instatncja nowej gry
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
