#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int bin2dec(string liczba)
{
    int bin = strtol(liczba.c_str(), NULL, 2);
    return bin;
}

string compare (string l1, string l2)
{
    for (int i = 0; i < l1.length(); i++)
    {
        if (l1[i] > l2[i])
            return l1;
        if (l2[i] > l1[i])
            return l2;
    }
}

int main()
{
    ifstream wej("liczby.txt");
    ofstream wyj("wynik4.txt", fstream::app);

    string liczba;
    string highS;

    int low = 999999, high = 0;
    int lowR, highR;

    for (int i=0; i<1000; i++)
    {
        wej >> liczba;
        if (bin2dec(liczba) < low)
        {
            low = bin2dec(liczba);
            lowR = i+1;
        }
        if (liczba.length() > high)
        {
            high = liczba.length();
            highR = i+1;
            highS = liczba;
        }
        if (liczba.length() == high)
        {
            if (liczba == compare(liczba, highS))
            {
                highS = liczba;
                highR = i+1;
            }
        }

    }

    wyj << lowR << " " << highR;


}
