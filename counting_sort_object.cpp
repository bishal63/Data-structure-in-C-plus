#include<bits/stdc++.h>
using namespace std;
class school
{
    public:
        char c;
        int count;
        bool cmp(school a,school b)
        {
            if(a.count>b.count) return true;
            else return false;
        }
};
int main()
{
    int n;
    cin>>n;
    school frq[26];
    for(int i=0;i<26;i++)
    {
        frq[i].c=0;
        frq[i].count=(i-'a');
    }
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        frq[c-'a'].count++;
        sort(frq,frq+26);
    }
    for(int i=0;i<26;i++)
    {
        if(frq[i].count>0)
        {
            for(int j=0;j<frq[i].count;j++)
            {
                cout<<frq[i].c;
            }
        }
    }
}