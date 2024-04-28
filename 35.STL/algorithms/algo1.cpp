#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i< n; i++)
        {
            cin>>v[i];
        }

    // min
    int min= * min_element(v.begin() , v.end());
    cout<<min<<endl;
    // max
    int max = *max_element(v.begin() , v.end());
    cout<<max<<endl;

    // sum - accumulate
    int intital_sum = 0;
    int sum = accumulate(v.begin() , v.end() , intital_sum);
    cout<<sum<<endl;

    // count
    int ct = count(v.begin() , v.end() , 43);
    cout<<ct<<endl;
    // find - searching
    auto it = find(v.begin() , v.end() , 43);
    if(it != v.end())
        cout<<*it<<" found in the array."<<endl;
    else 
        cout<<"element not found"<<endl;

    
    // reverse
    reverse(v.begin() , v.end());
    for(auto val : v)
        {
            cout<<val<<" ";
        }cout<<endl;

    

    
}