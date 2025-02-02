#pragma once

#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
#include <algorithm>

using namespace std;

/**
 * @brief Class that checks valid number combinations of numbers
 *
 */
namespace Validator
{
    /**
     * @brief Get the Valid Combinations object
     *
     * @param availableNumbers Numbers available to be combined;
     * @param targetSum Target sum for the combinations of numbers;
     * @return vector<vector<int>> All the combinations possible;
     */
    vector<vector<int>> getValidCombinations(const vector<int> &availableNumbers, int targetSum);
};