#include <iostream>
#include <fstream>

using namespace std;

bool wiecej(string liczba)
{
    int zero = 0;
    for (int i=0; i<liczba.length(); i++)
    {
        if (liczba[i] == '0')
            zero++;
    }
    if (zero > liczba.length()/2)
        return true;
    return false;
}


int main()
{
    ifstream wej("liczby.txt");
    ofstream wyj("wynik4.txt");

    string liczba;
    int ile=0;

    for (int i=0; i<1000; i++)
    {
        wej >> liczba;
        if (wiecej(liczba))
            ile++;
    }

    wyj << ile << endl;
}
