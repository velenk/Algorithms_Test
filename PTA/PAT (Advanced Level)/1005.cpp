#include <iostream>
#include <string>
using namespace std;

int main() {
  char number[103];
  int sum = 0;
  int i = 0;
  cin >> number;
  while (number[i] != '\0') {
    sum += number[i] - '0';
    ++i;
  }
  string str[10] = {"zero","one","two","three",
	"four","five","six","seven","eight","nine"};
	int stack[103] = { };
	int count = 0;
	while (sum != 0) {
	  stack[count] = sum % 10;
    sum /= 10;
    ++count;
  }
  for (; count > 1; --count) {
    cout << str[stack[count-1]] << " ";
  }
  cout << str[stack[0]] << endl;
  return 0;
}
