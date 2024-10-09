#include <iostream>
#include "Shop.h"

int main() {
    Shop shop;

    Overcoat coat1("Coat A", CoatType::MALE, 42, 100.0);
    Overcoat coat2("Coat B", CoatType::FEMALE, 38, 150.0);
    Overcoat coat3("Coat C", CoatType::KIDS, 34, 80.0);

    shop.addOvercoat(coat1);
    shop.addOvercoat(coat2);
    shop.addOvercoat(coat3);

    std::cout << "Inventory:\n";
    shop.showInventory();

    shop.sortByPrice();
    std::cout << "\nSorted by price:\n";
    shop.showInventory();

    shop.editOvercoatSize(0, 44);
    std::cout << "\nAfter editing size:\n";
    shop.showInventory();

    std::cout << "\nFinding female overcoats:\n";
    shop.findOvercoatsByType(CoatType::FEMALE);

    shop.removeOvercoat(1);
    std::cout << "\nAfter removing second coat:\n";
    shop.showInventory();

    return 0;
}
