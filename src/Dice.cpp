#include "Dice.hpp"

Dice::Dice(int t_maxValue) : m_maxValueAllowed(t_maxValue)
{
    if (t_maxValue < 1)
    {
        throw invalid_argument("Max dice value must be at least 1.");
    }

    // this->m_maxValueAllowed = t_maxValue;
    puts("Creates DICE!");
}

Dice::~Dice()
{
    puts("Deletes DICE!");
}

int Dice::rollDice()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, this->m_maxValueAllowed);

    return dis(gen);
}