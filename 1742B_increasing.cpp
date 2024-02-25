#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        t--;

        int n, flag = 0;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr,arr+n);

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "NO"<<endl;
        }
        else
        {
            cout << "YES"<<endl;
        }
    }
}