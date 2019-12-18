#include "main.h"
CowBullGame::CowBullGame() { Reset(); }

int CowBullGame::GetMaxTries() const { return MyMaxTries; }
int CowBullGame::GetCurrentTry() const { return MyCurrentTry; }


void CowBullGame::Reset() 
{
	constexpr int MAX_TRIES = 8;

	int MyCurrentTry = MAX_TRIES;
	int MyMaxTries = 8;
	return;
}

bool CowBullGame::IsGameWon() const
{
	return false;
}

bool CowBullGame::CheckGuessValidity(std::string)
{
	return false;
}


