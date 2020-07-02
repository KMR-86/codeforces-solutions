#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    int cases;
    cin>>cases;
    while(cases--)
    {
        cin>>a>>b;
        int c=0;
        int mn=a<b?a:b;
        int mx=a>=b?a:b;
        if(mn*2<=mx)
        {
            cout<<mn<<endl;
        }
        else
        {
            int com=(mn/3)*2;
            mx=mx-((mn/3)*3);
            mn=(mn%3);

            //cout<<mx<<mn;
            if(mx>=2*mn)
            {
                com=com+mn;
            }

            cout<<com<<endl;
        }

    }



    return 0;
}
