#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i=1,d,count=0,max;
    cin>>n>>k;
    while(i<=n)
    {
            cin>>d;
            if(i<k&&d>0)
            {
                count++;
            }
            else
            if(i==k&&d>0)
            {
                max=d;
                count++;
            }
            else
                if(i>k&&d>0)
                {
                    if(max==d)
                        count++;
                }
            i++;
    }
    cout<<count;
}

