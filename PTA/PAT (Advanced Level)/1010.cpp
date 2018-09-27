#include <iostream>
//#define _TEST_
//#define _TEST_1_
using namespace std;

int CharToInt(char c) {
  if (c > 'a') {
    return (c - 'a' + 10);
  } else {
    return c - '0';
  }
}

long long ArrayToLonglong(char a[], int radix) {
  int i, sum = 0;
  int num;
  for (i = 0; a[i] != '\0'; ++i) {
    num = CharToInt(a[i]);
    sum = sum * radix + num;
    #ifdef _TEST_1_
    cout << num << " " << sum << endl;
    #endif
  }
  return sum;
}

long long GetSmallestRadix(char a[]) {
  int max = 0;
  int num;
  int i;
  for (i = 0; a[i] != '\0'; ++i) {
    num = CharToInt(a[i]);
    if (num > max) {
      max = num;
    }
  }
  return max;
}

long long FindRadix(char a[], char b[], long long radix) {
  long long begin = GetSmallestRadix(b);
  long long end = ArrayToLonglong(a, radix);
  long long number = end;
  long long mid, now;
  #ifdef _TEST_
  cout << number << " " << begin << " " << end << endl;
  #endif
  while (begin <= end) {
    mid = (begin + end) / 2;
    now = ArrayToLonglong(b, mid);
    #ifdef _TEST_
    cout << now << " ";
    #endif
    if (now > number) {
      end = mid - 1;
    } else if (now < number) {
      begin = mid + 1;
    } else {
      return mid;
    }
    #ifdef _TEST_
    cout << begin << " " << end << endl;
    #endif
  }
  return -1;
}

int main() {
  #ifdef _TEST_1_
  char x[4] = "110";
  long long x0 = ArrayToLonglong(x, 2);
  cout << x0 << endl;
  #endif
  char a[11] = { }, b[11] = { };
  int tag;
  long long radix;
  int result = 0;
  cin >> a >> b >> tag >> radix;
  switch (tag) {
    case 1:
      result = FindRadix(a, b, radix);
      break;
    case 2:
      #ifdef _TEST_
      cout << 2 << endl;
      #endif
      result = FindRadix(b, a, radix);
      break;
  }
  #ifdef _TEST_
  cout << endl << endl;
  #endif
  if (result == -1) {
    cout << "Impossible";
  } else {
    cout << result;
  }
  return 0;
}
