#include "number.h"
#include <cmath>

Number::Number(int value) : value(value) {}

std::pair<int, int> Number::findPowerOfTwoBounds() const {
    int lowerBound = static_cast<int>(std::floor(std::log2(value)));
    int upperBound = lowerBound + 1;
    return {lowerBound, upperBound};
}
