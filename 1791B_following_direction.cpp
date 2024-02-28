#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t!=0)
    {
        t--;

        int x = 0, y = 0, n, flag = 0;
        string s;

        cin>>n;

        cin>>s;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'U')
            {
                y++;
            }
            else if(s[i] == 'D')
            {
                y--;
            }
            else if(s[i] == 'R')
            {
                x++;
            }
            else
            {
                x--;
            }
            if(x == 1 && y == 1)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}