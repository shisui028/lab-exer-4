#include<iostream>

using namespace std;

int main()
{
	int num[5]={1,2,3,4,5};
	int* ptr=num;

	for(int x=0;x<5;x++)
	{
	cout<<*ptr<<endl;
	ptr++;
	}
}
