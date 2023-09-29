// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   int a[n];
//   for(int i=0;i<n;i++)
//   {
//     cin>>a[i];
//   }
//   for(int i=0;i<n;i++)
//   {
//     if(a[i]==a[i])
//     {
//         cout<<"YES"<<endl;
//     }
//     else cout<< "NO";
//   }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int n;
    cin >> n;
   unordered_set<int> seen;

    bool Duplicate = false;

    for (int i = 0; i < n; ++i) {
      int num;
        cin >> num;

        // Check if the number is already in the set
        if (seen.count(num) > 0) {
            Duplicate = true;
            break;
        }

        // Add the number to the set
        seen.insert(num);
    }

    if (Duplicate) {
       cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
