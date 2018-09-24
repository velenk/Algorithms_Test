#include <iostream>
#include <cstdio>
using namespace std;

void Input(int k, int n[], double a[]);
void Output(int count, int n[], double a[]);

int main() {
  int k1, k2;
  int i, j;
  int n;
  int count = 0;
  double a;
  int n1[1000] = { }, n2[1000] = { }, n3[2003] = { };
  double a1[1000] = { }, a2[1000] = { }, a3[2003] = { };
  cin >> k1;
  Input(k1, n1, a1);
  cin >> k2;
  Input(k2, n2, a2);
  for (i = 0; i < k1; ++i) {
    for (j = 0; j < k2; ++j) {
      n = n1[i] + n2[j];
      a = a1[i] * a2[j];
      if (n3[n] == 0) {
        n3[n] = 1;
        a3[n] = a;
        ++count;
      } else {
        a3[n] += a;
        if (a3[n] == 0) {
          n3[n] = 0;
          --count;
        }
      }
    }
  }
  Output(count, n3, a3);
  return 0;
}

void Input(int k, int n[], double a[]) {
  int i;
  double a0;
  int n0;
  for (i = 0; i < k; ++i) {
    cin >> n0 >> a0;
    n[i] = n0;
    a[i] = a0;
  }
  return;
}

void Output(int count, int n[], double a[]) {
  cout << count << " ";
  if (count == 0) {
    cout << "0 0.0";
  }
  int i;
  for (i = 2002; i >= 0; --i) {
    if (n[i] != 0) {
      printf("%d %.1lf", i, a[i]);
      --count;
      if (count > 0) {
        cout << " ";
      }
    }
  }
  return;
}
