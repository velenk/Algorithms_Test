#include <iostream>
using namespace std;

int main() {
  int n, i, j, k;
  int time = 0;
  k = 0;
  cin >> n;
  time += 5 * n;
  for (i = 0; i < n; ++i) {
    cin >> j;
    if (k < j) {
      time += (j - k) * 6;
    } else {
      time += (k - j) * 4;
    }
    k = j;
  }
  cout << time;
  return 0;
}
