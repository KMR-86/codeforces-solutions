#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc;
cin>>tc;
while(tc--){
    int n,k;
    cin>>n>>k;
    long long int maxp=-1;
    int a[n],d[n];
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a[i]=t;
        d[i]=(t/k)*k+k-t;
        if(d[i]==k)d[i]=0;
        if(maxp<d[i])maxp=d[i];
        //cout<<d[i]<<" ";
    }

    map<int,int>mp;

    for(int i=0;i<n;i++){
        if(mp[d[i]]==0)mp[d[i]]=1;
        else{mp[d[i]]++;}
        //cout<<d[i]<<endl;
    }
    mp[0]=0;
    if(mp.rbegin()->second==0)cout<<"0"<<endl;
    else {
        //cout<<(mp.rbegin()->second-1)*(k) + mp.rbegin()->first<<endl;
        //cout<<maxp<<endl;
        if((mp.rbegin()->second-1)*(k) + mp.rbegin()->first > maxp)cout<<(mp.rbegin()->second-1)*(k) + mp.rbegin()->first+1<<endl;
        else{
            cout<<maxp+1<<endl;
        }
    }

}


return 0;
}



