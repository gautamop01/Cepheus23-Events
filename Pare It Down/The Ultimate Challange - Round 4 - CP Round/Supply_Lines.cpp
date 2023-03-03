/*You and your team have located the spies' spacecraft, and after investigating them, you have discovered some crates and a set of keys. Both the key and the crate are marked with a special number. Only proximity keys can be used to unlock the crate with the given key. Both the number  on the key, and the number  on the box are presented to you. If the sum of digits  is divisible by  but  is not, then the key is a proximity key.

Input Format

The first line contains a single integer  — the number of test cases. Then the test cases follow.
Each test case contains only two integers  and  in a single line.
Constraints

 ≤  ≤ 
 ≤  ≤ 
Output Format

For each testcase, output a string in a single line.

Sample Input 0

2
543 2
9684 7
Sample Output 0

Key unlocks the crate.
Key doesn't unlock the crate.
*/

#include <iostream>

using namespace std;

int sumOfDigits(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

bool isProximityKey(int k, int c) {
    int sum_k = sumOfDigits(k);
    int sum_c = sumOfDigits(c);
    return sum_k % sum_c == 0 && k % c != 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, c;
        cin >> k >> c;
        cout << (isProximityKey(k, c) ? "Key unlocks the crate.\n" : "Key doesn't unlock the crate.\n");
    }
    return 0;
}
