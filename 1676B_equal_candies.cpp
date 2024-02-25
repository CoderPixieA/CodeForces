#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t!=0)
    {
        t--;

        int n, eat = 0;
        cin>>n;

        int arr[n];

        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr+n);

        for(int i = 1; i<n; i++)
        {
            eat = eat + (arr[i]-arr[0]);
        }
        cout<<eat<<endl;;
    }
}