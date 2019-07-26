#include<bits/stdc++.h>
using namespace std;
int main()
{
  double n,x,y,a,b;
  set<double> s;
  cin>>n>>x>>y;
  while(n--)
  {
      cin>>a>>b;
      if(x!=a)
        s.insert((y-b)*1.0/(x-a));
    else
        s.insert(1.2323232323);
  }
  cout<<s.size();
}
