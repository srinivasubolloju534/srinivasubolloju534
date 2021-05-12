#include<iostream.h>
int main(int argc, char *argv[])
{
	int num,c=0;
	cout<<"enter a number:";
	cin>>num;
	if(num!=1)
	{
	for( int i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			c++;
		}
	}
	if(c!=1)
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