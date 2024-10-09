#include "Overcoat.h"

Overcoat::Overcoat() : name(""), type(CoatType::MALE), size(0), price(0.0) {}

Overcoat::Overcoat(std::string name, CoatType type, int size, double price)
    : name(name), type(type), size(size), price(price) {}

std::string Overcoat::getName() const {
    return name;
}

CoatType Overcoat::getType() const {
    return type;
}

int Overcoat::getSize() const {
    return size;
}

double Overcoat::getPrice() const {
    return price;
}

void Overcoat::setName(std::string name) {
    this->name = name;
}

void Overcoat::setType(CoatType type) {
    this->type = type;
}

void Overcoat::setSize(int size) {
    this->size = size;
}

void Overcoat::setPrice(double price) {
    this->price = price;
}

bool Overcoat::operator==(const Overcoat& other) const {
    return type == other.type;
}

bool Overcoat::operator!=(const Overcoat& other) const {
    return type != other.type;
}

bool Overcoat::operator>(const Overcoat& other) const {
    return price > other.price;
}

bool Overcoat::operator>=(const Overcoat& other) const {
    return price >= other.price;
}

bool Overcoat::operator<(const Overcoat& other) const {
    return price < other.price;
}

bool Overcoat::operator<=(const Overcoat& other) const {
    return price <= other.price;
}

Overcoat& Overcoat::operator++() {
    ++size;
    return *this;
}

Overcoat Overcoat::operator++(int) {
    Overcoat temp = *this;
    ++size;
    return temp;
}

Overcoat& Overcoat::operator--() {
    --size;
    return *this;
}

Overcoat Overcoat::operator--(int) {
    Overcoat temp = *this;
    --size;
    return temp;
}

std::istream& operator>>(std::istream& in, Overcoat& overcoat) {
    int typeInt;
    in >> overcoat.name >> typeInt >> overcoat.size >> overcoat.price;
    overcoat.type = static_cast<CoatType>(typeInt);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Overcoat& overcoat) {
    out << "Name: " << overcoat.name << ", Type: " << static_cast<int>(overcoat.type)
        << ", Size: " << overcoat.size << ", Price: " << overcoat.price;
    return out;
}
