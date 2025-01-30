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

    return 0;
}