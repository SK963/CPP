#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>


//return the increasing order of both first and second element of the pair
bool cmp1(pair<int, int> a , pair <int , int> b)
{
    if(a > b)
        return true;
    return false;
        
}


// a comparator function in which the first elecment wil  be increasing order 
//and the second element will be in decreasing order if first element is same
bool cmp2(pair<int, int> a , pair <int , int> b)
{
    if(a.first !=  b.first)
    {
        if(a.first > b.first)
            return true;
        else
            return false;
    }
    else
    {
        if(a.second < b.second)
            return true;
        else
            return false;
    };
        
}


int main()
{
    int n;
    cin>>n;

    vector<pair<int ,int >> a(n);
    for(int i = 0 ; i< n; i++)
        {
            cin>>a[i].first >> a[i].second;
        }

    cout<<"the inserted pair vector:- "<<endl;

    for(int i = 0 ; i< n; i++)
        {
            cout<<a[i].first<<" "<<a[i].second<<endl;
        }cout<<endl;

    sort(a.begin() , a.end()); //increasing order
    cout<<"default sorting algo result :- "<<endl;
  for(int i = 0 ; i< n; i++)
        {
            cout<<a[i].first<<" "<<a[i].second<<endl;
        }cout<<endl;

    

        cout<<"sorting algo result using user defined comparator1 function :- "<<endl;
		sort(a.begin() , a.end() , cmp1);
    for(int i = 0 ; i< n; i++)
        {
            cout<<a[i].first<<" "<<a[i].second<<endl;
        }cout<<endl;


		 cout<<"sorting algo result using user defined comparator2 function :- "<<endl;
		 sort(a.begin() , a.end() , cmp2);
    for(int i = 0 ; i< n; i++)
        {
            cout<<a[i].first<<" "<<a[i].second<<endl;
        }cout<<endl;
    
}