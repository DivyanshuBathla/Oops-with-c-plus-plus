#include<iostream>
#include<math.h>
using namespace std;
int sum(int a)

{
    if(a==1)
    return (a+a);
    else
    return((pow(a,a)+a)+sum(a-1));
}

int main()
{
    cout<<"Enter the value of n=";
    int n;
    cin>>n;
    cout<<"\nSum of series="<<sum(n)<<endl;
}
