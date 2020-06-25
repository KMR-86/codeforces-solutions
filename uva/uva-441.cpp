#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int N;
    int ct=0;
    while(cin>>N )
    {
        if(N==0)break;

        if(ct!=0){
            cout<<endl;
        }
        ct++;
        int c=0;

        int a[N];
        for(int i=0; i<N; i++)
        {
            int t;
            cin>>t;
            a[i]=t;
        }
        for(int i=0; i<N; i++)
        {
            for(int j=i+1; j<N; j++)
            {
                for(int k=j+1; k<N; k++)
                {
                    for(int l=k+1; l<N; l++)
                    {
                        for(int m=l+1; m<N; m++)
                        {
                            for(int n=m+1; n<N; n++)
                            {
                                if(c!=0){
                                    cout<<endl;
                                }
                                printf("%d %d %d %d %d %d",a[i],a[j],a[k],a[l],a[m],a[n]);
                                c++;
                            }
                        }


                    }

                }
            }
        }

        cout<<endl;
    }




    return 0;
}
