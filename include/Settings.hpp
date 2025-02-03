#pragma once

#include <iostream>

/**
 * @brief Class responsible for store and managing of game settings;
 *
 */
class Settings
{
private:
    /**
     * @brief Board size;
     *
     */
    int m_boardSize = 9; // Default board size

    /**
     * @brief Max dice value;
     *
     */
    int m_maxDiceValue = 12; // Default max dice value

public:
    /**
     * @brief Construct a new Settings object;
     *
     */
    Settings();

    /**
     * @brief Destroy the Settings object;
     *
     */
    ~Settings();

    // Getters

    /**
     * @brief Get the Board Size parameter;
     *
     * @return int Board size;
     */
    int getBoardSize() const;

    /**
     * @brief Get the Max Dice Value parameter;
     *
     * @return int Max dice value;
     */
    int getMaxDiceValue() const;

    // Setters

    /**
     * @brief Set the Board Size parameter
     *
     * @param t_size New board size;
     */
    void setBoardSize(int t_size);

    /**
     * @brief Set the Max Dice Value parameter
     *
     * @param t_value New max dice value;
     */
    void setMaxDiceValue(int t_value);
};
