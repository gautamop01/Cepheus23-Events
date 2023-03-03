/*
As Cepheus Ciphers were searching for clues, one of the group went to a spaceship destroyed a long time ago where they found another encoded message . While the group was decoding the message written in binary language , ,the first seven letters were Armada but when they tried to decode further messages they were attacked and kidnapped by a group of the most dreadful gang famous as Cylons . As the leader of the Cylons , Megatrons was celebrating the completion of 1000 murders , he gave them a chance to live by defeating him in the Game of Death .

Game of Death is a card game played between two playing with a deck of n cards . In each turn , each player can pick 1 to 3 cards and the player who picks up the last card will be declared as winner.

They ask cepheus Cipher to send the most intelligent player to compete and our Cipher will take the first turn. If both played optimally to win, Find out whether this group of Cepheus Ciphers will survive this death scare.


Given a deck of n cards, print "Yes" if you can win the game otherwise print "No". (Output are case sensitive)

Input Format

The first line contains a single integer T — the number of test cases. Then the test cases follow.
Each test case contains a single integer n in a single line.
Constraints

 ≤  ≤ 
 ≤  ≤ .
Output Format

For each testcase, output "Yes" or "No" (case sensitive) in separate line.

Sample Input 0

2
4
3
Sample Output 0

No
Yes
Explanation 0

For n = 4, there are three possible outcomes:
1. You remove one card. Your opponent removes three cards, including the final one. You're out.
2. You take out two cards. Your opponent removes two cards, including the last one. You're out.
3. You take out three cards. Your opponent removes the last card. You're out.
You lose in every scenario. Hence, the output is No.
*/

#include <iostream>

using namespace std;

bool canWin(int n) {
    return n % 4 != 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (canWin(n) ? "Yes\n" : "No\n");
    }
    return 0;
}
