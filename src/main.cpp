#include <vector>

#include "hello.hpp"
#include "Dice.hpp"
#include "Board.hpp"
#include "Validator.hpp"
#include "UserInput.hpp"
#include "Settings.hpp"

void testSettings();

int main()
{
    testSettings();
    return 0;
}

void testSettings()
{
    std::cout << "🔹 Testing Settings Class\n\n";

    // Step 1: Create Settings and check defaults
    Settings gameSettings;
    std::cout << "Default Board Size: " << gameSettings.getBoardSize() << std::endl;
    std::cout << "Default Max Dice Value: " << gameSettings.getMaxDiceValue() << "\n\n";

    // Step 2: Test valid board size update
    std::cout << "🔹 Setting Board Size to 8...\n";
    gameSettings.setBoardSize(8);
    std::cout << "Updated Board Size: " << gameSettings.getBoardSize() << std::endl;
    std::cout << "Updated Max Dice Value (should be unchanged): " << gameSettings.getMaxDiceValue() << "\n\n";

    // Step 3: Test invalid board size update (too low)
    std::cout << "🔹 Trying to set Board Size to 5 (invalid)...\n";
    gameSettings.setBoardSize(5);
    std::cout << "Board Size after invalid input: " << gameSettings.getBoardSize() << "\n\n";

    // Step 4: Test board size increase beyond maxDiceValue
    std::cout << "🔹 Setting Board Size to 15 (should auto-adjust maxDiceValue)...\n";
    gameSettings.setBoardSize(15);
    std::cout << "Updated Board Size: " << gameSettings.getBoardSize() << std::endl;
    std::cout << "Updated Max Dice Value (should now be 15): " << gameSettings.getMaxDiceValue() << "\n\n";

    // Step 5: Test valid max dice value update
    std::cout << "🔹 Setting Max Dice Value to 18...\n";
    gameSettings.setMaxDiceValue(18);
    std::cout << "Updated Max Dice Value: " << gameSettings.getMaxDiceValue() << "\n\n";

    // Step 6: Test invalid max dice value update (too low)
    std::cout << "🔹 Trying to set Max Dice Value to 10 (invalid, lower than board size)...\n";
    gameSettings.setMaxDiceValue(10);
    std::cout << "Max Dice Value after invalid input: " << gameSettings.getMaxDiceValue() << "\n\n";

    std::cout << "✅ Settings Class Tests Completed!\n";
}
