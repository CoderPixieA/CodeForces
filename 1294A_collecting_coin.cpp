#include<iostream>
using namespace std;

int main()
{
    int i, t, a, b, c, d, n, m;

    cin>>t;

    for(i = 0; i<t; i++)
    {
        cin>>a>>b>>c>>d;
        int total = a+b+c+d;

        if(total%3 != 0)
        {
            cout<<"NO"<<endl;
        }
        else if(a>total/3||b>total/3||c>total/3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


    }
}