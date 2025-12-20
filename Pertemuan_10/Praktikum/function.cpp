#include <iostream>
using namespace std;

void tambah(int m, int n);

int main()
{
    int a, b;
    a = 5;
    b = 9;

    cout << "Nilai sebelum fungsi digunakan\n";
    cout << "a = " << a << "  b = " << b;

    tambah(a, b);

    cout << "Nilai setelah fungsi digunakan\n";
    cout << "a = " << a << "  b = " << b;

    return 0;
}

void tambah(int m, int n)
{
    m = m + 5;
    n = n + 7;

    cout << "\nNilai di dalam fungsi tambah()\n";
    cout << "m = " << m << "  n = " << n << "\n";
}
