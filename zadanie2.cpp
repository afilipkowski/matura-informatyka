#include <iostream>
#include <fstream>

using namespace std;

string odszyfruj (string slowo, int klucz)
{
    for (int i = 0; i < slowo.length(); i++)
    {
        slowo[i]-=klucz;
        if (slowo[i] < 'A')
            slowo[i] += 26;
    }
    return slowo;
}

int main()
{
    ifstream wej("dane_6_2.txt");
    ofstream wyj("wyniki_6_2.txt");

    string slowo;
    int klucz;

    for (int i = 0; i < 3000; i++)
    {
        wej >> slowo >> klucz;
        klucz = klucz%26;
        wyj << odszyfruj(slowo, klucz) << endl;

    }

}
