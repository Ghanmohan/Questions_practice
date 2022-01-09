#include<bits/stdc++.h>
using namespace std;

int main()
{
	priority_queue<int> pq_max; //Max priority heap
	priority_queue<int, vector<int>, greater <int>> pq; // Min priority Heap

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int no;
		cin >> no;
		pq.push(no); //O(logN)
	}

	while (!pq.empty())
	{
		cout << pq.top() << ","; //O(1)
		pq.pop(); //O(LogN)
	}
}