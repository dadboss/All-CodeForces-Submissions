#include<iostream>
using namespace std;
bool check(string s)
{
    int i=0;
    while(i<s.size())
    {
        if(s[i]!='1')
            return false;
        i++;
    }
    return true;
}
int main()
{
    long long n,t,final=0,count,i=0;
    string s[10000],cmp;
    cin>>n>>t;
    cin.ignore();
    while(i<t)
    {
        cin>>s[i++];

    }
    i=0;
    count=0;
    while(i<t)
    {
        if(check(s[i]))
        {
            final=max(final,count);
            count=0;
        }
        else
            count++;
        i++;
    }
    cout<<max(final,count);
}
