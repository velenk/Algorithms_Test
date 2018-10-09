#include <iostream>
using namespace std;

int map[1005][1005] = { },temp[1005][1005] = { }, visited[1005] = { };
int n, m, k;

void DFS(int s);

int main() {
  int i, j, x;
  int a, b, p;
  
  cin >> n >> m >> k;
  
  for (i = 0; i < m; ++i) {
    cin >> a >> b;
    --a;
    --b;
    map[a][b] = map[b][a] = 1;
  }
  
	for (i = 0; i < k; ++i) {
	  for (j = 0; j < n; ++j) {
	    visited[j] = 0;
    }
	  cin >> p;
	  --p;
	  visited[p] = 1;
	  for (j = 0; j < n; ++j) {
	    for (x = 0; x < n; ++x) {
	      temp[j][x] = map[j][x];
	      temp[p][x] = 0;
      }
	    temp[j][p] = 0;
    }
    int count = 0;
    for (j = 0; j < n; ++j) {
      if (visited[j] == 1) {
        continue;
      }
      DFS(j);
      ++count;
    }
    cout << count - 1 << endl;
  }
	return 0;
}

void DFS(int s) {
  visited[s] = 1;
  int i;
  for (i = 0; i < n; ++i) {
    if (visited[i] == 0 && temp[s][i] == 1) {
      DFS(i);
    }
  }
  return;
}
