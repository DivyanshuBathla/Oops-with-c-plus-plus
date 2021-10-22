#include<iostream>
using namespace std;
int fact(int a)

{
    int f=1;
    for(int i=1;i<=a;i++)
    f=i*f;
    return(f);
}

int main()
{
    cout<<"Enter the number whose factorial you want to find=";
    int n;
    cin>>n;
    cout<<"\nFact is="<<fact(n)<<endl;
}
