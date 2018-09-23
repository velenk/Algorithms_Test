#include <iostream>
#include <vector>
using namespace std;

vector<int> number(10000);

int main() {
  int n, i, j, k;
  int sum, max, begin, end;
  cin >> n;
  for (i = 0 ;i < n; ++i) {
    cin >> k;
    number[i] = k;
  }
  sum = i = 0;
  max = begin = end = -1;
  for (j = 0; j < n; ++j) {
    sum += number[j];
    if (sum > max) {
      max = sum;
      begin = i;
      end = j;
    }
    if (sum < 0) {
      sum = 0;
      i = j + 1;
    }
  }
  if (begin == -1) {
    cout << 0 << " " << number[0] << " " << number[n-1];
  } else {
    cout << max << " " << number[begin] << " " << number[end];
  }
  return 0;
}
