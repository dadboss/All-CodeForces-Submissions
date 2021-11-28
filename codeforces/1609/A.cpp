/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i=0,num=1;
        while(i<n)
        {
            cin>>a[i];
            while(a[i]%2==0)
            {
                a[i]/=2;
                num*=2;
            }
            i++;
        }
        sort(a,a+n);
        ll ans=0;
        i=0;
        while(i+1<n)
        {
            ans+=a[i];
            i++;
        }
        ans+=a[i]*num;
        cout<<ans<<"\n";
    }
}
