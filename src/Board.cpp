#include "Board.hpp"

Board::Board(int sizeBoard)
{
    for (int i = 1; i <= sizeBoard; i++)
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

    // print top border
    for (int i = 1; i <= sizeBoard; i++)
    {
        cout << "\t ----- ";
    }

    cout << endl;

    // print numbers colored
    for (int i = 1; i <= sizeBoard; i++)
    {
        statusColor = m_numbers.at(i) ? GREEN : RED;

        cout << "\t | " << statusColor << i << RESET
             << " |";
    }

    cout << endl;

    // print bottom border
    for (int i = 1; i <= sizeBoard; i++)
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
