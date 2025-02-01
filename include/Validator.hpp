#pragma once

#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Class that checks valid number combinations of numbers
 *
 */
class Validator
{
private:
public:
    /**
     * @brief Construct a new Validator object;
     *
     */
    Validator();

    /**
     * @brief Destroy the Validator object;
     *
     */
    ~Validator();

    /**
     * @brief Get the Valid Combinations object
     *
     * @param availableNumbers Numbers available to be combined;
     * @param targetSum Target sum for the combinations of numbers;
     * @return vector<vector<int>> All the combinations possible;
     */
    vector<vector<int>> getValidCombinations(vector<int> &availableNumbers, int targetSum);
};