#pragma once

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

#define RESET "\033[0m"  // Reset color
#define RED "\033[31m"   // Red color
#define GREEN "\033[32m" // Green color

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
     * @param sizeBoard Size of board;
     */
    Board(int sizeBoard = 9);

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
    void markUsed(const vector<int> &choices);

    /**
     * @brief Get the available numbers;
     *
     * @return vector<int> Vector of avaiable numbers;
     */
    vector<int> getAvailableNumbers() const;

    // bool isGameOver(int rolledValue, const Validator &validator) const; // Check game over condition
};