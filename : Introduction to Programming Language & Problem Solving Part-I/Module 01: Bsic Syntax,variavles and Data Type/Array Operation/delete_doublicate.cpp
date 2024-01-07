#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], fq[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ctn = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {

                for (int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                j--;
                n--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}