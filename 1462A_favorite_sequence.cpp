#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        t--;

        int n;
        cin >> n;

        int arr[n] = {0};
        int wb[n] = {0};

        int j = 1, k = n - 1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        wb[0] = arr[0];

            for (int i = 1; i < n; i++)
            {
                if (i % 2 == 1)
                {
                    wb[i] = arr[k];
                    k--;
                }
                else if(i%2 == 0)
                {
                    wb[i] = arr[j];
                    j++;
                }
            }

        for (int i = 0; i < n; i++)
        {
            cout << wb[i]<<" ";
        }
        cout << endl;
    }
}