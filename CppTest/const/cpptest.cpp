#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

// const reference
void solve1()
{
    int r0 = 10;
    const int &r1 = r0;
    r0++;
    cout << "r1 " << r1 << endl;
}

// const assigned to const
void solve2()
{
    const int r0 = 10;
    // int r1 = r0 * 2; // error, const cannot be assigned to non-const
    const int &r1 = r0 * 2;
    cout << "r1 " << r1 << endl;
}

// const int  <==same to==>  int const
// const int const  <==same to==>  const int
void solve3()
{
    int r0 = 10;
    int k0 = 90;
    const int *r1 = &r0; // the int/value is const
    // int const *r1 = &r0; // same

    // *r1 = 13; // error
    r1 = &k0;
    cout << "r1 " << *r1 << endl;
}

// const pointer
void solve4()
{
    int r0 = 10;
    int k0 = 90;
    int * const r1 = &r0; // the pointer is const

    *r1 = 13;
    // r1 = &k0; // error
    cout << "r1 " << *r1 << endl;
}

void solve5()
{
    int r0 = 10;
    int k0 = 90;
    const int * const r1 = &r0;
    // const int const * r1 = &r0; // warning, same to const int

    // *r1 = 13; // error
    // r1 = &k0; // error
    cout << "r1 " << *r1 << endl;
}

int main()
{
    solve5();
    return 0;
}
