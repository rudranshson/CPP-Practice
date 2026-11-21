#include <iostream>
using namespace std;

int num[5];
void input()
{
	for(int i= 0;i<5;i++)
	{
		cout <<"enter the element  "<<i+1<<endl;
		cin>>num[i];
	}
}
void display()
{
	 for(int i= 0;i<5;i++)
	{
                cout <<i+1<<"the element is :"<<endl;
                cout<<num[i]<<endl;

	}
}
int main()
{
input();
display();
return 0;
}



