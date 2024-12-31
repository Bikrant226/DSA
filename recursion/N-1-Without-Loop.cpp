#include <iostream>
using namespace std;

void printOneToN(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        printOneToN(n - 1);
    }
}

int main()
{
    printOneToN(12);
    return 0;
}