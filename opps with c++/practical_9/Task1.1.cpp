#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    int roll;
    string no;
    string add;
    public:
    void set_name(string s)
    {
        name=s;
    } 
    string get_name()
    {
        return(name);
    }
    void set_no(string s)
    {
        
        no=s;
    } 
    string get_no()
    {
        fflush(stdin);
        return(no);
    }
    void set_add(string s)
    {
        add=s;
    } 
    string get_add()
    {
        return(add);
    }
    void set_roll(int n)
    {
        roll=n;
    }
    int get_roll()
    {
        return(roll);
    }
    
};
int main()
{
    student s1,s2;
    string s;
    int n;
    
        cout<<"\nEnter the details of 1 student";
        cout<<"\nEnter the name=";
        getline(cin,s);
        s1.set_name(s);
        cout<<"\nEnter the roll no=";
        cin>>n;
        s1.set_roll(n);
        fflush(stdin);
        cout<<"\nEnter the phone number=";
        getline(cin,s);
        s1.set_add(s);
        cout<<"\nEnter the address=";
        getline(cin,s);
        s1.set_add(s);

        cout<<"\nEnter the details of 2 student";
        cout<<"\nEnter the name=";
        getline(cin,s);
        s2.set_name(s);
        cout<<"\nEnter the roll no=";
        cin>>n;
        s2.set_roll(n);
        fflush(stdin);
        cout<<"\nEnter the phone number=";
        getline(cin,s);
        s2.set_add(s);
        cout<<"\nEnter the address=";
        getline(cin,s);
        s2.set_add(s);

     
   
        cout<<"\nThe details of 1 student";
        cout<<"\nThe name=";
        s=s1.get_name();
        fflush(stdin);
        cout<<s;
        cout<<"\nThe roll no=";
        n=s1.get_roll();
        cout<<n;
        fflush(stdin);
        cout<<"\nThe phone number=";
        fflush(stdin);
        s=s1.get_no();
         fflush(stdin);
        cout<<s;
         cout<<"\nThe add=";
         fflush(stdin);
        s=s1.get_add();
        cout<<s;

         cout<<"\nThe details of 2 student";
        cout<<"\nThe name=";
        s=s2.get_name();
        cout<<s;
        cout<<"\nThe roll no=";
        n=s2.get_roll();
        cout<<n;
        fflush(stdin);
        cout<<"\nThe phone number=";
        s=s2.get_no();
        cout<<s;
         cout<<"\nThe add=";
        s=s2.get_add();
        cout<<s;
    
}