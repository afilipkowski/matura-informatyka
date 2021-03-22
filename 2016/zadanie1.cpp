#include <iostream>
#include <fstream>

using namespace std;

const int klucz = 107%26;

string szyfruj(string slowo)
{
    for (int i = 0; i < slowo.length(); i++)
    {
       slowo[i] += klucz;
       if (slowo[i] > 'Z')
           slowo[i] -= 26;
       if (slowo[i] < 'A')
           slowo[i] += 26;
    }
    return slowo;
}


int main()
{
    ifstream wej("dane_6_1.txt");
    ofstream wyj("wyniki_6_1.txt");


    string slowo;

    for (int i = 0; i < 100; i++)
    {
        wej >> slowo;
        wyj << szyfruj(slowo) << endl;
    }
}
