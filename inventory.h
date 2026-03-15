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
        inventorySlot** grid;
        
};

Inventory::Inventory() {
    int r = 3;
    int c = 8;

    // Allocate grid array
    this->grid = new int*[r];
    for (int i = 0; i < r; i++) {
        this->grid[i] = new int[c];
    }

    // Initialize to all zeros
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            this->grid[i][j] = 0;
        }
    }
}

Inventory::~Inventory() {};

struct inventorySlot {
    int itemID = 0;
    int row;
    int col;
};
#endif