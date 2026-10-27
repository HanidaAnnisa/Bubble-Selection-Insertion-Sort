#include <iostream>
using namespace std;

int main()
{
    int n, a, b;

    cout << "Program Bubble Sort" << endl;

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
    for(b = 0; b < n - a - 1; b++)
        {
        if(angka[b] > angka[b + 1])
            {
            int sementara = angka[b];
            angka[b] = angka[b + 1];
            angka[b + 1] = sementara;
            }
        }
    }

    cout << "Hasil setelah diurutkan : ";
    for(a = 0; a < n; a++)
    {
        cout << angka[a] << " ";
    }
    cout << endl;

    return 0;
}