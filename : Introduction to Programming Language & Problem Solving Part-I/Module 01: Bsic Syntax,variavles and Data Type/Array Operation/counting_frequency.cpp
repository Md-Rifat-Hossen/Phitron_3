#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int fq[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fq[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int ctn = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                ctn++;
                fq[j] = 0;
            }
        }
        if (fq[i] != 0)
        {
            fq[i] = ctn;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (fq[i] != 0)
        {
            cout << a[i] << "->" << fq[i] << endl;
        }
    }

    return 0;
}