#include<iostream>
using namespace std;
int fact(int a)

{
    if(a<=1)
    return 1;
    else
    return(a*fact(a-1));
}

int main()
{
    cout<<"Enter the number whose factorial you want to find=";
    int n;
    cin>>n;
    cout<<"\nFact is="<<fact(n)<<endl;
}
