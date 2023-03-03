#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> temp(n);
        int i = 0;
        int j = n - 1;
        bool flag = true;
        for (int k = n - 1; k >= 0; k--) {
            if (flag) {
                temp[j] = s[k];
                j--;
                flag = false;
            } else {
                temp[i] = s[k];
                i++;
                flag = true;
            }
        }
        string ans;
        for (int a = 0; a < n; a++) {
            ans += temp[a];
        }
        cout << ans << endl;
    }
    return 0;
}
