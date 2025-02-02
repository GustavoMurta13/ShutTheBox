#pragma once

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#include "Validator.hpp"

using namespace std;

#define RESET "\033[0m"    // Reset color
#define RED "\033[1;31m"   // Red color
#define GREEN "\033[1;32m" // Green color

/**
 * @brief Class that manages the game board state;
 *
 */
class Board
{
private:
    /**
     * @brief Tracks of the numbered tiles
     *
     */
    unordered_map<int, bool> m_numbers;

public:
    /**
     * @brief Construct a new Board object;
     *
     * @param t_sizeBoard Size of board;
     */
    Board(int t_sizeBoard = 9);

    /**
     * @brief Destroy the Board object;
     *
     */
    ~Board();

    /**
     * @brief Display the gaming board;
     *
     */
    void display() const;

    /**
     * @brief Mark selected numbers as used;
     *
     * @param choices Selected numbers;
     */
    void markUsed(const vector<int> &t_choices);

    /**
     * @brief Get the available numbers;
     *
     * @return vector<int> Vector of available numbers;
     */
    vector<int> getAvailableNumbers() const;

    /**
     * @brief Check if it is Game Over through the validator
     *
     * @param rolledValue Value rolled in the dice
     * @return true It is GAME OVER
     * @return false It is NOT GAME OVER
     */
    bool isGameOver(int rolledValue) const;
};