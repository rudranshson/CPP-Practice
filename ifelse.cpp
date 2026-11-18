#include <iostream>
using namespace std;

class Number
{
public:
	int num;
	void input()
	{
		cout<<"enter the number"<<endl;
		cin>>num;
	}
	void condition()
	{
		if (num % 2 ==0)
		{
			cout<<"the number is even"<< endl;
		}
		else{
			cout <<"the number is odd"<<endl;
		}
	}

};

int main()
{
Number n;
n.input();
n.condition();
return 0;
}
