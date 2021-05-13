#include<iostream.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int num,flag=1;
	cout<<"enter a number:";
	cin>>num;
	if(num!=1)
	{
        //for(int i=2;i*i<=num;i++)->instead of calling sqrt() "O(sqft(num))"/times.
	for( int i=2;i<=sqft(num);i++)
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
