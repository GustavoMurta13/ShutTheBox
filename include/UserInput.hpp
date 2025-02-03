#pragma once

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

#define RESET "\033[0m"          // Reset color
#define NUMBERCOLOR "\033[1;34m" // Number color

/**
 * @brief Class that manges the input of the user (Combinations);
 *
 */
class UserInput
{
private:
    /**
     * @brief Display all of the valids choices for combinations;
     *
     * @param t_validCombinations All of the valid combinations;
     */
    void displayValidChoices(const std::vector<std::vector<int>> &t_validCombinations);

    /**
     * @brief Get the User Selection (input);
     *
     * @param t_maxOption Number of the last option possible;
     * @return int Option chosen;
     */
    int getUserSelection(int t_maxOption);

public:
    /**
     * @brief Construct a new User Input object;
     *
     */
    UserInput();

    /**
     * @brief Destroy the User Input object;
     *
     */
    ~UserInput();

    /**
     * @brief Get the Player Choice for the combination of tiles;
     *
     * @param t_validCombinations All of the valid combinations;
     * @return vector<int> Combination chosen;
     */
    vector<int> getPlayerChoice(const vector<vector<int>> &t_validCombinations);
};