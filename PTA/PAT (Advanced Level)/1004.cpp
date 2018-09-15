#include <iostream>
#include <vector>
//#define _TEST_
using namespace std;

int GetLevel(int i);
const int k_max = 103;
int father[k_max];
int level[k_max];
int book[k_max];
bool leave[k_max];
int count;

int main() {
  int i, j, k;
  for (i = 0; i < k_max; ++i) {
    father[i] = i;
    level[i] = -1;
    book[i] = 0;
    leave[i] = true;
  }
  int n, m;
  cin >> n >> m;
  int id1, id2;
  for (i = 0; i < m; ++i) {
    cin >> id1 >> k;
    leave[id1-1] = false;
    for (j = 0; j < k; ++j) {
      cin >> id2;
      father[id2-1] = id1 - 1;
    }
  }
  #ifdef _TEST_
  cout << GetLevel(1) << endl;
  #endif
  for (i = 0; i < k_max; ++i) {
    if (leave[i]) {
      count = 0;
      level[i] = GetLevel(i);
      book[level[i]] += 1;
    }
  }
  for (i = k_max - 1; i >= 0; --i) {
    if (book[i] != 0) {
      break;
    }
  }
  if (i == 0) {
    cout << "1\n";
  } else {
    cout << 0 << " ";
    for (j = 1; j <= i; ++j) {
      if (j != i) {
        cout << book[j] << " ";
      } else {
        cout << book[j] << endl;
      }
    }
  }
  return 0;
}

int GetLevel(int i) {
  if (father[i] == i) {
    return count;
  } else {
    ++count;
    GetLevel(father[i]);
  }
  return count;
}
