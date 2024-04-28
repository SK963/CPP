#include <iostream>
using namespace std;

class student{

private:
string name;
int age;
public:
void setdata(string a , int b)
{
    name = a;
    age  =b;
    
}

void seedata()
{
    cout<<name<<" "<<age<<endl; 
}
};


int main()
{
    pair <string ,int> p;
    pair <string, int>p0;
    pair <string , int>p1;
    
    pair <string , string> p2;
    pair <int , student> p4;
    // insertion
    p = make_pair("Rahul", 16); // make pair function
    p0 = {"shubham", 20};
    p1 = p0;
    
    // curly brackets
    student s1;
    s1.setdata("shubham", 20);
    p4 = make_pair(1, s1);

    //accessing elements of the pair
    student s2 = p4.second;
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p0.first<<" "<<p0.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p4.first<<" ";s2.seedata();

    //comparision of pairs 
}