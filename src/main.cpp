#include <iostream>
#include "BigArray.h"

int main() {
    BigArray arr(10);
    arr.setValue(0, 42);
    std::cout << "Value at index 0: " << arr.getValue(0) << std::endl;
    return 0;
}