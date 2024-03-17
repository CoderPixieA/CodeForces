#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;

    n = pow(5,n);

    ll sum = 0;
    ll mod;

    mod = n%10;
    sum = (sum*10) + mod;
    n = n/10;

    mod = n%10;
    sum = (mod*10) + sum;
    n = n/10;

    cout<<sum<<endl;
}