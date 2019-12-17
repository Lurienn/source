#include "CowBull.h"

void CowBullGame::Reset()
{
	return;
}

int CowBullGame::GetMaxTries()
{
	return MyMaxTries;
}

int CowBullGame::GetCurrentTry()
{
	return 0;
}

bool CowBullGame::IsGameWon()
{
	return false;
}

bool CowBullGame::CheckGuessValidity(std::string)
{
	return false;
}
