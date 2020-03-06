#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    vector<pair<int,int> >::iterator it=lower_bound(v.begin(),v.end(),make_pair(1,2));
    cout<<(*it).first<<' '<<(*it).second<<endl;
    return 0;
}
