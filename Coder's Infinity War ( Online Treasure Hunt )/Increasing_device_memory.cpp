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
