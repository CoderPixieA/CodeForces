#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t!=0)
    {
        string s;
        cin>>s;

        int a, b;

        a = s[0] - 48;
        b = s[2] - 48;

        cout<<a+b<<endl;

        t--;
    }
}