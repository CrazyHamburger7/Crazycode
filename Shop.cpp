#include "Shop.h"
#include <iostream>
#include <algorithm>

void Shop::addOvercoat(const Overcoat& overcoat) {
    inventory.push_back(overcoat);
}

void Shop::removeOvercoat(int index) {
    if (index >= 0 && index < inventory.size()) {
        inventory.erase(inventory.begin() + index);
    }
}

void Shop::editOvercoatSize(int index, int newSize) {
    if (index >= 0 && index < inventory.size()) {
        inventory[index].setSize(newSize);
    }
}

void Shop::findOvercoatsByType(CoatType type) {
    for (const auto& overcoat : inventory) {
        if (overcoat.getType() == type) {
            std::cout << overcoat << std::endl;
        }
    }
}

void Shop::sortByPrice() {
    std::sort(inventory.begin(), inventory.end(),
        [](const Overcoat& a, const Overcoat& b) { return a.getPrice() < b.getPrice(); });
}

void Shop::showInventory() {
    for (const auto& overcoat : inventory) {
        std::cout << overcoat << std::endl;
    }
}
