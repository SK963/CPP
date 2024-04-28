#include <iostream>
using namespace std;
#include <unordered_map>

void print(unordered_map<int , string >student)
{
    for(auto i = student.begin() ; i != student.end() ;i++ )
        {
            cout<<i->first<<" "<<i->second<<endl;
        }
    cout<<endl;
}



int main()
{
    // - declaration without intiation of objects
    // map<int, string> student;
    unordered_map <int, string > student{{99 , "suman"} ,{98 , "kiran"}, {97 ,"simmy"} , {96 ,"sristipriya"}};
    //insertion 
    student[100] = "Shubham kumar"; // O(log(1) 
    student[101] = "Ritik kumar";
    student[102] = "Adarsh jha";
    student[103] = "pawan kumar";
    student[104]; //the key will be inserted with a empty string 
    student[103] = "ap kumar";//modify the exitsting record and do not declare a new  one as duplicates are not allowed

    //insert function
    student.insert(pair<int ,string>(105 ,"sumit shukla"));
    student.insert({106 , "anubhav"});

    //access - 
    //-- subscript operator []
    cout<<student[100]<<endl; // prints shubham kumar
    // cout<<student[90]<<endl; //will print nothing as there is no key 90
    cout<<student[102]<<endl;// will print adarsh jha;
    //-- at function
    cout<<student.at(101)<<endl; // 
    // -- insert function
    cout<<student[103]<<endl;
    // cout<<student[104]<<endl;
    cout<<student[105]<<endl;
    
    

    //iterator 
    cout<<"accessing map using user defined iterator "<<endl;
    unordered_map<int , string>::iterator p = student.begin();
    while(p!= student.end())
        {
            cout<<p->first<<" "<<p->second<<endl;
            //cout<<(*p).first<<" "<<(*p).second<<endl;
            p++;
        }
    cout<<endl;

    // using auto keyword
    cout<<"accessing map using auto declared iterator"<<endl;
    for(auto i = student.begin() ; i != student.end() ;i++ )
        {
            cout<<i->first<<" "<<i->second<<endl;
        }
    cout<<endl;
    //size function

    cout<<"the number of records in records:- "<<student.size()<<endl;
    
    auto it = student.find(100); //O(log(n))
    // find function reaturn a iterator (address)
    
    if(it == student.end())
    {
        cout<<"no value"<<endl;
    }
    else
    {
        cout<<it->first <<" "<<it->second<<endl;
    }
    cout<<endl;

    //erase function - delete a record 
    student.erase(101); //you can pass the key or the iteratror that point to the key
    student.erase(it);
    print(student);
    

    //empty function
    cout<<"is the list empty :- "<<student.empty()<<endl;

    //clear function
    student.clear();
     cout<<"is the list empty :- "<<student.empty()<<endl;
    
    
}