#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        char alphabet[26];
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            alphabet[ch - 65] = ch;
        }
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << alphabet[i] << alphabet[i];
            }
            cout << endl;
        }
    }
    return 0;
}
