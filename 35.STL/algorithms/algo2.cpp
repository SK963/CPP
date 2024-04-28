#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v = {2,4,6,7};
    //check whether every element is even or not
    cout<<all_of(v.begin(), v.end(),[](int x){return x%2 == 0;})<<endl;
    cout<<any_of(v.begin() , v.end() ,[](int x){return x> 0;})<<endl;
    cout<<none_of(v.begin(), v.end(), [](int x){return x>0;})<<endl;
    
}