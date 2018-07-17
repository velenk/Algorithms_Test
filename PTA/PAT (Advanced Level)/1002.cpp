#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
  int count_k = 0;
  int out_k = 0;
  double num_x[1001] = {};
  int nx = 0;
  double a_nx = 0;
  //Input first line.
  cin >> count_k;
  for (;count_k > 0;count_k--) {
    cin >> nx >> a_nx;
    num_x[nx] += a_nx;
    out_k++;
  }
  //Input second line.
  cin >> count_k;
  for (;count_k > 0;count_k--) {
    cin >> nx >> a_nx;
    if (num_x[nx] == 0)
      out_k++;
    num_x[nx] += a_nx;
    if (num_x[nx] == 0)
      out_k--;
  }
  //Output the expression.
  int i;
  cout << out_k;
  for (i = 1000;i >= 0;i--) {
    if (num_x[i] != 0)
      printf(" %d %.1lf", i, num_x[i]);
  }
  cout << endl;
  return 0;
}
