#include<string>
#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int age;
    int year;
    char sec;
    int marks;
    public:
    static int count;
     void set_name(string s)
    {
        name=s;
    } 
    string get_name()
    {
        return(name);
    }
    void set_age(int a)
    {
        age=a;
    }
    int get_age()
    {
        return(age);
    }
    void set_year(int a)
    {
        year=a;
    }
    int get_year()
    {
        return(year);
    }
    void set_sec(char a)
    {
        sec=a;
    }
    char get_sec()
    {
        return(sec);
    }
    void set_marks(int a)
    {
        age=a;
    }
    int get_marks()
    {
        count++;
        return(age);
       
    }

};
int student::count=0;
int main()
{
    int m;
    cout<<"Enter the number of students=";
    cin>>m;
    student s[m];
    string str;
    int n;
    char ch;
    for(int i=0;i<m;i++)
    {
        cout<<"\nEnter the "<<i+1<<" studnet information=";
        cout<<"\nEnter the name";
        fflush(stdin);
        getline(cin,str);
        s[i].set_name(str);
        fflush(stdin);
        cout<<"\nEnter the age=";
        cin>>n;
        s[i].set_age(n);
        cout<<"\nEnter the year=";
        cin>>n;
        s[i].set_year(n);
        cout<<"\nEnter the sec=";
        cin>>ch;
        fflush(stdin);
        s[i].set_sec(ch);
        cout<<"\nEnter the marks=";
        cin>>n;
        s[i].set_marks(n);
    }
    int total=0;
    for(int i=0;i<m;i++)
    {
        total=total+s[i].get_marks();
    }
    cout<<"\nThe total marks of student is="<<total;
    cout<<"\nNumbers of calls for get_marks="<<student::count;
}