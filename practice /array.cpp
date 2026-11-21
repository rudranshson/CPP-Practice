#include <iostream>
using namespace std;

int main ()
{
int num[5];
for (int i=0;i<5;i++)
{
	cout<<"enter the "<<i+1<<"element:"<<endl;
	cin>>num[i];
}
int largest = num[0];
for (int i=0;i<5;i++)
{
	if(num[i] > largest){
		largest=num[i];
	}
}


cout<<"the largest number is: "<<largest;

return 0;
}

