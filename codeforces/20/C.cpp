#include <bits/stdc++.h>
using namespace std;
#define ll long long
# define INF LLONG_MAX
ll n;
typedef pair<ll, ll> iPair; 
class Graph 
{ 
    ll V;    // No. of vertices 
  
    // In a weighted graph, we need to store vertex 
    // and weight pair for every edge 
    list< pair<ll, ll> > *adj; 
  
public: 
    Graph(ll V);  // Constructor 
  
    // function to add an edge to graph 
    void addEdge(ll u, ll v, ll w); 
  
    // prints shortest path from s 
    void shortestPath(ll s); 
}; 
  
// Allocates memory for adjacency list 
Graph::Graph(ll V) 
{ 
    this->V = V; 
    adj = new list<iPair> [V]; 
} 
  
void Graph::addEdge(ll u, ll v, ll w) 
{ 
    adj[u].push_back(make_pair(v, w)); 
    adj[v].push_back(make_pair(u, w)); 
} 
  
// Prints shortest paths from src to all other vertices 
void Graph::shortestPath(ll src) 
{ 
    // Create a priority queue to store vertices that 
    // are being preprocessed. This is weird syntax in C++. 
    // Refer below link for details of this syntax 
    // https://www.geeksforgeeks.org/implement-min-heap-using-stl/ 
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq; 
  
    // Create a vector for distances and initialize all 
    // distances as infinite (INF) 
    vector<ll> dist(V, INF); 
  
    // Insert source itself in priority queue and initialize 
    // its distance as 0. 
    pq.push(make_pair(0, src)); 
    dist[src] = 0; 
    ll par[V+1]={};
  
    /* Looping till priority queue becomes empty (or all 
      distances are not finalized) */
    while (!pq.empty()) 
    { 
        // The first vertex in pair is the minimum distance 
        // vertex, extract it from priority queue. 
        // vertex label is stored in second of pair (it 
        // has to be done this way to keep the vertices 
        // sorted distance (distance must be first item 
        // in pair) 
        ll u = pq.top().second; 
        pq.pop(); 
  
        // 'i' is used to get all adjacent vertices of a vertex 
        list< pair<ll, ll> >::iterator i; 
        for (i = adj[u].begin(); i != adj[u].end(); ++i) 
        { 
            // Get vertex label and weight of current adjacent 
            // of u. 
            ll v = (*i).first; 
            ll weight = (*i).second; 
  
            //  If there is shorted path to v through u. 
            if (dist[v] > dist[u] + weight) 
            { 
            	//cout<<u<<" "<<v<<"\n";
                // Updating distance of v 
                par[v]=u;
                dist[v] = dist[u] + weight; 
                pq.push(make_pair(dist[v], v)); 
            } 
        } 
    } 
	if(dist[n]==INF)
		cout<<"-1";
	else
	{
		ll i=n;
		vector<ll> q;
		q.push_back(n);
		while(1)
		{ 
			q.push_back(par[i]);
			i=par[i];
			if(par[i]==0)
				break;
		}
		i=q.size()-1;
		while(i>-1)
		{
			cout<<q[i]<<" ";
			i--;
		}
	}
} 
int main()
{
	ll a,b,w,m;
	cin>>n>>m;
	Graph g(n+1);
	while(m--)
	{
		cin>>a>>b>>w;
		g.addEdge(a,b,w);
	}
	g.shortestPath(1);
}