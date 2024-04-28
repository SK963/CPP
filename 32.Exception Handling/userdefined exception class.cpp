#include <iostream>
#include <exception>
using namespace std;
struct MyException :public exception 
{
const char *what() const throw()
    {
        return "c++ Exception";
    }
};

int main()
{
try 
{
    throw MyException();
}
catch(MyException& e) 
    {
        cerr<<"MyException caught"<<endl;
        cerr<<e.what()<<endl;
    }
catch(exception &e)
    {
        cerr<<"other exceptions"<<endl;
    }
    return 0;
}
