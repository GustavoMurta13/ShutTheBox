#include "Board.hpp"

Board::Board(int sizeBoard)
{
    for (int i = 0; i < sizeBoard; i++)
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
    int sizeBoard = this->m_numbers.size();

    string statusColor;

    cout << "\033[0m" << endl;

    for (int i = 0; i < sizeBoard; i++)
    {
        cout << "\t ----- ";
    }

    cout << endl;

    for (int i = 0; i < sizeBoard; i++)
    {
        if (!m_numbers.at(i))
        {
            statusColor = RED;
        }
        else
        {
            statusColor = GREEN;
        }

        cout << "\t | " << statusColor << i + 1 << RESET
             << " |";
    }

    cout << endl;

    for (int i = 0; i < sizeBoard; i++)
    {
        cout << "\t ----- ";
    }

    cout << "\033[0m" << endl
         << endl;
}

void Board::markUsed(const vector<int> &choices)
{
}

vector<int> Board::getAvailableNumbers() const
{
}
