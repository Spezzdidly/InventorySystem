#include <iostream>
#include <string>
#include "player.h"

/* File of all menu related functions */
void menuLoop() {
    std::cout << "Welcome to Spencer's inventory program!\n";
    std::cout << "Press the corresponding number for each setting:\n";
    std::cout << "(1)\tCreate Player\n";
    std::cout << "(2)\tOpen Inventory\n";
    std::cout << "(3)\tPlace item in inventory\n";
    std::cout << "(4)\tRemove item from inventory\n";
    std::cout << "(5)\tQuit\n";
}

Player *createPlayer(std::string name) {
    Player p = Player(name);
    Player* player = &p;

    return player;
}