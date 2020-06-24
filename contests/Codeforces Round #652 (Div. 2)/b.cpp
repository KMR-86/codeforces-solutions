#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int count_one(string s)
{
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int cases;
    cin>>cases;

    while(cases--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int f1,l0;
        int mn=INT_MAX;
        int mx=-1;

        for(int i=0;i<n;i++){
            if(s[i]=='0' && mx<i)mx=i;
            if(s[i]=='1' && mn>i)mn=i;

        }
        f1=mn;
        l0=mx;
        if(f1>l0){
            cout<<s<<endl;
        }
        else{
                s.replace(f1,l0-f1+1,"0");
            cout<<s<<endl;
        }





    }

    return 0;
}
