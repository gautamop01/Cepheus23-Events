/*Little Laksha enjoys using her smartphone to listen to music. Because the smartphone has limited memory, Laksha uses the popular social network InTalk to listen to his favorite music.

The song takes a long time to download because the internet in Elektrozavodsk is not so fast. But Laksha can't wait any longer. T seconds make up the length of the song. Lesha plays the first S seconds of the song that she downloaded. Laksha starts the song over from the beginning as soon as the playback reaches the portion that hasn't yet been downloaded; the loaded portion of the song stays on his phone and the download continues from there. This process continues until the entire song has been downloaded and Laksha has finished listening to it. The Internet enables you to download q - 1 seconds of the track for every q seconds of real time.

Inform Laksha of the number of times she will begin the song, including the first start.

Explanation for Test case 1:
In the first test, the song is played twice faster than it is downloaded, which means that during four first seconds Laksha reaches the moment that has not been downloaded, and starts the song again. After another two seconds, the song is downloaded completely, and thus, Laksha starts the song twice.
Explanation for Test Case 3:
In the third sample test the download finishes and Laksha finishes listening at the same moment. Note that song isn't restarted in this case.
Input Format

Input consists of 2 parts:

First line contain no. of test cases evaluated
Second line contains three integers T, S, q seperated with spaces.
Constraints

2 ≤ q ≤ 104
1 ≤ S < T ≤ 
Output Format

Output contains the number of times the song will be restarted

Sample Input 0

3
5 2 2
5 4 7
6 2 3
Sample Output 0

2
1
1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int t, s, q;
        cin >> t >> s >> q;
        int restarts = 0;
        while (s < t) {
            s = s * q;
            restarts++;
        }
        cout << restarts << endl;
    }
    return 0;
}
