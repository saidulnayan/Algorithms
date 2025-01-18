#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100],b[100],c[100];
    int i,p,q,j,k,n,m=0,sum=0;
    gets(a);
    gets(b);
    p=strlen(a);
    q=strlen(b);
    if(p>q)
    {
        k=p-1;
    }
    else{
        k=q-1;
    }
    n=k;
    c[k]='\0';
    i=p-1;
    j=q-1;
    while(i>=0 && j>=0)
    {
      sum=a[i]+b[j]+m;
      sum=sum-96;
      c[k]=sum-48;
      i--;
      j--;
      k--;
    }
 for(int l=0;l<n;l++)
    cout<<c[l];
 return 0;
}
