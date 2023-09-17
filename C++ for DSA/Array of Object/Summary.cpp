// 1.Array of object
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int roll;
//     int marks;
// };
// int main()
// {
//     student a[2];
//     for(int i=0;i<2;i++)
//     {
//         getline(cin,a[i].name);
//         cin>>a[i].roll;
//         cin>>a[i].marks;
//          cin.ignore();
//     }
   
  
//    for(int i=0;i<2;i++)
//     {
//         cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
//     }
  

//     return 0;
// }

// 2.Array of min and max;

// #include<bits/stdc++.h>
// using namespace std;
// class student 
// {
//     public:
//     string name;
//     int marks;
//     int roll;
// };
// int main()
// {
//      student a[2];
//     for(int i=0;i<2;i++)
//     {
//         getline(cin,a[i].name);
//         cin>>a[i].roll;
//         cin>>a[i].marks;
//          cin.ignore();
//     }
//     student mx;
//     mx.marks=INT_MIN;
//     for(int i=0;i<2;i++)
//     {
//         if(a[i].marks>mx.marks)
//         mx=a[i];
//     }
    
    
//         cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
//     student min;
//     min.roll=INT_MAX;
//     for(int i=0;i<2;i++)
//     {
//         if(a[i].roll<min.roll)
//         min=a[i];
//     }
//    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
  

//     return 0;
// }
// 3.shorting using array object using selection


#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    string name;
    int marks;
    int roll;
};
int main()
{
     student a[2];
    for(int i=0;i<2;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll;
        cin>>a[i].marks;
         cin.ignore();
    }
    for(int i=0;i<1;i++)
    {
        for(int j=i+1;j<2;j++)
        {
            swap(a[i],a[j]);
        }
    }
    for(int i=0;i<2;i++)
     {
         cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
     }

    return 0;
}