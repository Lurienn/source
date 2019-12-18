#pragma once
#include <string>
class CowBullGame
{
public:
	
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //nie wiem co to jest
	bool CheckGuessValidity(std::string);

	CowBullGame();

	// ???
private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};