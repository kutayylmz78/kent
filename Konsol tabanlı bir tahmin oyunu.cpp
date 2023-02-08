#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int tahmin, rastgeleSayi, hak = 0;

    srand(time(0));
    rastgeleSayi = rand() % 100 + 1;

    do
    {
        cout << "Tahmininiz: ";
        cin >> tahmin;

        if (tahmin > rastgeleSayi)
        {
            cout << "Daha düsük bir sayi girmelisiniz.\n";
        }
        else if (tahmin < rastgeleSayi)
        {
            cout << "Daha yüksek bir sayi girmelisiniz.\n";
        }
        hak++;
    } while (tahmin != rastgeleSayi);

    cout << "Tebrikler, " << hak << " denemede bildiniz!\n";

    return 0;
}

