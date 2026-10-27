#include <iostream>
using namespace std;

int main()
{
    int n, a, b, kunci;

    cout << "Program Insertion Sort" << endl;

    cout << "Masukkan jumlah data : ";
    cin >> n;

    int angka[n];

    cout << "Masukkan data        : ";
    for(a = 0; a < n; a++)
    {
        cin >> angka[a];
    }

    for(a = 1; a < n; a++)
    {
        kunci = angka[a];
        b = a - 1;
        while(b >= 0 && angka[b] > kunci)
        {
            angka[b + 1] = angka[b];
            b--;
        }
        angka[b + 1] = kunci;
    }

    cout << "Hasil setelah diurutkan : ";
    for(a = 0; a < n; a++)
    {
        cout << angka[a] << " ";
    }
    cout << endl;

    return 0;
}