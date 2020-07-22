#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int tc;
cin>>tc;
while(tc--){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a[i]=t;
    }

    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        b[i]=t;
    }
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                cout<<"YES"<<endl;
                cout<<"1"<<" "<<a[i]<<endl;
                flag=1;
                break;
            }
        }
        if(flag)break;
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }
}


return 0;
}



