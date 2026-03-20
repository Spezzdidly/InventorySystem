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

        int getLevel() const;
        int getHealth() const;
        std::string getName() const;

        void openInventory();
        void stateLevel();
        void updateLevel(int lvl);

    private:
        std::string name;
        int         health;
        int         level;

        Inventory   *inventory;
};

Player::Player() {
    this->name = "no_name";
    this->health = 100;
    this->level = 1;

    this->inventory = new Inventory();
}

Player::Player(std::string name) { 
    this->name = name;
    this->health = 100;
    this->level = 1;
    
    this->inventory = new Inventory();
}

Player::~Player() { delete this->inventory; }

void Player::stateLevel() {
    std::cout << "\nCurrent Level: " << this->level << std::endl;
}

void Player::updateLevel(int lvl) { this->level = lvl; }

std::string Player::getName() const { return this->name; }

#endif