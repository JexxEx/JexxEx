#include <iostream>

using namespace std;
int main()
{
    int  v[100], n, i, impare, pare;
    cin >> n;
    impare = 0;
    pare = 0;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            pare++;
        }
        else
        {
            impare++;
        }
    }
    cout << impare-pare;
}