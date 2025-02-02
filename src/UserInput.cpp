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
        cout << "No valid choices available." << endl;
        return;
    }

    int i = 1;
    cout << NUMBERCOLOR << "Valid choices: " << RESET << "\n";

    for (const auto &comb : validCombinations)
    {
        cout << NUMBERCOLOR << i << "." << RESET << " [";

        for (size_t j = 0; j < comb.size(); j++)
        {
            cout << " " << comb[j];
            if (j < comb.size() - 1)
            { // Add comma except for last element
                cout << ",";
            }
        }

        cout << " ]" << endl;

        i++;
    }

    // cout << "Choose an option (1 - " << validCombinations.size() << "): ";
}

int UserInput::getUserSelection(int maxOption)
{
    int selection = 0;

    while (true)
    {
        cout << "Choose an option (" << NUMBERCOLOR << "1" << RESET << " - " << NUMBERCOLOR << maxOption << RESET << "): ";
        cin >> selection;

        // Check if the input is a valid integer
        if (cin.fail())
        {
            cin.clear();                                                   // Clear the error flag
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid input. Please enter a number between 1 and " << maxOption << ". \n";
        }
        else if (selection < 1 || selection > maxOption)
        {
            cout << "Invalid choice. Please enter a number between 1 and " << maxOption << ". \n";
        }
        else
        {
            cout << "You chose option number " << NUMBERCOLOR << selection << RESET << ". \n";
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