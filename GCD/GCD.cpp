#include <iostream>

void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

int gcd(int a, int b)
{
    if (b > a) swap(a, b);
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    std::cout << gcd(440, 160);

    return 0;
}

