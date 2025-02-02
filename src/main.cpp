#include <vector>

#include "hello.hpp"
#include "Dice.hpp"
#include "Board.hpp"
#include "Validator.hpp"

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

    Board board(5); // Creates a board with numbers {1, 2, 3, 4, 5}

    std::cout << "Initial Board:" << std::endl;
    board.display();

    // Test Case 1: Roll a 5 (Game should continue)
    int roll = 5;
    bool gameOver = board.isGameOver(roll);
    std::cout << "Rolled: " << roll << " | isGameOver: " << (gameOver ? "TRUE" : "FALSE") << std::endl;

    // Mark numbers {1, 4} as used (Game should still continue because {2, 3} exists)
    board.markUsed({1, 4});
    std::cout << "Updated Board (After removing 1,4):" << std::endl;
    board.display();

    gameOver = board.isGameOver(roll);
    std::cout << "Rolled: " << roll << " | isGameOver: " << (gameOver ? "TRUE" : "FALSE") << std::endl;

    // Mark {2, 3} as used
    board.markUsed({2, 3});
    std::cout << "Updated Board (After removing 2,3):" << std::endl;
    board.display();

    gameOver = board.isGameOver(roll);
    std::cout << "Rolled: " << roll << " | isGameOver: " << (gameOver ? "TRUE" : "FALSE") << std::endl;

    // Mark {5} as used (Now game should end)
    board.markUsed({5});
    std::cout << "Updated Board (After removing 5):" << std::endl;
    board.display();

    gameOver = board.isGameOver(roll);
    std::cout << "Rolled: " << roll << " | isGameOver: " << (gameOver ? "TRUE" : "FALSE") << std::endl;

    return 0;
}