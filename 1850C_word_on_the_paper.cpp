#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t!=0)
    {
        t--;

        char grid[8][8];

        for(int i = 0; i<8; i++)
        {
            for(int j = 0; j<8; j++)
            {
                cin>>grid[i][j];
            }
        }

        for(int i = 0; i<8; i++)
        {
            for(int j = 0; j<8; j++)
            {
                if(grid[i][j] != '.')
                {
                    cout<<grid[i][j];
                }
            }
        }
        cout<<endl;
    }
}