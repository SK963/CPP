#include <iostream>
#include <set>

using namespace std;

void print(multiset<string> &s) // passing reference do not create a copy and even can make change inside 
{
     cout<<"{";
    for(string value :s)
        {
            cout<<value<<",";
        }cout<<"}"<<endl;
}

int main()
{
    multiset<string> s;
    // insertion
    s.insert("abc"); // O(log(n))
    s.insert("abc");  //duplicates are allowed
    s.insert("bcd"); 
    s.insert("bcd"); 
    s.insert("cde");
    s.insert("def");
    s.insert("efg");
    s.insert("fgh");


    

    //printing multiset
    // using iterators 
    cout<<"{";
    for(auto it = s.begin(); it != s.end() ; it++)
        {
            cout<<(*it)<<",";
        }cout<<"}"<<endl;
    //iterator and range based loop
    print(s);

    //find function
    auto it = s.find("abc") ; //auto can be changed as multiset<int>::iterator it(doubt whether set<int> or multiset<int> will be used);
    //return pointer to the first multiset element if exist else return the end iterator of the multiset
    
    if(it != s.end())
    {
        cout<<"the searched element is :- "<<(*it)<<endl;
    }
    else{
        cout<<"no such element found in the multiset"<<endl;
    }

   

    //erase 
    s.erase("abc"); // delete all the duplicates
    cout<<"the multiset after deleting \"abc\""<<endl;
    print(s);

    auto r = s.find("bcd"); // erase the first found iterator which matches
    s.erase(r);
    cout<<"the multiset after deleting \"bcd\" "<<endl;
    print(s);
        
    
   

    

    
}