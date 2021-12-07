#include <bits/stdc++.h>
using namespace std;


class B {
    public:
	int k;
};

class C {
	public:
	int k;
};

class D : public B, public C{
	//contains two display() functions, how?
	public:
	void display()
	{       
		C::k=10;
		cout << C::k << endl;//problem solved by scope resolution
	}
};

int main(){

    D d;
    
    d.display();     
   
    return 0;
}
