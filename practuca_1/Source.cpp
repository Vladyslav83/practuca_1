#include <iostream>
#include <cmath>

double recursiveSqrtSum(int n)
{
    if (n == 1)
    {
        return std::sqrt(1);
    }
    else
    {
        return std::sqrt(n + recursiveSqrtSum(n - 1));
    }
}

unsigned long long factorial(int m)
{
    if (m <= 1)
    {
        return 1;
    }
    else
    {
        return m * factorial(m - 2);
    }
}

double calculateExpression(int n, int m)
{
    double sqrtSum = recursiveSqrtSum(n);
    unsigned long long doubleFactorial = factorial(m);

    return sqrtSum / doubleFactorial;
}

int main()
{
    int n, m;
    std::cout << "Enter the values of n and m: ";
    std::cin >> n >> m;

    double result = calculateExpression(n, m);

    std::cout << "Result: " << result << std::endl;

    return 0;
}