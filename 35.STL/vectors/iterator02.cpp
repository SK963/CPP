#include <iostream>
using namespace std;
#include <vector>

int main()
{
   

    vector<pair<int ,int >>vp = {{1,2},{2,3},{3,4}};
    vector<pair<int , int>>::iterator it;

    cout<<"access with iterators"<<endl;
    for(it = vp.begin() ; it != vp.end() ; ++it)
        {
             cout<<(*it).first<<" "<<(*it).second<<endl;   
        }
    cout<<endl;

    
    for(it = vp.begin() ; it != vp.end() ; ++it)
        {
             cout<<it->first<<" "<<it->second<<endl;   
        }
    cout<<endl;

      // (*it).first <==> it->first

    cout<<"access using auto keyword for iterator declaration "<<endl;
    for(auto it1 = vp.begin() ; it1 != vp.end() ; ++it1)
        {
             cout<<it1->first<<" "<<it1->second<<endl;   
        }
    cout<<endl;

    //range base loops
    cout<<"access using range based loop "<<endl;
    for(pair<int,int>&value: vp)
        {
            cout<<value.first<<" "<<value.second<<endl;
        }
    cout<<endl;
    
    //auto keyword + range based loop
    cout<<"access using range based loop and auto keyword"<<endl;
    for(auto &value: vp)
        {
            cout<<value.first<<" "<<value.second<<endl;
        }
    cout<<endl;
    
    
}