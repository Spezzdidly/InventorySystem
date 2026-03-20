#ifndef _INVENTORY_H
#define _INVENTORY_H

#include <iostream>
#include <fstream>
#include <string>

struct inventorySlot {
    int itemID = 0;
    int row;
    int col;
};

class Inventory {
    public:
        Inventory();
        ~Inventory();

    private:
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
            this->grid[i][j] = inventorySlot();
        }
    }
}

Inventory::~Inventory() {
    for (int i =0; i < this->row; i++) {
        delete[] this->grid[i];
    }

    delete[] this->grid;
};
#endif