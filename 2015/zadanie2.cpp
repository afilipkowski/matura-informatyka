#include <iostream>
#include <fstream>

using namespace std;

bool div2(string liczba)
{
    if (liczba[liczba.length()-1] == '1')
        return false;
    return true;
}

bool div8(string liczba)
{
        if (liczba[liczba.length()-2] == '0' &&
            liczba[liczba.length()-3] == '0')
                return true;
    return false;
}

int main()
{
    ifstream wej("liczby.txt");
    ofstream wyj("wynik4.txt", fstream::app);

    string liczba;
    int ile2 = 0, ile8 = 0;

    for (int i=0; i<1000; i++)
    {
        wej >> liczba;
        if (div2(liczba))
        {
            ile2++;
            if(div8(liczba))
                ile8++;
        }

    }

    wyj << ile2 << " " << ile8 << endl;

}
