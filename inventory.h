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
    
}

struct inventorySlot {
    int itemID = 0;
    int row;
    int col;
};
#endif