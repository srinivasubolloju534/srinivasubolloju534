#include<iostream.h>
int main(int argc, char *argv[])
{
	int num,flag=1;
	cout<<"enter a number:";
	cin>>num;
	if(num!=1)
	{
	for( int i=2;i<(num+1)/2;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"not a prime";
	}
	else
	{
		cout<<"prime";
	}
	}
	else
	{
		cout<<"neither prime nor composite";
	}
}