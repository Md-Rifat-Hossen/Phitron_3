#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch (n%2)
    {
    case 0: /* constant-expression */
        /* code */
        cout<< "Even";
        break;
    
    default:
    cout<< "Odd";
        break;
    }

 return 0 ;
}