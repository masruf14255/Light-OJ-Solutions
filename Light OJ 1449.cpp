#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        string add;
        cin>>add;
        cout<<"Case "<<i<<": ";
        if(add[4]!='s')
        {
            cout<<"https";
            for(int i=4; i<=add.size(); i++)
            {

                if(add[i]>='a' && add[i]<='z' || add[i]==':'||add[i]==','||add[i]=='.'||add[i]=='/')
                {
                    cout<<add[i];
                }
            }
        }
        else
        {
        	for(int i=0; i<=add.size(); i++)
        {

            if(add[i]>='a' && add[i]<='z' || add[i]==':'||add[i]==','||add[i]=='.'||add[i]=='/')
            {
                cout<<add[i];
            }
        }
        }
        cout<<endl;

    }
}
