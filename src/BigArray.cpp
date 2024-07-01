#include "BigArray.h"

BigArray::BigArray(int size) : data(size) {}

int BigArray::getValue(int index) const {
    return data[index];
}

void BigArray::setValue(int index, int value) {
    data[index] = value;
}