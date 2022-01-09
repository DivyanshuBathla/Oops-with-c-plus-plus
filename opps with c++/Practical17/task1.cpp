#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
   list<int> l;
   int n;
   cout<<"Enter the elements in array:"<<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
        cout<<"Enter the "<<i+1<<" element=";
        int elem;
        cin>>elem;
        l.push_back(elem);
   }
   list<int>::iterator it;
   cout<<"Elements in list::"<<endl;
   for(it=l.begin();it!=l.end();it++)
   {
       cout<<*it<<" ";
   }
   cout<<"\nSize of list="<<l.size()<<endl;
   cout<<"List after sorting::"<<endl;
   l.sort();
   for(it=l.begin();it!=l.end();it++)
   {
       cout<<*it<<" ";
   }
 
   cout<<"\nList in reverse order::"<<endl;
   l.reverse();
   for(it=l.begin();it!=l.end();it++)
   {
       cout<<*it<<" ";
   }

}
