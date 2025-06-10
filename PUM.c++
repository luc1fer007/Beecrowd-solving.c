#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,N,start = 1;
    cin >> N ;
    for(row = 1 ; row <= N ; row++)
    {
        for( col = start ; col <= start + 3 ; col++) //start + 3 means there will be column 4//
        
        {
            if(col % 4 == 0) //Only print "PUM" //
            {
                cout << "PUM";
            }
            else 
            {
                cout << col << " ";
            }
        }
        cout << endl;
        start += 4; //After the 1st loop the start value is upgraded to 5 and again 9 and so on......//
        
    }
    
    
}