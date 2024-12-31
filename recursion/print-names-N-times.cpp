#include <iostream>
using namespace std;

void printNTimes(int n)
{
    if (n > 0)
    {
        printNTimes(n - 1);
        cout << "Bikrant" << " ";
    }
}

int main()
{
    printNTimes(12);
    return 0;
}