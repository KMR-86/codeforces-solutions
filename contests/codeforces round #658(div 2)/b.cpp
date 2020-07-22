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
    int sumnot1=0;
    int sum=0;
    int a[n];
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a[i]=t;
        if(t==1)sum++;
        else{
            sumnot1+=2;
        }

    }

    if( sum%2==0 && sumnot1%3!=0){
        cout<<"First"<<endl;
    }

    else if( sum%2==0 && sumnot1%3==0){
        cout<<"Second"<<endl;
    }
    else if( sum % 2==1 && sumnot1%3!=0){
        cout<<"Second"<<endl;
    }

    else if( sum % 2==1 && sumnot1%3==0){
        cout<<"First"<<endl;
    }

}


return 0;
}




