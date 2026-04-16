#include <iostream>
using namespace std;

int elemen[10];
int npanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> npanjang;

        if (npanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silahkan Coba lagi.\n";
        }
    }

    cout << "\n=======================================\n";
    cout << "          Masukkan Elemen Array          \n";
    cout << "\n=======================================\n";

    for (int i = 0; i < npanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> elemen[i];
    }
    
}
