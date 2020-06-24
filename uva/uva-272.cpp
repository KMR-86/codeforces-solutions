#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main()
{
    string str;
    int c=0;
    while(getline(cin,str))
    {

        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='\"')
            {
                if(c%2==0)
                {
                    cout<<"``";
                }
                else
                {
                    cout<<"''";
                }
                c++;
            }
            else
            {
                cout<<str[i];
            }
        }
        cout<<"\n";
    }



    return 0;
}
