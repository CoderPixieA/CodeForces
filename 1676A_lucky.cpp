#include <string>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;

        int num = stoi(str);

        int a, b;

        a= num / 1000;
        b = (num % 1000);
        
        int sum = 0;
        while(a !=0)
        {
            sum += a%10;
            a = a/10;
        }
        a = sum;
        sum = 0;
        while(b!=0)
        {
            sum += b%10;
            b = b/10;
        }
        b = sum;

        if(a == b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}