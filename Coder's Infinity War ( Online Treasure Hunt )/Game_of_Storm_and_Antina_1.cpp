/*Each participant starts with a fixed positive number that remains constant throughout the game. Antina has number b and Storm has number a. There is a pile of n stones.

Rules
Players take turns removing stones from the pile.
The number of stones a player can remove is equal to the greatest common factor of the player's fixed number and the number of stones left in the pile.
A player loses if they are unable to remove the necessary number of stones (i.e., the heap has fewer stones than required).
Winning the contest
Use the numbers a, b, and n to determine the winner of the contest.

Input Format

The first line contains number of test cases.
Each testcase consist of one line and the first line contains three space-seperated intgers a,b,n
Constraints

1<= a,b,n <=100
Output Format

If Simon wins, print "0" (without the quotes), otherwise print "1" (without the quotes).

Sample Input 0

2
3 5 9
1 1 100
Sample Output 0

0
1
*/

#include <iostream>
using namespace std;
Each participant starts with a fixed positive number that remains constant throughout the game. Antina has number b and Storm has number a. There is a pile of n stones.

Rules
Players take turns removing stones from the pile.
The number of stones a player can remove is equal to the greatest common factor of the player's fixed number and the number of stones left in the pile.
A player loses if they are unable to remove the necessary number of stones (i.e., the heap has fewer stones than required).
Winning the contest
Use the numbers a, b, and n to determine the winner of the contest.

Input Format

The first line contains number of test cases.
Each testcase consist of one line and the first line contains three space-seperated intgers a,b,n
Constraints

1<= a,b,n <=100
Output Format

If Simon wins, print "0" (without the quotes), otherwise print "1" (without the quotes).

Sample Input 0

2
3 5 9
1 1 100
Sample Output 0

0
1

int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

bool solve(int a, int b, int n) {
    int g = gcd(a, b);
    return n % (g * 2) != 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        cout << (solve(a, b, n) ? 0 : 1) << endl ;
    }
    return 0;
}
