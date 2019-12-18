#include "CowBull.h"

int CowBullGame::GetMaxTries() const { return MyMaxTries; }
int CowBullGame::GetCurrentTry() { return MyCurrentTry; }


void CowBullGame::Reset()
{
	return;
}

bool CowBullGame::IsGameWon()
{
	return false;
}

bool CowBullGame::CheckGuessValidity(std::string)
{
	return false;
}
