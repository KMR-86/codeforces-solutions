#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc;
cin>>tc;
while(tc--){
    int n;
    cin>>n;
    if(n<3)cout<<"1"<<endl;
    else{
        if(n%2==0)cout<<n/2<<endl;
        else{
            cout<<n/2+1<<endl;
        }
    }

}


return 0;
}



