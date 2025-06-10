#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,co_g = 0 ,co_d = 0 ,co_a = 0  ; 
    while(1)
    {
        if(n == 4) break;
        else 
        {
            cin >> n;
            if(n == 1)
            {
                co_a++;
            }
            if(n == 2)
            {
                co_g++;
            }
            if(n == 3)
            {
                co_d++;
            }
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<co_a<<endl;
    cout<<"Gasolina: "<<co_g<<endl;
    cout<<"Diesel: "<<co_d<<endl;
}
