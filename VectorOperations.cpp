#include "VectorOperations.h"

float getSum(std::vector<float> numbers)
{
    float sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }
    return sum;
}

