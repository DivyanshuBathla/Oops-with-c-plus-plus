#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<int,string> map1;
    map1.insert(pair<int,string>(1,"a"));
    map1.insert(pair<int,string>(2,"b"));
    map1.insert(pair<int,string>(12,"c"));
    map1.insert(pair<int,string>(4,"d"));
    map1.insert(pair<int,string>(2,"e"));
    map1.insert(pair<int,string>(5,"f"));

    for(auto it=map1.begin();it!=map1.end();it++)
    {
         cout<<it->first;
         cout<<"\t"<<it->second<<endl;
    }

    cout<<"Finding values using key(4)=";
    auto it=map1.find(4);
     cout<<it->first;
         cout<<"\t"<<it->second<<endl;
    
    cout<<"Assigning values from map1 to map2"<<endl;
    map<int,string>map2(map1.begin(),map1.end());
    cout<<"Values in map2="<<endl;
    for(auto it=map1.begin();it!=map1.end();it++)
    {
         cout<<it->first;
         cout<<"\t"<<it->second<<endl;
    }

    
 map2.erase(4);
 cout<<"\nAfter erasing key=4";
 for(auto it=map2.begin();it!=map2.end();it++)
    {
         cout<<it->first;
         cout<<"\t"<<it->second<<endl;
    }
cout<<"\nSize of map1="<<map1.size();
cout<<"\nMax size of map1="<<map1.max_size();
cout<<"\nChecking whether map 1 is empty or not=";
map1.empty()?cout<<"Yes":cout<<"No";
cout<<"\nClearing map 2"<<endl;
map2.clear();
for(auto it=map2.begin();it!=map2.end();it++)
    {
         cout<<it->first;
         cout<<"\t"<<it->second<<endl;
    }
cout<<"\nSize of map2="<<map1.size();
cout<<"\nMax size of map2="<<map1.max_size();

}
