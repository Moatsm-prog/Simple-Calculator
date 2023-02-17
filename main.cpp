#include "VectorOperations.h"

int main()
{
    std::vector<float> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << "The sum is " << getSum(numbers) << std::endl;
    std::cout << "The minimum is " << getMin(numbers) << std::endl;
}