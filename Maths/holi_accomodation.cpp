#include<bits/stdc++.h>
using namespace std;


class Graph
{
	int V;
	list<pair<int, int>> *l;

public:
	Graph(int v) {
		V = v;
		l = new list<pair<int, int>> [V];
	}
	void addEdge(int u, int v, int cost) {
		l[u].push_back(make_pair(v, cost));
		l[v].push_back(make_pair(u, cost));
	}

	int dfs_Helper(int node, bool * visited, int *count, int &ans)
	{
		//mark the node as visited
		visited[node] = true;
		count[node] = 1;

		for (auto nbr_pair : l[node])
		{
			int nbr = nbr_pair.first;
			int wt = nbr_pair.second;
			if (!visited[nbr])
			{
				count[node] += dfs_Helper(nbr, visited, count, ans);
				int nx = count[nbr];
				int ny = V - nx;
				ans += 2 * min(nx, ny) * wt;
			}
		}
		//just before leaving the parent node
		return count[node];
	}

	int dfs()
	{
		bool *visited = new bool[V];
		int *count = new int[V];
		for (int i = 0; i < n; i++)
		{
			visited[i] = false;
			count[i] = 0;
		}
		int ans = 0;
		dfs_Helper(0, visited, count, ans);
		return ans;
	}
};

int main()
{

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Graph g(4);
	g.addEdge(0, 1, 3);
	g.addEdge(1, 2, 2);
	g.addEdge(2, 3, 2);
	cout << g.dfs() << endl;

}