#include <iostream>
#include <set>

using namespace std;

void print(set<string> &s) // passing reference do not create a copy and even can make change inside 
{
     cout<<"{";
    for(string value :s)
        {
            cout<<value<<",";
        }cout<<"}"<<endl;
}

int main()
{
    set<string> s;
    // insertion
    s.insert("abc"); // O(log(n))
    s.insert("bcd"); 
    s.insert("cde");
    s.insert("def");
    s.insert("efg");
    s.insert("fgh");


    

    //printing set
    // using iterators 
    cout<<"{";
    for(auto it = s.begin(); it != s.end() ; it++)
        {
            cout<<(*it)<<",";
        }cout<<"}"<<endl;
    //iterator and range based loop
    print(s);

    //find function
    auto it = s.find("abc") ; //auto can be changed as set<int>::iterator it;
    //return pointer to the set element if exist else return the end iterator of the set
    
    if(it != s.end())
    {
        cout<<"the searched element is :- "<<(*it)<<endl;
    }
    else{
        cout<<"no such element found in the set"<<endl;
    }

    s.insert("abc") ;//no duplicates are stored 
    print(s);

    //erase 
    s.erase("bcd");
    cout<<"the set after deleting \"bcd\""<<endl;
    print(s);

    auto r = s.find("cde");
    s.erase(r);
    cout<<"the set after deleting \"cde\" "<<endl;
    print(s);
        
    
   

    

    
}