#include <bits/stdc++.h>
using namespace std;

string grammar[] = {"E+E", "E-E", "E*E", "E/E", "(E)", "a", "b", "c"};

int main()
{
    string s;
    cin>>s;

    string res = "E";

    int i=1;
    cout<<res<<endl;
    while(res.size() != s.size())
    {
        res = res + s[i];
        res = res + "E";
        cout<<res<<endl;
        res[i-1] = s[i-1];
        cout<<res<<endl;
        i+=2;
    }
    res[res.size()-1] = s[s.size()-1];
    cout<<res<<endl;
    return 0;
}
