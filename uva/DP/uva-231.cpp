#include<bits/stdc++.h>
#define S 1000000
#define inf 400000000
using namespace std;

vector<int>a;
int lis(vector<int>a)
{

    int n=a.size();
    /*for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;*/
    int I[n+1];
    int L[n];
    for(int i=0; i<n+1; i++)
    {
        if(i==0)
            I[i]=-inf;
        else
        {
            I[i]=inf;
        }

    }
    int f,l,mid;
    int list_len=0;


    for(int i=0; i<n; i++)
    {
        f=0;
        l=list_len;
        //cout<<f<<l<<endl;
        int equal_flag=0;
        while(f!=l)
        {
            mid=(f+l)/2;
            if(I[mid]<=a[i])
            {
                f=mid+1;

            }
            else if(I[mid]>a[i])
            {

                l=mid;
            }

            //cout<<f<<" "<<l<<" "<<mid<<endl;
        }
        mid=(f+l)/2;

        I[mid]=a[i];
        if(mid==list_len)
        {
            list_len++;
        }
        L[i]=mid+1;



    }
    int mx=-inf,ind=0;
    for(int i=0; i<n; i++)
    {
        if(mx<L[i])
        {
            mx=L[i];
            ind=i;
        }
    }

    return mx;



}
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    int c=1;
    while(true)
    {


        while(cin>>tc && tc!=-1)
        {
            a.push_back(tc);

        }
        reverse(a.begin(),a.end());
        int ans=lis(a);
        printf("Test #%d:\n  maximum possible interceptions: %d\n",c++,ans);
        a.clear();
        int ts;
        cin>>ts;
        if(ts==-1)break;
        else {a.push_back(ts);printf("\n");}


    }



    return 0;
}



