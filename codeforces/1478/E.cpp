#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
#include<conio.h>
ll a[N],l[N],r[N],t[4*N],marked[4*N],st[4*N],en[4*N];
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;
void build( int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build( v*2, tl, tm);
        build( v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
    st[v]=tl;
    en[v]=tr;
   // deB(v,t[v])
}
void push(int v) {
    if (marked[v]) {
        if(t[v])
        {
        	t[v*2]=(en[2*v]-st[2*v]+1);
        	t[v*2+1]=(en[2*v+1]-st[2*v+1]+1);
        }
        else
        	t[v*2] = t[v*2+1] = t[v];
        marked[v*2] = marked[v*2+1] = true;
        marked[v] = false;
    }
}

void update(int v, int tl, int tr, int l, int r, int new_val) {
    if (l > r) 
        return;
    if (l == tl && tr == r) {
        t[v] = new_val*(r-l+1);
        marked[v] = true;
    } else {
        push(v);
        int tm = (tl + tr) / 2;
        update(v*2, tl, tm, l, min(r, tm), new_val);
        update(v*2+1, tm+1, tr, max(l, tm+1), r, new_val);
        t[v]=t[2*v]+t[2*v+1];
    }
}
int query(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l <= tl && tr <= r)
        return t[v];
    push(v);
    int tm = (tl + tr) / 2;
    return query(v*2, tl, tm, l, min(r, tm))+ 
               query(v*2+1, tm+1, tr, max(l, tm+1), r);
}
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  #endif
  ll T=1,tt=0,n,q,i,x,y;
  cin>>T;
  string s,p;
  while(T--)
  {
  	tt++;
  	cin>>n>>q>>s>>p;
  	i=1;
  	while(i<4*n+10)
  	{
  		t[i]=marked[i]=0;
  		i++;
  	}
  	i=1;
  	while(i<=n)
  	{
  		a[i]=p[i-1]-'0';
  		i++;
  	}
  	i=0;
  	while(i<q)
  	{
  		cin>>l[i]>>r[i];
  		i++;
  	}
  	/*if(tt==411)
  	{
  		cout<<n<<" ";
  		Deb(q,s,p)
  		i=0;
  		while(i<q)
  		{
  			deB(l[i],r[i])
  			i++;
  		}
  		exit(0);
  	}*/
  	build(1,1,n);
  	i=q-1;
  	while(i>-1)
  	{
  		x=query(1,1,n,l[i],r[i]);
  		//deb(x)
  		if(x==0||x==r[i]-l[i]+1)
  		{
  			//deb(i)
  		}
  		else
  		{
  			y=(r[i]-l[i])/2;
  			//deB(x,y)
  			/*if(y==0)
  				{
  					NO
  					break;
  				}*/
  			if(x<=y)
  				update(1,1,n,l[i],r[i],0);
  			else if(r[i]-l[i]+1-x<=y)
  				update(1,1,n,l[i],r[i],1);
  			else
  			{
  				NO
  				break;
  			}	
  		}
  		//deb(t[3])
  		i--;
  	}
  	if(i!=-1)
  		cont;
  	i=1;
  	while(i<=n)
  	{
  		x=query(1,1,n,i,i);
  		//deb(x)
  		if(s[i-1]-'0'!=x)
  		{
  			//if(T<10)
  			NO
  			break;
  		}
  		i++;
  	}
  	if(i==n+1)
  		YES
  	/*deb(query(1,1,n,4,4))
  	deb(query(1,1,n,5,5))*/
  }
}