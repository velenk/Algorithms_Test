#include <iostream>
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
  for (i = 0; a[i] != '\0'; ++i) {
    sum += sum * radix + CharToInt(a[i]);
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
  return max + 1;
}

long long FindRadix(char a[], char b[], long long radix) {
  long long begin = GetSmallestRadix(a);
  long long end = ArrayToLonglong(a, radix);
  long long number = end;
  long long mid, now;
  while (begin < end) {
    mid = (begin + end) / 2;
    now = ArrayToLonglong(b, mid);
    if (now > number) {
      end = mid;
    } else if (now < number) {
      begin = mid;
    } else {
      return mid;
    }
  }
  return -1;
}

int main() {
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
      result = FindRadix(b, a, radix);
      break;
  }
  cout << result;
  return 0;
}
