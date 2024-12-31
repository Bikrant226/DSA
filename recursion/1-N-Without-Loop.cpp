#include <iostream>
using namespace std;

void printOneToN(int n)
{
    if (n > 0)
    {
        printOneToN(n - 1);
        cout << n << " ";
    }
}

int main()
{
    printOneToN(12);
    return 0;
}