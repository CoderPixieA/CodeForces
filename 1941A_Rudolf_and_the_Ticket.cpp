// 1941A - Rudolf and the Ticket

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> lp(n);
        vector<int> rp(m);

        for (int i = 0; i < n; ++i)
        {
            cin >> lp[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> rp[i];
        }

        // sort(lp.begin(),lp.end());
        // sort(rp.begin(),rp.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (lp[i] + rp[j] <= k)
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
