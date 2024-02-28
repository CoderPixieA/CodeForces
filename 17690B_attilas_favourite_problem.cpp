#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        t--;

        int n, c;
        string s;

        cin >> n;
        cin >> s;

        char res = s[0];

        for (int i = 1; i < n; i++)
        {
            if (s[i] > res)
            {
                res = s[i];
            }
        }

        c = res;

        cout << c - 96 << endl;
    }
}