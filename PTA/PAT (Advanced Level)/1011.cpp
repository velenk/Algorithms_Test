#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  double w, t, l, sum, max;
  int i;
  char a[3] = { };
  sum = 1;
  for (i = 0; i < 3; ++i) {
    cin >> w >> t >> l;
    if (w > t) {
      max = w;
      a[i] = 'W';
    } else {
      max = t;
      a[i] = 'T';
    }
    if (max < l) {
      max = l;
      a[i] = 'L';
    }
    sum *= max;
  }
  for (i = 0; i < 3; ++i) {
    cout << a[i] << " ";
  }
  printf("%.2lf", (sum * 0.65 - 1) * 2);
  return 0;
}
