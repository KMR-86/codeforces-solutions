#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        set<int>st;
        int ind=0;
        for(int i=0; i<2*n; i++)
        {
            int t;
            cin>>t;
            int a=st.size();
            st.insert(t);
            int b=st.size();
            if(a+1==b){
                cout<<t<<" ";
            }

        }
        cout<<endl;
        }



    return 0;
}



