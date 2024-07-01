#ifndef BIGARRAY_H
#define BIGARRAY_H

#include <vector>

class BigArray {
public:
    BigArray(int size);
    int getValue(int index) const;
    void setValue(int index, int value);

private:
    std::vector<int> data;
};

#endif // BIGARRAY_H