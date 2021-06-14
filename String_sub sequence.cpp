#include <iostream>
#include<string>
using namespace std;

int main()
{
    int N,flag,k;
    string V,B[10];
    cin>>V;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>B[i];
    }
    for(int j=0;j<N;j++)
    {
     k=0;

       for(int i=0;i<B[j].size();i++)
       {
          flag=1;
          while(k<V.size())
          {
             
            if(B[j][i]==V[k])
            {
                flag=0;
                k++;
                break;
            }
            k++;
          }
          if(flag==1)
          {
                cout<<endl<<"NEGITIVE";
                break;

          }
            
       }
       if(flag==0)
       {
            cout<<endl<<"POSITIVE";
       }
  }
 return 0;
}
