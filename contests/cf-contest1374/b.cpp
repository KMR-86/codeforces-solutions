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
    int c=0;
    while(n!=1){
        if(n%6==0){
            n=n/6;
            c++;

        }
        else if(n%3==0){
            n=n*2;
            c++;
        }
        else{
            c=-1;
            break;
        }

    }
    cout<<c<<endl;

}


return 0;
}



