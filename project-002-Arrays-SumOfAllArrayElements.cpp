#include <iostream>

int main()
{
    int A[] = {67, 54, 23, 89};
    int sum = 0;

    for(int i = 0; i < 4; i++)
    {
        sum = sum + A[i];
    }

    // Print the calculated sum to the console
    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}
