#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll j,n,k=1;
    cin>>n;
    ll i=0;
    string s,p;
    unordered_map<string,ll> ms;
    //vector<string> v;
    vector<ll> a[1000];
//    v.push_back("hello");
    while(i<n)
    {
        cin>>s>>p>>p;
        //cout<<s<<" "<<p<<"\n";
        j=0;
        while(j<s.size())
        {
            s[j]=tolower(s[j]);
            j++;
        }
        j=0;
        while(j<p.size())
        {
            p[j]=tolower(p[j]);
            j++;
        }
        //cout<<s<<" "<<p<<"\n";
        if(!ms[s])
        {
            ms[s]=k;
           // v.push_back(s);
            k++;
        }
        if(!ms[p])
        {
            ms[p]=k;
           // v.push_back(p);
            k++;
        }
        a[ms[p]].push_back(ms[s]);
        i++;
    }
    list<ll> queue;

    // boolean array visited[] which stores the
    // information whether ith vertex is reached
    // at least once in the Breadth first search
    ll visited[1000]={};

    // initially all vertices are unvisited
    // so v[i] for all i is false
    // and as no path is yet constructed
    // dist[i] for all i set to infinity
//    for (ll i = 0; i < v; i++) {
//        visited[i] = false;
//        dist[i] = INT_MAX;
//        pred[i] = -1;
//    }

    // now source is first to be visited and
    // distance from source to itself should be 0
    ll ct=0;
    ll dist[1000];
    ll src=ms["polycarp"];
    visited[src]++;
    dist[src] = 0;
    queue.push_back(src);

    // standard BFS algorithm
    while (!queue.empty()) {
        ll u = queue.front();
        queue.pop_front();
        for (int i = 0; i < a[u].size(); i++) {
            if (visited[a[u][i]] == false) {
                visited[a[u][i]] = true;
                dist[a[u][i]] = dist[u] + 1;
                //pred[adj[u][i]] = u;
                queue.push_back(a[u][i]);

                // We stop BFS when we find
                // destination.
                   ct=max(ct,dist[a[u][i]]);
            }
        }
    }
    cout<<ct+1;
}
