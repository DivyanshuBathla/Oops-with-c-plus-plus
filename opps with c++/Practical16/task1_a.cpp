#include<iostream>
template<typename t> 
t sum(t a,t b)
{
    return(a+b);
}
int main()
{
     std::cout<<"The sum is="<<sum<int>(2,3);
}
