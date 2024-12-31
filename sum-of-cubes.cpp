#include <iostream>
using namespace std;

int printCubes(int n)
{
    if (n > 0)
    {
        return (n * n * n) + printCubes(n - 1);
    }
    return 0;
}

int main()
{
    int sumOfCubes = printCubes(5);
    cout << sumOfCubes;
    return 0;
}