#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

/**
 * `constexpr` means that the expression does not change and can get its
 * value when compiling.
 */

/**
 * const int max_val = 10000; // const expression
 * const int limit = max_val + 1; // const expression
 * int staff_number = 100; // non-const expression
 * const int sz = get_size(); // non-const expression
 *
 * constexpr int mf = 1000; // const expression
 * constexpr int limit = mf + 1; // const expression
 * constexpr int sz = get_max_size(); // if get_max_size is a constexpr, then sz is const expression
 */

int j = 0;
constexpr int i = 40;

void solve1()
{
    const int *p1 = nullptr; // the int/value is const
    constexpr int *np = nullptr; // the pointer itself is const

    constexpr const int *p2 = &i; // i is a constexpr
    constexpr int *p3 = &j; // i & j must be defined outside the function

    int aval = 100;
    p1 = &aval;

    *p3 = 100;
    cout << "p3 " << *p3 << endl;
}

void solve2()
{
    int null = 0, *ptr1 = &null;
    int *ptr2 = NULL;
}

int main()
{
    solve1();
    return 0;
}
