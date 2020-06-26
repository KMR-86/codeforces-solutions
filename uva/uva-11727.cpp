#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc;
cin>>tc;
int ts=1;
while(tc--){

    vector<int> a(3,0);
    for(int i=0;i<3;i++){
        int t;
        cin>>t;
        a[i]=t;
    }
    sort(a.begin(),a.end());
    printf("Case %d: %d\n",ts,a[1]);
    ts++;

}


return 0;
}



