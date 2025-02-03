#include "GameManager.hpp"

GameManager::GameManager()
{

    puts("Creates GAME MANAGER!");
}

GameManager::~GameManager()
{
    puts("Deletes GAME MANAGER!");
}

void GameManager::startGame()
{
    Board gamingBoard;
    Dice gamingDice(12);
}

void GameManager::showLeaderboard()
{
    puts("Show leaderboard!");
}

void GameManager::mainMenu()
{
    puts("Main menu!");
}