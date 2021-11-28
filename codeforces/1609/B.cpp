/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n,q;
   string s;
   cin>>n>>q>>s;
   s="!"+s;
   ll ans=0;
   ll i=1;
   while(i+2<s.size())
   {
       if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')
        ans++;
        i++;
   }
   char c;
   while(q--)
   {
       cin>>i>>c;
       if(i+2<s.size()&&s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')
        ans--;
        if(i+1<s.size()&&i-1>0&&s[i-1]=='a'&&s[i]=='b'&&s[i+1]=='c')
        ans--;
        if(i-2>0&&s[i-2]=='a'&&s[i-1]=='b'&&s[i]=='c')
        ans--;
        s[i]=c;
       if(i+2<s.size()&&s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')
        ans++;
        if(i+1<s.size()&&i-1>0&&s[i-1]=='a'&&s[i]=='b'&&s[i+1]=='c')
        ans++;
        if(i-2>0&&s[i-2]=='a'&&s[i-1]=='b'&&s[i]=='c')
        ans++;
        cout<<ans<<"\n";
   }
}
