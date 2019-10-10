#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int s,m,temp,i=0,j;
    cin>>s>>m;
    if(m==0&&s==1)
    {
        while(i<s)
            cout<<"0",i++;
        i=0;
        cout<<" ";
        while(i<s)
            cout<<"0",i++;
        return 0;
    }
    if(m>9*s||m<1)
    {
        cout<<"-1 -1";
        return 0;
    }
    temp=m;
//    i=1;
//    m=9;
    while(i<s)
    {
        j=0;
         if(i==00)
            j=1;
         while((m-j)>9*(s-i-1))
            {
                j++;
            }
        cout<<j;
        m-=j;
        //cout<<i;
        //cout<<m;
//        if(m==0)
//        {
//            while(i<s)
//            {
//                cout<<"0";
//                i++;
//            }
//            break;
//        }
        i+=1;
        //cout<<i<<" ";
    }
    m=temp;
    i=0;j=9;
    cout<<" ";
    while(i<s)
    {
        if(j<=m)
        {
            cout<<j;
            m-=j;
            i++;
        }
        else
        {
            while(j>m)
                j--;
        }
    }
}
