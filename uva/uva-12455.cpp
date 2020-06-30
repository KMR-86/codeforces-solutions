#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n;
        int X;
        cin>>X;
        cin>>n;
        int l[n];
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            l[i]=t;

        }
        int flag=0;
        for (int i = 0; i < (1 << n); i++)   // for each subset, O(2^n)
        {
            int sum = 0;
            for (int j = 0; j < n; j++) // check membership, O(n)
                if (i & (1 << j)) // test if bit ‘j’ is turned on in subset ‘i’?
                    sum += l[j]; // if yes, process ‘j’
            if (sum == X){
                flag=1;
                break;
            }
                 // the answer is found: bitmask ‘i’
        }
        if(flag)cout<<"YES\n";
        else{
            cout<<"NO\n";
        }

    }

    return 0;
}



