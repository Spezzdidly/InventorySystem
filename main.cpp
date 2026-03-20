#include "player.h"
#include "menu.h"
#include <typeinfo>

int main() {
    Player *player = nullptr;
    std::string userName = "";
    int userInput = 0;

    // Main menu loop
    while (true) {
        menuLoop(); // Display options

        std::cout << "Choice: ";
        if (!(std::cin >> userInput)) {
            std::cout << "Invalid input. Input must be a menu option.\n";

            std::cin.clear();
            continue;
        }

        if (userInput == 1) { 
            std::cout << "Enter your player's name: ";

            if (!(std::cin >> userName)) {
                std::cout << "Invalid input. Input must be a valid name.";
                continue;
            }

            player = new Player(userName);
         }
        else if (userInput == 2) { std::cout << "\n2\n\n"; }
        else if (userInput == 3) { std::cout << "\n3\n\n"; }
        else if (userInput == 4) { std::cout << "\n4\n\n"; }
        else if (userInput == 5) { break; }
    }

    std::string name = player->getName();

    std::cout << "Name: " << name << std::endl;

    return 0;
}