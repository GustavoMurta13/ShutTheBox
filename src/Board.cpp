#include "Board.hpp"

Board::Board(int t_sizeBoard)
{
    for (int i = 1; i <= t_sizeBoard; i++)
    {
        m_numbers[i] = true;
    }

    cout << "Size of Board " << m_numbers.size() << endl;

    puts("Creates BOARD!");
}

Board::~Board()
{
    m_numbers.clear();
    puts("Deletes BOARD!");
}

void Board::display() const
{
    size_t sizeBoard = this->m_numbers.size();

    string statusColor;

    cout << RESET << endl;

    // print top border
    for (size_t i = 1; i <= sizeBoard; i++)
    {
        cout << "\t ----- ";
    }

    cout << endl;

    // print numbers colored
    for (size_t i = 1; i <= sizeBoard; i++)
    {
        statusColor = m_numbers.at(i) ? GREEN : RED;

        cout << "\t | " << statusColor << i << RESET
             << " |";
    }

    cout << endl;

    // print bottom border
    for (size_t i = 1; i <= sizeBoard; i++)
    {
        cout << "\t ----- ";
    }

    cout << RESET << endl
         << endl;
}

void Board::markUsed(const vector<int> &t_choices)
{
    for (const int curChoice : t_choices)
    {
        if (curChoice >= 1 && curChoice <= static_cast<int>(m_numbers.size()))
        {
            if (this->m_numbers[curChoice])
            {
                this->m_numbers[curChoice] = false;
            }
            else
            {
                cout << "Warning: Number " << curChoice << " is already used!" << endl;
            }
        }
        else
        {
            cout << "Warning: Number " << curChoice << " is out of range!" << endl;
        }
    }
}

vector<int> Board::getAvailableNumbers() const
{
    vector<int> availableNumbers;

    for (const auto &pair : m_numbers)
    {
        if (pair.second)
        {
            availableNumbers.push_back(pair.first);
        }
    }

    return availableNumbers;
}

bool Board::isGameOver(int rolledValue) const
{
    vector<int> availableNums = getAvailableNumbers();

    vector<vector<int>> validMoves = Validator::getValidCombinations(availableNums, rolledValue);

    return validMoves.empty();
}
