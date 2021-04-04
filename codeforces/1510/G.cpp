#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define asc(i,a,n) for(I i=a;i<n;i++)
#define dsc(i,a,n) for(I i=n-1;i>=a;i--)
#define forw(it,x) for(A it=(x).begin();it!=(x).end();it++)
#define bacw(it,x) for(A it=(x).rbegin();it!=(x).rend();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define lb(x) lower_bound(x)
#define ub(x) upper_bound(x)
#define fbo(x) find_by_order(x)
#define ook(x) order_of_key(x)
#define all(x) (x).begin(),(x).end()
#define sz(x) (I)((x).size())
#define clr(x) (x).clear()
#define U unsigned
#define I long long int
#define S string
#define C char
#define D long double
#define A auto
#define B bool
#define CM(x) complex<x>
#define V(x) vector<x>
#define P(x,y) pair<x,y>
#define OS(x) set<x>
#define US(x) unordered_set<x>
#define OMS(x) multiset<x>
#define UMS(x) unordered_multiset<x>
#define OM(x,y) map<x,y>
#define UM(x,y) unordered_map<x,y>
#define OMM(x,y) multimap<x,y>
#define UMM(x,y) unordered_multimap<x,y>
#define L(x) list<x>
#define PBS(x) tree<x,null_type,less<I>,rb_tree_tag,tree_order_statistics_node_update>
#define PBM(x,y) tree<x,y,less<I>,rb_tree_tag,tree_order_statistics_node_update>
#define pi (D)acos(-1)
#define md 1000000007
I dia(I x,I d[],OS(I) tr[]){
  d[x]=0;
  forw(it,tr[x]){
    d[x]=max(d[x],dia((*it),d,tr));
  }
  d[x]++;
  return d[x];
}
V(I) dfs(I x,OS(I) tr[],I &rem){
  V(I) ans;
  if(rem==0){
    return ans;
  }
  ans.pb(x);
  rem--;
  forw(it,tr[x]){
    V(I) temp=dfs((*it),tr,rem);
    asc(i,0,sz(temp)){
      ans.pb(temp[i]);
    }
    if(sz(temp)){
      ans.pb(x);
    }
  }
  return ans;
}
void del(I x,OS(I) tr[],V(I) &di,I d[]){
  di.pb(x);
  I mx=0;
  forw(it,tr[x]){
    mx=max(mx,d[(*it)]);
  }
  forw(it,tr[x]){
    if(d[(*it)]==mx){
      del((*it),tr,di,d);
      tr[x].erase(it);
      break;
    }
  }
}
int main(){
  srand(time(NULL));
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  I t;
  cin>>t;
  while(t--){
    I n,k;
    cin>>n>>k;
    OS(I) tr[n+1];
    asc(i,0,n-1){
      I temp;
      cin>>temp;
      tr[temp].insert(i+2);
    }
    I d[n+1];
    dia(1,d,tr);
    V(I) di;
    del(1,tr,di,d);
    I rem=k-sz(di);
    rem=max(0ll,rem);
    V(I) ans;
    asc(i,0,min(k,sz(di))){
      rem++;
      V(I) temp=dfs(di[i],tr,rem);
      asc(j,0,sz(temp)){
        ans.pb(temp[j]);
      }
    }
    cout<<sz(ans)-1<<"\n";
    asc(i,0,sz(ans)){
      cout<<ans[i]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}