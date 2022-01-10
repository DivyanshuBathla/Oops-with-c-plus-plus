#include<iostream>
#include<map>
#include<vector>

#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,3,8,4,2,2,2,2,8,34,23,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cout<<"\nConverting array to vector:"<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\nVector after sorting:"<<endl;
    sort(v.begin(),v.end());
   for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<"\nVector after reversing:"<<endl;
    reverse(v.begin(),v.end());
   for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<"\nMaximum element in vector="<<*max_element(v.begin(),v.end());
    cout<<"\nMinimum element in vector="<<*min_element(v.begin(),v.end());
  
    cout<<"\nOccurence of 2 in vector="<<count(v.begin(),v.end(),2);

     int arr1[]={2,7,8,7,9,49,494,4,4,94,94,98,48,4};
     int size=sizeof(arr1)/sizeof(arr[0]);
     sort(arr1,arr1+size);
     cout<<"\nArray after sorting="<<endl;
     for(int i=0;i<size;i++)
     cout<<arr1[i]<<" ";
     int temp;
     cout<<"\nEnter the element you want to search in array=";
     cin>>temp;
     binary_search(arr1,arr1+size,temp)?cout<<"Element found"<<endl:cout<<"Element not found"<<endl;
}
