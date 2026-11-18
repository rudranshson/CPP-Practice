#include <iostream>
using namespace std;

int main()
{
	int num[5];
	for (int i=0;i<5;i++)
	{
		cout<<"Enter the elements of the array  "<<i+1<<"  th element"<<endl;
		cin>>num[i];
	}


	int smallest= num[0];
	for (int i =0;i<5;i++){
		if(smallest>num[i]){
			smallest=num[i];
		}
	}
	cout<<"the smallest number in te array is:"<<smallest;
return 0;
}
