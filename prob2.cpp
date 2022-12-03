#include <iostream>

using namespace std;
int main()
{
    int n, v[100], i, a;
    cin >> n;
    a = 0;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (i - 0; i < n; i++)
    {
        while (v[i] >= 10)
        {
            v[i] = v[i] / 10; 
        }
        a = a + v[i];
    }
    cout << a;

}