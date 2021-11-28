/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 300009
ll a[N],pre[N],suf[N];
bool p[1000009];
int main()
{
   ll i=2,j;
   while(i<=1000000)
   {
       if(p[i]==0)
       {
           j=i*i;
           while(j<=1000000)
           {
               p[j]=1;
               j+=i;
           }
       }
       i++;
   }
   ll t,n,e;
   cin>>t;
   while(t--)
   {
       cin>>n>>e;
       i=0;
       while(i<n)
           cin>>a[i++];
       ll ans=0;
       i=0;
       while(i<e)
       {
           if(a[i]==1)
            pre[i]=1;
            else
            pre[i]=0;
            j=i+e;
            while(j<n)
            {
                if(a[j]==1)
                    pre[j]=1+pre[j-e];
                else
                    pre[j]=0;
                j+=e;
            }
            j-=e;
            if(a[j]==1)
                suf[j]=1;
            else
                suf[j]=0;
            j-=e;
            while(j>-1)
            {
                if(a[j]==1)
                    suf[j]=1+suf[j+e];
                else
                    suf[j]=0;
                j-=e;
            }
            j=i;
            while(j<n)
            {
                if(a[j]!=1&&p[a[j]]==0)
                {
                    if(j-e>-1&&j+e<n)
                        ans+=(pre[j-e])*(suf[j+e]);
                    if(j-e>-1)
                        ans+=pre[j-e];
                    if(j+e<n)
                        ans+=suf[j+e];
                }
                j+=e;
            }
        //cout<<ans<<" ";
           i++;
       }
       cout<<ans<<"\n";
   }
}
