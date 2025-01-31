// #include <iostream>

// int main()
// {
//     std::cout << "Hello, world!" << std::endl;
//     return 0;
// }

#include "hello.hpp"
#include "Dice.hpp"
#include "Board.hpp"

int main()
{
    Board gaming_board(12);

    gaming_board.display();

    gaming_board.markUsed({-1, 1, 12});
    gaming_board.markUsed({-1, 1, 12});

    gaming_board.display();

    std::vector<int> availableNumbers = gaming_board.getAvailableNumbers();
    std::cout << "Available numbers: ";
    for (int num : availableNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}