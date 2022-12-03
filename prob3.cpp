#include <iostream>
using namespace std;

int main()
{
    int a, b, n, s, copie, nrDivizori, j;
    cin >> a >> b;


    for (n=a+1; n<b; n++)
    {
        s = 0;
        copie = n;
        while (copie > 0)
        {
            s = s + copie % 10;
            copie = copie / 10;
        }

        nrDivizori = 0;
        for (j = 1; j <= s; j++)
        {
            if (s % j == 0)
            {
                nrDivizori++;
            }
        }

        if (nrDivizori==2)
        {
            cout << n << " ";
        }


    }