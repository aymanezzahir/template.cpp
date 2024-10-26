#include <iostream>
#include <unordered_map>
// Function to return colored text
std::string colorFunc(const std::string text, const std::string color) {
    // Define ANSI escape codes using unordered_map
    std::unordered_map<std::string, std::string> ansiColors = {
        {"black", "\033[30m"},
        {"red", "\033[31m"},
        {"green", "\033[32m"},
        {"yellow", "\033[33m"},
        {"blue", "\033[34m"},
        {"magenta", "\033[35m"},
        {"cyan", "\033[36m"},
        {"white", "\033[37m"},
        {"brightBlack", "\033[90m"},
        {"brightRed", "\033[91m"},
        {"brightGreen", "\033[92m"},
        {"brightYellow", "\033[93m"},
        {"brightBlue", "\033[94m"},
        {"brightMagenta", "\033[95m"},
        {"brightCyan", "\033[96m"},
        {"brightWhite", "\033[97m"}
    };

    // Lookup the color in the map
    auto it = ansiColors.find(color);
    if (it != ansiColors.end()) {
        return it->second + text + "\033[0m"; // Return colored text with reset
    } else {
        return "\033[0m" + text + "\033[0m"; // Return text with default color if not found
    }
}

