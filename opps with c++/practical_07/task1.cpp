#include<iostream>
using namespace std;
int main()
{
     cout<<"\nmain menu\n1.for current year\n2.current month\n3.Not applicable\n";
     int ch;
     cin>>ch;
     int year=2021;
     string month="October";
     string day="Tuesday";
     switch(ch)
     {
        case 1: cout<<"Year is="<<year;
        	break;
        case 2: cout<<"Month is="<<month;
        	break;
        case 3: cout<<"Day is="<<day;
        	break;
        case 4: cout<<"Not applicable";
        		break;
        default : cout<<"Wrong choice!!";
     }
     cout<<"\n";
}
