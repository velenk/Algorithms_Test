#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
  string id;
  string in;
  string out;
};

int main() {
  int n;
  Student student;
  Student in;
  Student out;
  cin >> n;
  cin >> student.id >> student.in >> student.out;
  in = out = student;
  for (; n > 1; --n) {
    cin >> student.id >> student.in >> student.out;
    if (in.in > student.in) {
      in = student;
    }
    if (out.out < student.out) {
      out = student;
    }
  }
  cout << in.id << " " << out.id << endl;
  return 0;
}
