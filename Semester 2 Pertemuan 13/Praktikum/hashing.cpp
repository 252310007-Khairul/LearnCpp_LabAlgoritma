#include <iostream>
#include <cmath>

using namespace std;

class HashTable
{
private:
    static const int MAX = 1024;

    int storage[MAX];
    int hdt_boundary;
    int i;

public:
    HashTable()
    {
        for (int j = 0; j < MAX; j++)
            storage[j] = 0;

        hdt_boundary = 0;
        i = 0;
    }

    //====================================================
    // Mencari bilangan prima di atas n
    //====================================================
    int prima_atas(int n)
    {
        if (n % 2 == 0)
            n++;
        else
            n += 2;

        while (true)
        {
            bool prima = true;

            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    prima = false;
                    break;
                }
            }

            if (prima)
                return n;

            n += 2;
        }
    }

    //====================================================
    // Bilangan prima di bawah ukuran tabel
    //====================================================
    int prima_bawah()
    {
        int n = hdt_boundary;

        if (n % 2 == 0)
            n--;
        else
            n -= 2;

        while (true)
        {
            bool prima = true;

            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    prima = false;
                    break;
                }
            }

            if (prima)
                return n;

            n -= 2;
        }
    }

    //====================================================
    // Menentukan ukuran hash table
    //====================================================
    void setBoundary(int n)
    {
        hdt_boundary = prima_atas(n);

        cout<< "\nUkuran Hash Table = "
            << hdt_boundary << endl
            << endl;
    }

    //====================================================
    // Linear Probing
    // h(k) = (k mod m + i) mod m
    //====================================================
    void tambah_linear_probing(int n)
    {
    bool inserted = false;
    int hash;
    i = 0;

    while (!inserted && i < hdt_boundary)
    {
        hash = ((n % hdt_boundary) + i) % hdt_boundary;

        if (storage[hash] == 0)
        {
            storage[hash] = n;
            inserted = true;
        }
        else
        {
            ++i;
            cout << "Terjadi tabrakan di " << hash << endl;
        }
    }
    }

    //====================================================
    // Quadratic Probing
    // h(k)=(k mod m + i²)
    //====================================================
    void tambah_quadratic_probing(int n)
    {
        bool inserted = false;
        int hash;
        i = 0;

        while (!inserted && i < hdt_boundary)
        {
            hash = ((n % hdt_boundary) + (i * i)) % hdt_boundary;

            if (storage[hash] == 0)
            {
                storage[hash] = n;
                inserted = true;
            }
            else
            {
                ++i;
                cout << "Terjadi tabrakan di index " << hash << endl;
            }
        }
        if (!inserted)
        {
        cout << "Hash Table penuh!" << endl;
        cout << "Data " << n << " tidak dapat dimasukkan." << endl;
        }
    }

    //====================================================
    // Double Hashing
    //
    // h1(k)=k mod m
    // h2(k)=k mod R +1
    //
    // hash=(h1+i*h2)%m
    //====================================================
    void tambah_double_hashing(int n)
{
    cout << "====================================================" << endl;
    cout << "double hashing..." << endl;

    int hash;
    int bottom_prime = prima_bawah();
    bool inserted = false;

    i = 0;

    while (!(inserted) && (i < hdt_boundary))
    {
        hash = ((n % hdt_boundary) + i * ((n) % bottom_prime + 1)) % hdt_boundary;

        if (storage[hash] == 0)
        {
            storage[hash] = n;
            inserted = true;
        }
        else
        {
            ++i;
            cout << "Terjadi tabrakan di " << hash << endl;
        }
    }
    if (!inserted)
    {
    cout << "Hash Table penuh!" << endl;
    cout << "Data " << n << " tidak dapat dimasukkan." << endl;
    }
}

    //====================================================
    // Cetak Hash Table
    //====================================================
    void cetak()
    {
        cout << "\nIsi Hash Table\n\n";

        for (int i = 0; i < hdt_boundary; i++)
        {
            cout << "hash[" << i << "] = "
                << storage[i]
                << endl;
        }
    }
};

int main()
{
    HashTable ht;

    ht.setBoundary(5);

    //=========================
    // Linear Probing
    //=========================

    ht.tambah_linear_probing(15);
    ht.tambah_linear_probing(25);
    ht.tambah_linear_probing(35);
    ht.tambah_linear_probing(18);
    ht.tambah_linear_probing(29);

    /*
    =========================
    Quadratic Probing
    =========================

    ht.tambah_quadratic_probing(15);
    ht.tambah_quadratic_probing(25);
    ht.tambah_quadratic_probing(35);
    ht.tambah_quadratic_probing(18);
    ht.tambah_quadratic_probing(29);
    */

    /*
    =========================
    Double Hashing
    =========================

    ht.tambah_double_hashing(15);
    ht.tambah_double_hashing(25);
    ht.tambah_double_hashing(35);
    ht.tambah_double_hashing(18);
    ht.tambah_double_hashing(29);
    */

    ht.cetak();

    return 0;
}	
