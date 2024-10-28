#include <iostream>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int smallOutput1 = fibonacci(n - 1);
    int smallOutput2 = fibonacci(n - 2);
    return smallOutput1 + smallOutput2;
}

int main()
{
    std::cout << fibonacci(7) << std::endl;
    return 0;
}
