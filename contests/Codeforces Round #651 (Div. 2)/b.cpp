#include<bits/stdc++.h>
using namespace std;


int main()
{
    int cases;
    cin>>cases;


    while(cases--)
    {
        int n;
        cin>>n;
        vector<int> a(2*n+1,0);
        vector<int> f(2*n+1,0);
        int no=0;
        int ne=0;
        int pe,po;
        for(int i=1;i<=2*n;i++){
            int temp;
            cin>>temp;
            a[i]=temp;
            if(temp%2==0){ne++;pe=i;}
            else {no++;po=i;}
        }

        if(ne%2!=0 && no%2!=0){
            f[po]=1;
            f[pe]=1;
        }
        else if(ne>=2){
            int c=0;
            for(int i=1;i<=2*n;i++){
                if(a[i]%2==0){
                    f[i]=1;
                    c++;
                }
                if(c==2){
                    break;
                }

            }
        }
        else if(no>=2){
            int c=0;
            for(int i=1;i<=2*n;i++){
                if(a[i]%2==1){
                    f[i]=1;
                    c++;
                }
                if(c==2){
                    break;
                }

            }
        }


        for(int i=1;i<=2*n;i++){
            for(int j=1;j<=2*n;j++){
                if(i!=j && f[i]==0 && f[j]==0 && (a[i]+a[j])%2==0){
                    cout<<i<<" "<<j<<endl;
                    f[j]=1;
                    f[i]=1;
                }
            }
        }


    }

    return 0;
}
