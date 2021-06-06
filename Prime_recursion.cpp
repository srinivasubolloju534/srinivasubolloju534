//checking whether prime or not using recursion!!

#include<iostream.h>
bool prime(int num,int fact)
{
	if(num<(fact*fact))
	{
		return 1;
	}
    if(num%fact==0)
    {
    	return 0;
    }
    else
    {
    return prime(num,fact+1);
    }
}

int main(int argc, char *argv[])
{  
    int num;
	cout<<"enter the number:";
	cin>>num;
	if(num>1)
	{	
	bool b=prime(num,2);
	if(b==1)
	{
		cout<<"\n prime!!"<<endl;
	}
	else
	{
		cout<<endl<<"not a prime!!"<<endl;
	}
    }
}
