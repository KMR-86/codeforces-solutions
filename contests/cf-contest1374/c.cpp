#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ir=0;
        int c=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
                c++;
            if(s[i]==')')
                c--;
            if(c<0)
            {
                ir++;
                c=0;
            }
        }

        cout<<ir<<endl;
    }

    return 0;
}




