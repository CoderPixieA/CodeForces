#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    int count = 0;
    cin>>t;

    for(int i = 0; i<t; i++)
    {
        string s;
        cin>>s;

        if(s[1] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout<<count;
}