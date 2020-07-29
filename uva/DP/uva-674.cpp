#include<bits/stdc++.h>
#define S 1000000
using namespace std;
long long int mem[6][7491];
int coins[5]= {1,5,10,25,50};
long long int max_ways(long long int n,long long int k)
{
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=k; j++)
        {
            if(i==0 && j==0)
                mem[i][j]=1;
            else if(j==0)
                mem[i][j]=1;
            else if(i==0)
                mem[i][j]=0;
            else
            {


                if(j>=coins[i-1])
                    mem[i][j]=mem[i-1][j]+mem[i][j-coins[i-1]];
                else
                {
                    mem[i][j]=mem[i-1][j];
                }

            }
        }
    }
    return mem[n][k];

}
int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    while(cin>>tc && tc!=EOF)
    {
        //memset(mem,0,sizeof(mem[0][0])*6*7491);
        long long int ans=max_ways(5,tc);
        cout<<ans<<endl;

    }



    return 0;
}




