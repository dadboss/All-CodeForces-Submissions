#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,d;
    cin>>t;
    cin.ignore();
    multiset<long long> s,f,c;
    n=t;
    while(n--)
   {
       cin>>d;
       s.insert(d);
   }
   n=t-1;
   while(n--)
   {
       cin>>d;
       f.insert(d);
   }
   auto it1=s.begin(),it2=f.begin(),en=f.end();
   //en--;
   while(en!=it2)
   {
       if(*it1!=*it2)
       {cout<<*it1<<endl;
       break;}
       it1++;
       it2++;
   }
   if(it2==en)
    cout<<*it1<<endl;
   n=t-2;
   while(n--)
   {
       cin>>d;
       c.insert(d);
   }
   it2=f.begin();
   auto it3=c.begin();
   while(*it3==*it2)
   {
       it3++;
       it2++;
   }
   cout<<*it2<<endl;
}
