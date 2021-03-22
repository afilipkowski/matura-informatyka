#include <iostream>
#include <fstream>

using namespace std;

bool bledny (string slowo, string szyfr)
{
    int klucz = 0;
    while(slowo[0] != szyfr[0])
        {
           slowo[0]++;
           if (slowo[0] > 'Z')
                slowo[0] -= 26;
           klucz++;
        }

    for (int i = 1; i < slowo.length(); i++)
    {
        slowo[i] += klucz;
        if (slowo[i] > 'Z')
                slowo[i] -= 26;
        if (slowo[i] != szyfr[i])
            return true;
    }

    return false;
}


int main()
{
    ifstream wej("dane_6_3.txt");
    ofstream wyj("wyniki_6_3.txt");

    string slowo, szyfr;

    for (int i = 0; i < 3000; i++)
    {
        wej >> slowo >> szyfr;
        if(bledny(slowo, szyfr))
            wyj << slowo << " " << szyfr << endl;
    }

}
