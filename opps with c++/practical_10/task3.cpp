#include<iostream>
using namespace std;
class num{
int a,b;
public:
num(int a,int b)
{
    (*this).a=a;
    (*this).b=b;
}
int rem()
{
    return(a%b);
}

};
int main()
{
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    num n(a,b);
    cout<<"\nThe remainder="<<n.rem();
}