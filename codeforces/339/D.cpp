#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long t,n,m,po,i=0,d,p,updat,x,ctr,a[132000];
  cin>>n>>m;
  po=pow(2,n);
  vector<long long> b(2*po,0);
  x=po;
  while(x--)
  {
      cin>>a[i++];
  }
  cin>>p>>updat;
  a[p-1]=updat;
  i=0;
  while(i<po)
  {
      b[i+po]=a[i++];
  }
  i=pow(2,n+1)-1;
  x=(i+1)/2;
  while(i>1)
  {
      ctr=x/2;
      x=ctr;
      while(ctr--)
      {
          b[i/2]=b[i] | b[i-1];
          i-=2;
      }
      if(i==1)
      {
          cout<<b[i]<<endl;
          break;
      }
      else
      {
          ctr=x/2;
          x=ctr;
          while(ctr--)
          {
                b[i/2]=b[i] ^ b[i-1];
                i-=2;
          }
      }
        if(i==1)
    cout<<b[1]<<endl;
 
  }
  while(--m)
  {
      cin>>p>>updat;
      t=p+po-1;
      b[t]=updat;
      while(t>1)
      {
         if(t&1)
         {
             b[t/2]=b[t]| b[t-1];
             t/=2;
         }
         else
         {
             b[t/2]=b[t]| b[t+1];
             t/=2;
         }
         if(t!=1)
         {
 
         if(t&1)
         {
             b[t/2]=b[t] ^ b[t-1];
             t/=2;
         }
         else
         {
             b[t/2]=b[t] ^ b[t+1];
             t/=2;
         }
         }
      }
      cout<<b[1]<<"\n";
  }
}