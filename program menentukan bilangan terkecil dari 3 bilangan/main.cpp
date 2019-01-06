#include <iostream>
#include <stdio.h>
#include <conio.h>


using namespace std;

int main()
{
    cout << "      Menentukan Bilangan Terkecil" << endl;
    cout << "           dari tiga bilangan" << endl;
    cout << "   ==================================" << endl << endl;
    int bil1, bil2, bil3;
    cout << "Masukan Bilangan 1: "; cin >> bil1;
    cout << "Masukan Bilanagn 2: "; cin >> bil2;
    cout << "Masukan Bilangan 3: "; cin >> bil3;
    if(bil1 < bil2)
        {cout << bil1 << " Adalah bilangan terkecil";}
    else if(bil2 < bil3)
        {cout << bil2 << " Adalah bilangan terkecil";}
    else if(bil3 < bil1)
        {cout << bil3 << " Adalah bilangan terkecil";}
    else{cout << bil2 << " Adalah bilangan terkecil";}
    cout << endl << endl;
    cout << "   ----------------Selesai--------------" << endl;

   getch();
}
