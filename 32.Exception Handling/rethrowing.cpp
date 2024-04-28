#include <iostream>
using namespace std;
void MyHandler()
{
try
{
    throw "hello";
}
catch (const char* )
{    
    cout <<"Caught exception inside MyHandler\n";
    throw; //rethrow char* out of function
}
}

int main()
{
    cout<< "Main start"<<endl;
try
{
    MyHandler();
}
catch(const char* )
{    
    cout <<"Caught exception inside Main\n";
}
cout << "Main end";

return 0;
}

/*OUTPUT
Main start
Caught exception inside MyHandler
Caught exception inside Main
Main end
*/