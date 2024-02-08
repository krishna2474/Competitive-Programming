#include<bits/stdc++.h>
using namespace std;

int Reversort(vector<int> L)
{
    int cost=0;
    for(int i=0;i<L.size()-1;i++) 
    {
        int min=*min_element(L.begin()+i,L.end());
        auto indx=find(L.begin(),L.end(),min);
        reverse(L.begin()+i,indx+1);
        cost+=distance(L.begin(),indx)+i-1;
    }
    return cost;
}

int main()
{
    int T;
    cin>>T;
    for(int c=1;c<=T;c++)
    {
        vector<int> L;  
        int N;
        cin>>N;
        for(int i=1;i<=N;i++)
        {
            int num;
            cin>>num;
            L.push_back(num);
        }
        cout<<"Case#"<<c<<": "<<Reversort(L)<<endl;
    }
    return 0;
}