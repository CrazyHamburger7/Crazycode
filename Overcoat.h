#ifndef OVERCOAT_H
#define OVERCOAT_H

#include <string>
#include <iostream>

enum class CoatType {
    MALE,
    FEMALE,
    KIDS
};

class Overcoat {
private:
    std::string name;
    CoatType type;
    int size;
    double price;

public:
    Overcoat();
    Overcoat(std::string name, CoatType type, int size, double price);

    std::string getName() const;
    CoatType getType() const;
    int getSize() const;
    double getPrice() const;

    void setName(std::string name);
    void setType(CoatType type);
    void setSize(int size);
    void setPrice(double price);

    bool operator==(const Overcoat& other) const;
    bool operator!=(const Overcoat& other) const;
    bool operator>(const Overcoat& other) const;
    bool operator>=(const Overcoat& other) const;
    bool operator<(const Overcoat& other) const;
    bool operator<=(const Overcoat& other) const;

    Overcoat& operator++(); 
    Overcoat operator++(int); 
    Overcoat& operator--(); 
    Overcoat operator--(int); 

    friend std::istream& operator>>(std::istream& in, Overcoat& overcoat);
    friend std::ostream& operator<<(std::ostream& out, const Overcoat& overcoat);
};

#endif 
