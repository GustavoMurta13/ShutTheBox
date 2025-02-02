#include "Validator.hpp"

// Function that calculates all of the combinations of 2 that added equal the target
void twoSum(const vector<int> &nums, int target, vector<vector<int>> &comb);

// Function that calculates all of the combinations of 2 that added equal the target
void oneSum(const vector<int> &nums, int target, vector<vector<int>> &comb);

vector<vector<int>> Validator::getValidCombinations(const vector<int> &availableNumbers, int targetSums)
{
    vector<vector<int>> ans;

    oneSum(availableNumbers, targetSums, ans);
    twoSum(availableNumbers, targetSums, ans);

    // if (ans.empty())
    // {
    //     std::cout << "No valid combinations found for " << targetSums << "." << std::endl;
    // }

    // for (const auto &comb : ans)
    // {
    //     std::cout << "[ ";
    //     for (const auto &num : comb)
    //     {
    //         std::cout << num << " ";
    //     }
    //     std::cout << "]" << std::endl;
    // }
    return ans;
}

void twoSum(const vector<int> &nums, int target, vector<vector<int>> &comb)
{
    unordered_set<int> numberSet;

    for (const int &iter : nums)
    {
        int complement = target - iter;

        auto possibleComp = numberSet.find(complement);

        if (possibleComp != numberSet.end()) // FOUND COMPLEMENT
        {
            comb.push_back({min(iter, complement), max(iter, complement)});
        }
        else
        {
            numberSet.insert(iter);
        }
    }
}

void oneSum(const vector<int> &nums, int target, vector<vector<int>> &comb)
{
    unordered_set<int> numberSet = {nums.begin(), nums.end()};

    if (find(nums.begin(), nums.end(), target) != nums.end())
    {
        comb.push_back({target}); // Store valid single-number combination
    }
}
