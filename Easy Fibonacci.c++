#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,a=0,b=1,temp;
    cin >> N;
    for(i=1;i<=N;i++)
    {
        if(i==1)
        {
            cout<<"0";

        }
        else if(i==2)
        {
            cout<<" 1";
        }
        else
        {
            cout << " " << a+b;
            temp = b;
            b = a+b;
            a = temp;
        }

    }
    cout << endl;  //helps to prevent  presentation errors//
    return 0;

}
