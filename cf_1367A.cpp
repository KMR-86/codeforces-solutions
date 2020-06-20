#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    int cases;
    cin>>cases;
    while(cases--)
    {
        cin>>a;
        if(a.size()==1 || a.size()==2)
        {
            cout<<a<<endl;
        }
        else
        {

            cout<<a[0];
            for(int i=1; i<a.size()-1; i=i+2)
            {
                cout<<a[i];
            }
            cout<<a[a.size()-1]<<endl;
        }
    }



    return 0;
}
