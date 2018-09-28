#include <iostream>
#include <string>
using namespace std;

class Grades {
  public:
    string id;
    int c;
    int m;
    int e;
    int a;
    int rank_c;
    int rank_m;
    int rank_e;
    int rank_a;
};

Grades data[2001];

int main() {
  int n, m, i, j;
  cin >> n >> m;
  for (i = 0; i < n; ++i) {
    cin >> data[i].id >> data[i].c >> data[i].m >> data[i].e;
    data[i].a = (data[i].c + data[i].m + data[i].e) / 3;
  }
  for (i = 0; i < n; ++i) {
    data[i].rank_c = data[i].rank_m = data[i].rank_e = data[i].rank_a = 1;
    for (j = 0; j < n; ++j) {
      if (data[j].c > data[i].c) {
        ++data[i].rank_c;
      }
      if (data[j].m > data[i].m) {
        ++data[i].rank_m;
      }
      if (data[j].e > data[i].e) {
        ++data[i].rank_e;
      }
      if (data[j].a > data[i].a) {
        ++data[i].rank_a;
      }
    }
  }
  string s;
  for (i = 0; i < m; ++i) {
    cin >> s;
    int not_found = 1;
    for (j = 0; j < n; ++j) {
      if (s == data[j].id) {
        int max_rank = data[j].rank_a;
        char course = 'A';
        if (max_rank > data[j].rank_c) {
          max_rank = data[j].rank_c;
          course = 'C';
        }
        if (max_rank > data[j].rank_m) {
          max_rank = data[j].rank_m;
          course = 'M';
        }
        if (max_rank > data[j].rank_e) {
          max_rank = data[j].rank_e;
          course = 'E';
        }
        cout << max_rank << " " << course << endl;
        not_found = 0;
        break;
      }
    }
    if (not_found) {
      cout << "N/A" << endl;
    }
  }
  return 0;
}
