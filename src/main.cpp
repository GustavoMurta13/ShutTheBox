#include <vector>

#include "hello.hpp"
#include "Dice.hpp"
#include "Board.hpp"
#include "Validator.hpp"
#include "UserInput.hpp"

int main()
{
    // Board gaming_board(12);

    // gaming_board.display();

    // gaming_board.markUsed({-1, 1, 12});
    // gaming_board.markUsed({-1, 1, 12});

    // gaming_board.display();

    // vector<int> availableNumbers = gaming_board.getAvailableNumbers();

    // Validator::getValidCombinations(availableNumbers, 1);

    // cout << gaming_board.isGameOver(1) << endl;

    UserInput userInput;

    std::vector<std::vector<int>> testCombinations = {
        {5},
        {1, 4},
        {2, 3},
        {1, 2, 2} // Invalid test case to see if it handles duplicates
    };

    std::cout << "Testing displayValidChoices() with sample combinations:" << std::endl;
    // userInput.displayValidChoices(testCombinations);
    // userInput.getUserSelection(testCombinations.size());
    vector<int> choice = userInput.getPlayerChoice(testCombinations);

    std::cout << "Option: [";
    for (size_t i = 0; i < choice.size(); ++i)
    {
        std::cout << choice[i];
        if (i < choice.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}