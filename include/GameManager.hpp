#pragma once

#include <iostream>
#include <memory>

#include "Board.hpp"
#include "Dice.hpp"
#include "UserInput.hpp"
#include "Settings.hpp"
#include "SettingsInput.hpp"

#include "Validator.hpp"

using namespace std;

class GameManager
{
private:
    unique_ptr<Board> m_gamingBoard;
    unique_ptr<Dice> m_gamingDice;
    UserInput m_userInteraction;
    Settings m_gameSettings;
    SettingsInput m_settingsInput;

    // LeaderBoard m_scoreLeaderboard;
    // Menu m_mainMenu;

public:
    GameManager();
    ~GameManager();
    void startGame();
    void processTurn();
    void showLeaderboard();
    void mainMenu();
};