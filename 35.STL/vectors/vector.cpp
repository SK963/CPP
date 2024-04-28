#include <iostream>
using namespace std;
#include <vector>


int main()
{
    vector <int > marks; //intital capacity = 0
    cout<<"current capacity:- "<<marks.capacity()<<" current size :- "<<marks.size()<<endl;
    
    //insertion 
    //capacity function
    // size function
    marks.push_back(10); //intial capacity = 1
    cout<<"current capacity:- "<<marks.capacity()<<" current size:- "<<marks.size()<<endl;
    marks.push_back(20); //intial capacity = 1
    cout<<"current capacity:- "<<marks.capacity()<<"current size:- "<<marks.size()<<endl;
    marks.push_back(30); //intial capacity = 1
     cout<<"current capacity:- "<<marks.capacity()<<"current size:- "<<marks.size()<<endl;
    marks.push_back(40); //intial capacity = 1
 cout<<"current capacity:- "<<marks.capacity()<<"current size:- "<<marks.size()<<endl;

    for(int i = 5 ; i< 10 ; i++)
        {
            marks.push_back(10*i);
        }

    cout<<"the marks look like:- ";
    //size function
    for(int i = 0 ; i< marks.size() ; i++)
        {
            cout<<marks[i]<<" "; 
        }
    
    cout<<endl;
     cout<<"current capacity:- "<<marks.capacity()<<"current size:- "<<marks.size()<<endl;
    marks.pop_back();
 cout<<"current capacity:- "<<marks.capacity()<<"current size:- "<<marks.size()<<endl;

    // at function
    cout<<"values at index 4 :- "<<marks.at(4)<<endl;

    //iterator 
    vector<int>:: iterator it = marks.begin();
    marks.insert(it+3  , 35);
    cout<<"the marks look like:- ";
    for(int i = 0 ; i< marks.size() ; i++)
        {
            cout<<marks[i]<<" "; 
        }
    
    //clear function 
    marks.clear();
     cout<<"current capacity:- "<<marks.capacity()<<"current size:- "<<marks.size()<<endl;

    
    
}
