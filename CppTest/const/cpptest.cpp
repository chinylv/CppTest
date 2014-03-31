#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

void solve1()
{
    int r0 = 10;
    const int &r1 = r0;
    r0++;
    cout << "r1 " << r1 << endl;
}

void solve2()
{
    const int r0 = 10;
    // int r1 = r0 * 2; // error
    const int &r1 = r0 * 2;
    cout << "r1 " << r1 << endl;
}

void solve3()
{
    int r0 = 10;
    int k0 = 90;
    const int *r1 = &r0;

    // *r1 = 13; // error
    r1 = &k0;
    cout << "r1 " << *r1 << endl;
}

void solve4()
{
    int r0 = 10;
    int k0 = 90;
    const int * const r1 = &r0;
    // const int const * r1 = &r0; // warning
    // the same as const int *r1; r1 = &k0 is okay

    // *r1 = 13; // error
    // r1 = &k0; // error
    cout << "r1 " << *r1 << endl;
}

int main()
{
    solve4();
    return 0;
}
