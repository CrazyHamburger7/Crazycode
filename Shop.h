#ifndef SHOP_H
#define SHOP_H

#include <vector>
#include "Overcoat.h"

class Shop {
private:
    std::vector<Overcoat> inventory;

public:
    void addOvercoat(const Overcoat& overcoat);
    void removeOvercoat(int index);
    void editOvercoatSize(int index, int newSize);
    void findOvercoatsByType(CoatType type);
    void sortByPrice();
    void showInventory();
};

#endif 
