/*Cepheus Ciphers are assigned ID numbers ranging from  to , which are then split into two groups, odd and even cyphers. They are required to queue up, with odd ID Ciphers standing first in ascending order of their ID number, followed by even ID Ciphers in the same manner. In order to decide the group's leader, a random number k is chosen, and the Cipher occupying the  position in the front of the line is chosen. You have to find the ID number of the lead Cipher.

Input Format

The first line contains a single integer  — the number of test cases. Then the test cases follow.
Each test case contains only two integers  and  in a single line.
Constraints

 ≤  ≤ 
 ≤  ≤   ≤ 
Output Format

Print the ID number of the Cipher that will stand at the position number k.

Sample Input 0

2
10 5
6 6
Sample Output 0

9
6
Explanation 0

For n = 10, the arrangement will be {1,3,5,7,9,2,4,6,8,10}, here the ID of Cipher at 5-th position from the front is 9.
*/

#include <iostream>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (k <= (n + 1) / 2)
            cout << 2 * k - 1 << endl;
        else
            cout << 2 * (k - (n + 1) / 2) << endl;
    }
    return 0;
}
