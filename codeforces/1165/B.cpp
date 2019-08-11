#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,d,i;
    cin>>n;
    x=n;
    multiset<long long> s;
    while(x--)
    {
        cin>>d;
        s.insert(d);
    }
    i=1;
    auto it=s.begin(),e=s.end();
    while(i<=n)
    {
       // cout<<i<<" "<<*it<<endl;
        if(it==e)
         {
            cout<<i-1;
            //cout<<" dssgsd";
            break;
         }
//        if(s.empty())
//        {
//            cout<<i;
//            //cout<<" dssgsd";
//            break;
//        }
        if(i>*it)
        {
            it++;
            continue;
        }
        it++;
        i++;
    }
    if(i==n+1)
        cout<<n;
}
