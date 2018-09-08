#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int T,I,D,Z,x,y,z,a,i,j,p[10];
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>I>>D>>Z;
       x=I;
     for(j=0;j<=100;j++)
    {
       if(x%Z==0)
        {
           a=j*D;
           z=I+a;
           y=z/Z;
           p[i]=y;
           if (j!=0 && j<y)
           {
             p[i]=0;
             break;
           }
           break;
        }
        else
        {
            x=x+D;

        }

    }}
  for(i=0;i<T;i++)
    cout<<p[i];
}
