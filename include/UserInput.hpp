#pragma once

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

#define RESET "\033[0m"          // Reset color
#define NUMBERCOLOR "\033[1;34m" // Number color

class UserInput
{
private:
    void displayValidChoices(const std::vector<std::vector<int>> &validCombinations);
    int getUserSelection(int maxOption);

public:
    UserInput();
    ~UserInput();
    vector<int> getPlayerChoice(const vector<vector<int>> &validCombinations);
    // void displayValidChoices(const std::vector<std::vector<int>> &validCombinations);
    // int getUserSelection(int maxOption);
};