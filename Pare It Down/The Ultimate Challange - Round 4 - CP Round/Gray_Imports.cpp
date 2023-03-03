/*You blend with the underworld as one of Cepheus Cipher's fleet members to track down spies. You inform the manager that the spies purchased space cars from a car garage, and he or she provides you with the information regarding the order in which the vehicles were purchased. To further identify spies, you must now calculate the number of licence plates.

image
For given sequence number , you have to output corresponding licence plate number.

Input Format

The first line contains a single integer T — the number of test cases. Then the test cases follow.
Each test case contains a single integer n in a single line.
Constraints

 ≤  ≤ 
 ≤  ≤ .
Output Format

For each testcase, output the string in a separate line.

Sample Input 0

4
1
26
27
28
Sample Output 0

CC-A
CC-Z
CC-AA
CC-AB
*/

#include <bits/stdc++.h>
using namespace std;

string getPlateNumber(int n) {
string result = "CC-";
n--;
if (n < 26) {
result += (char)('A' + n);
} else {
result += (char)('A' + n / 26 - 1);
result += (char)('A' + n % 26);
}
return result;
}

int main() {
int t;
cin >> t;
while (t--) {
int n;
cin >> n;
cout << getPlateNumber(n) << endl;
}
return 0;
}
