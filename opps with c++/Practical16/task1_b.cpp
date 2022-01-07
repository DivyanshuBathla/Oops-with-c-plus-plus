#include<iostream>
template<typename t1,typename t2,typename t3> 
t3 sum(t1 a,t2 b)
{
    return(a+b);
}
int main()
{
     std::cout<<"The sum is="<<sum<int,float,double>(2,3.5);
}
