#ifndef _PLAYER_H
#define _PLAYER_H

#include "inventory.h"
#include <iostream>
#include <string>

class Player {
    public:
        Player();
        Player(std::string name);

        ~Player();
        
    private:
        std::string name;
        int         health;
        int         level;

        Inventory   inventory;   
};

Player::Player() {
    this->name = "no_name";
    this->health = 100;
    this->level = 1;

    this->inventory = new Inventory();
}

#endif