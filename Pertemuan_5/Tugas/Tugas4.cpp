#include <iostream>
using namespace std;
int main()
{
    int n, i, cek = 1;
    
    cout << "Masukkan sebuah bilangan: ";
    cin >> n;
    
    if(n < 2)
        cek = 0;
    
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            cek = 0;
            break;
        }
    }
    
    if(cek == 1)
        cout << n <<" " <<"Termasuk bilangan PRIMA" << endl;
    else
        cout << n <<" " <<"Bukan termasuk bilangan prima" << endl;
    
    return 0;
}

