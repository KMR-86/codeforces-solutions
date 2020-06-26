#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int N;
    int tc=0;
    cin>>tc;
    int c=0;
    while(tc--)
    {

        int flag=0;
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=-70;i<100;i++){
            for(int j=-20;j<100;j++){
                for(int k=1;k<100;k++){
                    if(i+j+k==a && i*j*k==b && i*i+j*j+k*k==c && i!=j && j!=k && i!=k){
                        cout<<i<<" "<<j<<" "<<k<<endl;
                        flag=1;
                        break;
                    }

                }
                if(flag==1)break;
            }
            if(flag==1)break;
        }
        if(flag==0){
            cout<<"No solution.\n";

        }
    }



    return 0;
}
