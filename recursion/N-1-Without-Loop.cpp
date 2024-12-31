#include <iostream>
using namespace std;

void printNToOne(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        printNToOne(n - 1);
    }
}

int main()
{
    printNToOne(12);
    return 0;
}