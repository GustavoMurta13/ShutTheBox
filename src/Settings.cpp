#include "Settings.hpp"

Settings::Settings() : m_boardSize(9), m_maxDiceValue(12)
{
    puts("Creates SETTINGS!");
}

Settings::~Settings()
{
    puts("Deletes SETTINGS!");
}

int Settings::getBoardSize() const
{
    return this->m_boardSize;
}

int Settings::getMaxDiceValue() const
{
    return this->m_maxDiceValue;
}

void Settings::setBoardSize(int t_size)
{
    if (t_size >= 6)
    {
        this->m_boardSize = t_size;
        if (t_size > this->m_maxDiceValue)
        {
            this->m_maxDiceValue = t_size; // Adjust max dice value automatically
            puts("Max dice value updated to match new board size.");
        }
    }
    else
    {
        puts("Invalid board size! Must be at least 6.");
    }
}

void Settings::setMaxDiceValue(int t_value)
{
    if (t_value >= this->m_boardSize)
    {
        this->m_maxDiceValue = t_value;
    }
    else
    {
        puts("Invalid max dice value! Must be at least equal to board size.");
    }
}