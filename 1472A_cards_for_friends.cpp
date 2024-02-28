#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t != 0)
    {
        t--;

        int w, h, n, pcs = 1, j = 1;
        cin >> w >> h >> n;

        while (w % 2 == 0 || h % 2 == 0)
        {
            if (w % 2 != 0 && h % 2 == 0)
            {
                h = h / 2;
                pcs = pow(2, j);
                j++;
            }
            else if (w % 2 == 0 && h % 2 != 0)
            {
                w = w / 2;
                pcs = pow(2, j);
                j++;
            }
            else if (w % 2 == 0 && h % 2 == 0)
            {
                w = w / 2;
                pcs = pow(2, j);
                j++;
            }
        }
        if(pcs>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
