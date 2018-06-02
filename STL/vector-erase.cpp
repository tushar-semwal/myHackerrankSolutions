#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x;
    vector<int> v;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        
        scanf("%d ",&x);
        v.push_back(x);
    }
    
    
    int k;
    int p,q;
    
    cin>>k;
    cin>>p>>q;
    
    v.erase(v.begin()+(k-1));
    v.erase(v.begin()+(p-1),v.begin()+(q-1));
    
    cout<<v.size()<<"\n";
    
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
