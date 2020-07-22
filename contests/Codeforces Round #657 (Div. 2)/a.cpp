#include<bits/stdc++.h>
#define S 1000000
using namespace std;
int mem[100][100];
string s1;
string s2="abacaba";
int mx=-1;

int lcs_iter(int n,int m)
{
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(i==0 || j==0)
            {
                mem[i][j]=0;
                if(mx<mem[i][j])
                {
                    mx=mem[i][j];
;
                }

            }
            else if(s1[i-1]==s2[j-1] || s1[i-1]=='?')
            {
                mem[i][j]=mem[i-1][j-1]+1;
                if(mx<mem[i][j])
                {

                    mx=mem[i][j];
                }


            }
            else
            {
                mem[i][j]=0;
                if(mx<mem[i][j])
                    mx=mem[i][j];


            }
        }

    }
    return mx;

}

int countFreq(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        /* For current index i, check for
           pattern match */
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;

        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M)
        {
           res++;
           j = 0;
        }
    }
    return res;
}

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin>>tc;
    while(tc--)
    {
        memset(mem,-1,sizeof(mem[0][0])*100*100);
        mx=-1;
        int n;
        cin>>n;
        cin>>s1;
        string tmp=s1;
        replace( s1.begin(), s1.end(), '?', 'd');
        //cout<<s1<<endl;
        int lcs_len_temp=lcs_iter(s1.size(),s2.size());

        int c=0;
        for(int i=0; i<=s1.size(); i++)
        {
            for(int j=0; j<=s2.size(); j++)
            {
                if(mem[i][j]==mx)
                {
                    c++;
                }
            }

        }


        if(lcs_len_temp==7 && c==1)
        {
            cout<<"Yes"<<endl;
            cout<<s1<<endl;
        }
        else if(lcs_len_temp==7 && c>1)
        {
            cout<<"No"<<endl;
        }

        else
        {
            memset(mem,-1,sizeof(mem[0][0])*100*100);
            s1=tmp;
            mx=-1;
            int lcs_len=lcs_iter(s1.size(),s2.size());


            if(lcs_len!=7)
            {
                cout<<"No"<<endl;
            }
            else
            {
                int ind=0;
                for(int i=0; i<=s1.size(); i++)
                {
                    for(int j=0; j<=s2.size(); j++)
                    {
                        //cout<<mem[i][j]<<" ";
                        if(mem[i][j]==mx){
                            ind=i;
                            break;
                        }
                    }
                    //cout<<endl;

                }

                int j=0;
                string st="";
                for(int i=0; i<s1.size(); i++)
                {
                    //cout<<ind<<endl;
                    if(i>=ind-7 && i<ind)
                    {
                        //cout<<s2[j];
                        st=st+s2[j];
                        j++;
                    }
                    else if(s1[i]=='?'){
                        //cout<<'d';
                        st=st+'d';
                    }
                    else
                    {
                        //cout<<s1[i];
                        st=st+s1[i];
                    }

                }


                if(countFreq(st, s2)==1){
                    cout<<"Yes"<<endl;
                    cout<<st<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }



            }
        }

        //string lcs=backtrack(s1.size(),s2.size());
        //cout<<lcs<<endl;

    }


    return 0;
}

/*
4
5
a???cabazzzz
2
a??c?a?a
1
???????
1
dddabac???caba*/

