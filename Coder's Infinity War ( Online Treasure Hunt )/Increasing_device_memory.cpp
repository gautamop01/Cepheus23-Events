/*
Nowadays, many devices including PCs and laptops require more RAM. Did you know that there are websites and applications that allow you to add additional memory to your device?

There is one such application with m pieces of programs that increase your device memory. The jth memory increasing program requires Ai gigabytes of memory for its working, and the software returns the memory to the device once it's completed running. It gives you Bi gigabytes of memory, which is added permanently to your device.

Note that each program can be used only once, and your device has a built-in memory of k gigabytes. Also, you cannot use a software that requires more memory to run than what your device currently has.

Input Format

The first line of input contains the number of test cases(t).
The second line contains the inputs for m, k, and then two lines each containing m integers describing the lists of A and B.
Constraints

1<= t <=100
1<= m <=100,
1<= k <=1000
1<= Ai,Bi <=1000
Output Format

The maximum possible amount of memory achieved by using the given programs in the application.
Sample Input 0

4
3 10
20 30 10
9 100 10
5 1
1 1 5 1 1
1 1 1 1 1
5 1
2 2 2 2 2
100 100 100 100 100
5 8
128 64 32 16 8
128 64 32 16 8
Sample Output 0

29
6
1
256
*/



#include <iostream>

#include <algorithm>

using namespace std;

int main()

{

    int t;

    cin >> t;

    while (t--) {

        int m, k;

        cin >> m >> k;

        int a[105], b[105];

        for (int i = 0; i < m; i++)

            cin >> a[i];

        for (int i = 0; i < m; i++)

            cin >> b[i];

        int ans = k;

        for (int i = 0; i < m; i++) {

            if (a[i] <= ans) {

                ans += b[i];

            } else {

                for (int j = i + 1; j < m; j++) {

                    if (a[j] <= ans) {

                        ans += b[j];

                        swap(a[i], a[j]);

                        swap(b[i], b[j]);

                        break;

                    }

                }

            }

        }

        cout << ans << endl;

    }

    return 0;
}
