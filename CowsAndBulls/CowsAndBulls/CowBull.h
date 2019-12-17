#pragma once
#include <string>
class CowBullGame
{
public:
	void Reset(); //nie wiem co to jest
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string);


	// ???
private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};