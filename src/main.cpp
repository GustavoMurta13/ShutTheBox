#include <vector>

#include "hello.hpp"
#include "Dice.hpp"
#include "Board.hpp"
#include "Validator.hpp"
#include "UserInput.hpp"
#include "Settings.hpp"
#include "SettingsInput.hpp"

void testSettings();
void testSettingsInput();
void testUserInput();

int main()
{
    // testSettings();
    testSettingsInput();
    // testUserInput();
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

void testSettingsInput()
{
    std::cout << "🔍 [TEST] Starting SettingsInput Test...\n";

    // Create Settings and SettingsInput instances
    Settings gameSettings;
    SettingsInput inputHandler;

    // Run user configuration
    inputHandler.configureSettings(gameSettings);

    // Display final values
    std::cout << "🎯 [RESULT] Final Settings:\n";
    std::cout << "Board Size: " << gameSettings.getBoardSize() << "\n";
    std::cout << "Max Dice Value: " << gameSettings.getMaxDiceValue() << "\n";

    // Test if values were correctly updated
    if (gameSettings.getBoardSize() >= 6 && gameSettings.getMaxDiceValue() >= gameSettings.getBoardSize())
    {
        std::cout << "✅ [TEST PASSED] Settings updated correctly!\n";
    }
    else
    {
        std::cout << "❌ [TEST FAILED] Invalid settings detected.\n";
    }
}

void testUserInput()
{
    UserInput userInput;

    // Simulated valid combinations
    std::vector<std::vector<int>> testCombinations = {
        {1, 2}, {3, 4}, {5}, {6, 7, 8}};

    std::cout << "🔍 [TEST] Prompting user to select a valid choice...\n";

    // Get user choice
    std::vector<int> selectedCombination = userInput.getPlayerChoice(testCombinations);

    // Display the chosen combination
    std::cout << "🎯 [RESULT] User selected: [ ";
    for (int num : selectedCombination)
    {
        std::cout << num << " ";
    }
    std::cout << "]\n";

    std::cout << "✅ [TEST PASSED] User input was successfully processed!\n";
}
