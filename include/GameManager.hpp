#pragma once

#include <iostream>
#include <memory>

#include "Board.hpp"
#include "Dice.hpp"
#include "UserInput.hpp"

#include "Validator.hpp"

using namespace std;

class GameManager
{
private:
    unique_ptr<Board> gamingBoard;
    unique_ptr<Dice> gamingDice;
    UserInput userInteraction;
    
    // Settings gameSettings;
    // LeaderBoard scoreLeaderboard;
    // Menu mainMenu;

public:
    GameManager();
    ~GameManager();
    void startGame();
    void showLeaderboard();
    void mainMenu();
};