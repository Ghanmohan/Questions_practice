#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int path = 0;

bool rat_in_maze(char maze[][10], int soln[][10], int i, int j, int m, int n)
{
	if (i == m and j == n)
	{
		soln[m][n] = 1;

		//printing the path
		for (int i = 0; i <= m; i++) {
			for (int j = 0; j <= n; j++) {
				cout << soln[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		path++;
		return true;
	}

	//Recursive case

	//Rat should always be in the cage
	if (i > m or j > n)
	{
		return false;
	}

	//condition when we face dead end
	if (maze[i][j] == 'X')
	{
		return false;
	}
	//Assume that the solnution exixts
	soln[i][j] = 1;

	bool successright = rat_in_maze(maze, soln, i, j + 1, m, n);
	bool successdown = rat_in_maze(maze, soln, i + 1, j, m, n);

	//Backtracking
	soln[i][j] = 0;

	if (successdown or successdown)
	{
		return true;
	}
	return false;

}

int main()
{
	int m, n;
	cout << "Enter the number of rows and columns: ";
	cin >> m >> n;
	char maze[10][10];
	cout << "Enter the MAZE : " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> maze[i][j];
		}
	}
	cout << endl;

	cout << "The valid path is shown by 1 : " << endl;
	int soln[10][10] = {0};
	cout << endl;
	bool ans = rat_in_maze(maze, soln, 0, 0, m - 1, n - 1);
	cout << "The total number of path that can be followed is/are: " << path << endl;
	cout << endl;
	if (ans == false)
	{
		cout << "No more path exists";
	}

	return 0;
}


