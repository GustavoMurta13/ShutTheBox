#include "UserInput.hpp"

UserInput::UserInput()
{
    puts("Creates USER INPUT!");
}

UserInput::~UserInput()
{
    puts("Deletes USER INPUT!");
}

void UserInput::displayValidChoices(const std::vector<std::vector<int>> &validCombinations)
{
    if (validCombinations.empty())
    {
        std::cout << "❌ No valid choices available." << std::endl;
        return;
    }

    int i = 1;
    std::cout << NUMBERCOLOR << "🔢 Valid Choices: " << RESET << "\n";

    for (const auto &comb : validCombinations)
    {
        std::cout << NUMBERCOLOR << i << "." << RESET << " [";

        for (size_t j = 0; j < comb.size(); j++)
        {
            std::cout << " " << comb[j];
            if (j < comb.size() - 1)
            { // Add comma except for last element
                std::cout << ",";
            }
        }

        std::cout << " ]" << std::endl;

        i++;
    }
}

int UserInput::getUserSelection(int maxOption)
{
    int selection = 0;

    while (true)
    {
        std::cout << "Choose an option (" << NUMBERCOLOR << "1" << RESET << " - " << NUMBERCOLOR << maxOption << RESET << "): ";
        std::cin >> selection;

        // Check if the input is a valid integer
        if (std::cin.fail())
        {
            std::cin.clear();                                                   // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
            std::cout << "❌ Invalid input. Please enter a number between 1 and " << maxOption << ". \n";
        }
        else if (selection < 1 || selection > maxOption)
        {
            std::cout << "⚠️ Invalid choice. Please enter a number between 1 and " << maxOption << ". \n";
        }
        else
        {
            std::cout << "✅ You chose option number " << NUMBERCOLOR << selection << RESET << ". \n";
            break;
        }
    }

    return selection;
}

vector<int> UserInput::getPlayerChoice(const vector<vector<int>> &validCombinations)
{
    displayValidChoices(validCombinations);
    int userChoice = getUserSelection(validCombinations.size());

    return validCombinations[userChoice - 1];
}