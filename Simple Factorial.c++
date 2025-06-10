#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,fact = 1,i=1;
    cin >> N;
    for(i=1;i<=N;i++)
    {
        fact = fact * i;
    }
    cout<<fact<<endl;
}
