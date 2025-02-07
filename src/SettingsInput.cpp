#include "SettingsInput.hpp"

SettingsInput::SettingsInput()
{
    puts("Creates SETTINGS_INPUT!");
}

SettingsInput::~SettingsInput()
{
    puts("Deletes SETTINGS_INPUT!");
}

// void SettingsInput::configureSettings(Settings &t_settings)
// {
//     int boardSize, maxDiceValue;

//     cout << SETTINGS_NUMBER_COLOR << "🔹 CONFIGURE GAME SETTINGS 🔹\n"
//          << RESET;
//     cout << "Customize your game before starting.\n\n";

//     // Get Board Size
//     cout << SETTINGS_NUMBER_COLOR << "1. Enter Board Size (Default: 9)" << RESET << "\n";
//     while (!(cin >> boardSize) || boardSize < 6)
//     {
//         cin.clear();
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         cout << "❌ Invalid input. Board size must be at least 6.\n";
//         cout << SETTINGS_NUMBER_COLOR << "Try again: " << RESET;
//     }
//     t_settings.setBoardSize(boardSize);

//     // Get Max Dice Value
//     cout << SETTINGS_NUMBER_COLOR << "2. Enter Max Dice Value (Default: 12)" << RESET << "\n";
//     while (!(cin >> maxDiceValue) || maxDiceValue < boardSize)
//     {
//         cin.clear();
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         cout << "❌ Invalid input. Max dice value must be at least equal to board size.\n";
//         cout << SETTINGS_NUMBER_COLOR << "Try again: " << RESET;
//     }
//     t_settings.setMaxDiceValue(maxDiceValue);

//     cout << SETTINGS_NUMBER_COLOR << "✅ Settings Updated!" << RESET << "\n";
//     cout << "Board Size: " << SETTINGS_NUMBER_COLOR << t_settings.getBoardSize() << RESET << "\n";
//     cout << "Max Dice Value: " << SETTINGS_NUMBER_COLOR << t_settings.getMaxDiceValue() << RESET << "\n";
// }
