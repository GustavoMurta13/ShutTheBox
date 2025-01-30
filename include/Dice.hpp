#pragma once

#include <iostream>
#include <random>

using namespace std;

/**
 * @brief Class that manages dice logic;
 *
 */
class Dice
{
private:
    /**
     * @brief Max value allowed to be rolled by the dice;
     *
     */
    const int m_maxValueAllowed;

public:
    /**
     * @brief Construct a new Dice object;
     *
     * @param maxValue Value that limits the number rolled;
     */
    Dice(int t_maxValue);

    /**
     * @brief Destroy the Dice object;
     *
     */
    ~Dice();

    /**
     * @brief Simulates a dice roll;
     *        The values vary between 1 and m_maxValueAllowed;
     *
     * @return int Dice roll value;
     */
    int rollDice();
};