#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue<int> q;
	stack<int> s;

	for (int i = 1; i <= 5; i++)
	{
		q.push(i);
	}

	while (!q.empty())
	{
		cout << q.front() << "->";
		q.pop();
	}
	cout << endl;

	for (int j = 6; j <= 10; j++)
	{
		s.push(j);
	}
	while (!s.empty())
	{
		cout << s.top() << ",";
		s.pop();
	}
}