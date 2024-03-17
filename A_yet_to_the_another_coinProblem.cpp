#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll ans, n;
        cin >> n;
        int coin[5] = {15, 10, 6, 3, 1};
        map<int, int> mp;
        mp[0] = 0;
        mp[1] = 1;
        mp[2] = 2;
        mp[3] = 1;
        mp[4] = 2;
        mp[5] = 3;
        mp[6] = 1;
        mp[7] = 2;
        mp[8] = 3;
        mp[9] = 2;
        mp[10] = 1;
        mp[11] = 2;
        mp[12] = 2;
        mp[13] = 2;
        mp[14] = 3;

        ans = n / 15;
        n = n % 15;

        if (ans >= 1)
        {
            if (n >= 5)
            {
                ans = min((ans+mp[n]),(ans + 1 + mp[n - 5]));
            }

            else
            {
                ans = ans + mp[n];
            }
        }
        else
        {
            ans = ans + mp[n];
        }

        cout << ans << endl;
    }

    return 0;
}