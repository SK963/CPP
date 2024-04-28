#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

bool cmp(int a ,int  b)
{
    if(a < b)
    {
        return true;
    }
    else
        false;
}

int main()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0 ; i< n; i++)
        {
            cin>>a[i];
        }

    cout<<"the inserted vector:- ";

    for(int i = 0 ; i< n; i++)
        {
            cout<<a[i]<<" ";
        }cout<<endl;

    sort(a.begin() , a.end()); //increasing order
    cout<<"default sorting algo result :- ";
    for(int i = 0 ; i< n ; i++)
        {
            cout<<a[i]<<" "; 
        }cout<<endl;

    sort(a.begin() , a.end() , cmp);

        cout<<" sorting algo result using user defined comparator function :- ";
    for(int i = 0 ; i< n ; i++)
        {
            cout<<a[i]<<" "; 
        }cout<<endl;
    
}