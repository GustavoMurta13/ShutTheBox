#pragma once

#include <iostream>
#include <iostream>
#include <limits>

// #include "Settings.hpp"

using namespace std;

#define SETTINGS_NUMBER_COLOR "\033[1;35m" // Magenta/Pinkish
#define RESET "\033[0m"

/**
 * @brief Class that manages the input of the user to configure the settings;
 *
 */
class SettingsInput
{
private:
public:
    /**
     * @brief Construct a new Settings Input object;
     *
     */
    SettingsInput();

    /**
     * @brief Destroy the Settings Input object;
     *
     */
    ~SettingsInput();

    /**
     * @brief Configure the setting of the game and store it the object t_settings;
     *
     * @param t_settings Object of the Settings
     */
    // void configureSettings(Settings &t_settings);
};