#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

typedef double wages; // wages is a synonym for double
typedef wages base, *p; // base is a synonym for double, p for double*

typedef char *pstring;

using SI = double; // new standard feature

void solve1()
{
    SI sal = 100.2;
    cout << "sal " << sal << endl;
}

void solve2()
{
    // const pstring cstr = "abc"; // a constant pointer to char
    // const pstring *ps; // <==same to==> const char* *ps

    const char* cstr1 = "cstr1"; // here <==same to==> char* cstr1 = "abc";
    cstr1 = "cstr1 changed";
    // cstr1[0] = '1'; // error
    cout << "cstr1 " << cstr1 << endl;

    char* stmp = new char[10];
    sprintf( stmp, "%s", "cstr2" );
    char * const cstr2 = stmp;
    cstr2[0] = 'a';
    cout << "cstr2 " << cstr2 << endl;

    const pstring cstr3 = stmp;
    cstr3[0] = 'b';
    // cstr1[0] = '1'; // error
    cout << "cstr3 " << cstr3 << endl;

    delete[] stmp;
}

int main()
{
    solve2();
    return 0;
}
