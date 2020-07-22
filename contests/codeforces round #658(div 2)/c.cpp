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
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;

    int ans=0;
    if(s1==s2){
        cout<<"0"<<endl;
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(s1[i]!=s2[i]){
                ans=ans+3;
            }
        }
        cout<<ans<<" ";
        for(int i=n-1;i>=0;i--){
            if(s1[i]!=s2[i]){
                cout<<i+1<<" ";
                cout<<"1"<<" ";
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }

}


return 0;
}




