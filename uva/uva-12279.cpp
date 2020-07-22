#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int n;
int c=1;
while(cin>>n && n!=0){


    int a=0,b=0;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t==0)a++;
        else b++;

    }
    printf("Case %d: %d\n",c++,b-a);

}


return 0;
}



