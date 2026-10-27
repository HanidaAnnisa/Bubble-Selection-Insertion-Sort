#include <iostream>
using namespace std;

int main()
{
    int n, a, b, kecil;

    cout << "Program Selection Sort" << endl;

    cout << "Masukkan jumlah data : ";
    cin >> n;

    int angka[n];

    cout << "Masukkan data        : ";
    for(a = 0; a < n; a++)
    {
        cin >> angka[a];
    }

    for(a = 0; a < n - 1; a++)
    {
        kecil = a;
        for(b = a + 1; b < n; b++)
        {
            if(angka[b] < angka[kecil])
            {
                kecil = b;
            }
        }
        int sementara = angka[kecil];
        angka[kecil] = angka[a];
        angka[a] = sementara;
    }

    cout << "Hasil setelah diurutkan : ";
    for(a = 0; a < n; a++)
    {
        cout << angka[a] << " ";
    }
    cout << endl;

    return 0;
}