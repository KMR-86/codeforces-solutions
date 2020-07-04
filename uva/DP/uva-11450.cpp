#include<bits/stdc++.h>
#define S 1000000
using namespace std;
vector<vector<int > > v;
int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc;
cin>>tc;
while(tc--){
    int M,C;
    cin>>M>>C;
    for(int i=0;i<C;i++){
        int k;
        cin>>k;
        vector<int>t;
        for(int j=0;j<k;j++){

            int tm;
            cin>>tm;
            t.push_back(tm);
        }
        v.push_back(t);

    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}


return 0;
}



