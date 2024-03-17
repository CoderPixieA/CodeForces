#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int diff;

        for(int i=0;i<n;i++)
        {
            if(arr[i] != arr[i+1])
            {
                if(arr[i+1] == arr[i+2])
                {
                    diff = i + 1;
                }
                else
                {
                    diff = i+2;
                }
                break;
            }
        }
        cout<<diff<<endl;
    }
}