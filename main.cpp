#include "player.h"
#include "menu.h"
#include <typeinfo>

int main() {
    Player *player = nullptr;
    std::string line;
    int userInput;
    std::string userName;

    // Main menu loop
    while (true) {
        menuLoop(); // Display options
        std::cout << "Choice: ";
        std::getline(std::cin, line);

        try {
            userInput = std::stoi(line);
        }
        catch(...) {
            std::cout << "Invalid input.\n";
            continue;
        }

        if (userInput == 1) {
            std::cout << "Enter your name: ";
            std::getline(std::cin, line);

            player = new Player(line);
        }

        if (userInput == 5) {
            std::cout << "Quitting...\n";
            break;
        }
    }

    std::string name = player->getName();

    std::cout << "Name: " << name << std::endl;

    return 0;
}