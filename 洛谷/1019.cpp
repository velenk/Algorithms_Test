#include <bits/stdc++.h>
using namespace std;

vector<string> S;
vector<int> S0;
int maxi = 0;

int IfLink(string str1, string str2) {
    for(int i = 1; i < min(str1.length(), str2.length()); i++) {
        int flag = 1;
        for(int j = 0; j < i; j++)
            if(str1[str1.length() - i + j] != str2[j]) flag = 0;
        if(flag) return i;
    }
    return 0;
}

int DFS(string s, int l, int n) {
    for (int i = 0; i < n; ++i) {
        if (S0[i] < 2) {
            string t = S[i];
            int x = IfLink(s, t);
            if (x > 0) {
                l = l + t.length() - x;
                if (maxi < l) {
                    maxi = l;
                }
                ++S0[i];
                DFS(t, l, n);
                --S0[i];
                l = l - t.length() + x;
            }
        }
    }
    return l;
}

int main() {
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        S.push_back(s);
        S0.push_back(0);
    }
    string a;
    a.append("$");
    string ch;
    cin >> ch;
    a.append(ch);
    DFS(a, 1, n);
    cout << maxi << endl;
    return 0;
}
