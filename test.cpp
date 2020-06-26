#include<bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin>>str;
    int index=0;
    while(true)
    {
        index=str.find("ab");
        if(index==-1)
        {
            break;
        }
        str.replace(index, 2, "c"); ///this 2 is actually size of "ab"
        index=0;
    }
    cout<<str<<endl;

    return 0;
}
