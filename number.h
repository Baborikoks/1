#ifndef NUMBER_H
#define NUMBER_H

#include <utility>

class Number {
public:
    Number(int value);
    std::pair<int, int> findPowerOfTwoBounds() const;

private:
    int value;
};

#endif // NUMBER_H
