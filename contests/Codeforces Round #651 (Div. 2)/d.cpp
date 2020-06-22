#include<bits/stdc++.h>
using namespace std;
 vector<int> a(200000,0);
bool check_odd_seq(int k,int n,int ans){
    int c=0;
    for(int i=0;i<n;i++){
        if(c%2==0){
            if(a[i]<=ans){
                c++;
                //cout<<a[i]<<" ";
            }
        }
        else{
            c++;
            //cout<<a[i]<<" ";
        }
    }
    //cout<<endl;
    if(c>=k){
        return true;
    }
    return false;
}

bool check_even_seq(int k,int n,int ans){
    int c=0;
    for(int i=0;i<n;i++){
        if(c%2==1){
            if(a[i]<=ans){
                c++;
                //cout<<a[i]<<" ";
            }
        }
        else{
            c++;
            //cout<<a[i]<<" ";
        }
    }
    //cout<<endl;
    if(c>=k){
        return true;
    }
    return false;
}

int bs(int n,int k){
    int mx=-1;
    for(int i=0;i<n;i++){
        if(mx<a[i]){
            mx=a[i];
        }
    }

    int l=1;
    int h=mx;
    int ans=h;
    int mid;

    while(l<=h){
        mid=(l+h)/2;
        //cout<<mid<<endl;
        if(check_even_seq(k,n,mid) || check_odd_seq(k,n,mid)){
            h=mid-1;
            ans=mid;
        }
        else{
            l=mid+1;

        }

    }
    return ans;

}
int main()
{
    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a[i]=t;

    }
    cout<<bs(n,k)<<endl;


    return 0;
}
