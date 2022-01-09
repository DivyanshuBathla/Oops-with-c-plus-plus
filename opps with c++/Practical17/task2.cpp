#include<iostream>
#include<vector>

int main()
{
    std::vector<int> v;
    int n;
    std::cout<<"Enter the number of elements you want in array=";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        std::cin>>t;
        v.push_back(t);
    }
    std::vector<int>::iterator it;
    
    for(it=v.begin();it!=v.end();it++)
    std::cout<<*it<<" ";

    std::cout<<"\nSize of Capicity"<<v.capacity();
    std::cout<<"\nSize of vector="<<v.size();
    v.resize(18);
    std::cout<<"\nAfter resizeing";
    std::cout<<"\nSize of Capicity"<<v.capacity();
    std::cout<<"\nSize of vector="<<v.size()<<std::endl;
    std::cout<<"Checking whether vector is empty or not=";
    v.empty()?std::cout<<"YES":std::cout<<"NO";

}
