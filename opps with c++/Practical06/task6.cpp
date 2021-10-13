#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string a="hello";
   cout<<&a<<endl;
   a[0]='j';
   cout<<&a<<endl;
   cout<<a<<endl;
}
