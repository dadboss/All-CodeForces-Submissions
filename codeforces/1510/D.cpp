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
int main(){
  srand(time(NULL));
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  I n,d;
  cin>>n>>d;
  I a[n];
  asc(i,0,n){
    cin>>a[i];
  }
  D dp[n+1][10];
  asc(i,0,n+1){
    asc(j,0,10){
      dp[i][j]=(D)INT_MIN;
    }
  }
  dsc(i,0,n){
    dp[i][a[i]%10]=log(a[i]);
    asc(j,0,10){
      dp[i][j]=max(dp[i][j],dp[i+1][j]);
      I temp=(a[i]*j)%10;
      D sv=log(a[i])+dp[i+1][j];
      dp[i][temp]=max(dp[i][temp],sv);
    }
  }
  if(dp[0][d]<0){
    cout<<-1;
  }else{
    V(I) ans;
    asc(i,0,n){
      if(dp[i][d]>dp[i+1][d]){
        D sv=log(a[i]);
        ans.pb(a[i]);
        if(sv==dp[i][d]){
          break;
        }
        asc(j,0,10){
          sv=dp[i+1][j]+log(a[i]);
          if(sv==dp[i][d]){
            d=j;
            break;
          }
        }
      }
    }
    cout<<sz(ans)<<"\n";
    sort(all(ans));
    asc(i,0,sz(ans)){
      cout<<ans[i]<<" ";
    }
  }
  return 0;
}