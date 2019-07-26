#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,i,j,d,n,k,ans[100010]={0};
    vector<long long> a,b;
    cin>>n>>k;
    x=n;
    while(x--)
    {
        cin>>d;
        a.push_back(d);
    }
    x=k;
    while(x--)
    {
        cin>>d;
        b.push_back(d);
    }
    unordered_map<long long,long long> m;
    j=b.size()-1;
    i=a.size()-1;
    //a[i+1]=0;
    while(i>-1)
    {
        m[a[i]]++;
        if(m[a[i]]==1)
            ans[i]=1+ans[i+1];
        else
            ans[i]=ans[i+1];
        //cout<<i<<" "<<ans[i]<<endl;
        i--;
    }
    i=0;
    while(i<k)
    {
        cout<<ans[b[i]-1]<<endl;
        i++;
    }
}
