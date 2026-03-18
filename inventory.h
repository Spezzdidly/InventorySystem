#ifndef _INVENTORY_H
#define _INVENTORY_H

#include <iostream>
#include <fstream>
#include <string>

class Inventory {
    public:
        Inventory();
        ~Inventory();

    private:
        // Plan on this being a 4 or 5 row and an incomplete number of rows
        // for inventory upgrades? All still square or rectangle shaped
        int row;
        int col;
        inventorySlot** grid;
        
};

Inventory::Inventory() {
    this->row = 3;
    this->col = 8;

    // Allocate grid array
    this->grid = new inventorySlot*[this->row];
    for (int i = 0; i < this->row; i++) {
        this->grid[i] = new inventorySlot[this->col];
    }

    // Initialize to all zeros
    for (int i = 0; i < this->row; i++) {
        for (int j = 0; j < this->col; j++) {
            this->grid[i][j] = new inventorySlot();
        }
    }
}

Inventory::~Inventory() {
    for (int i =0; i < this->row; i++) {
        delete[] this->grid[i];
    }

    delete[] this->grid;
};

struct inventorySlot {
    int itemID = 0;
    int row;
    int col;
};
#endif