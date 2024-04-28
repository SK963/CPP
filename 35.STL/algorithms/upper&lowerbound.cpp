#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n = 9;
    int numbers[9] = {4,5,6,5,7,32,8,26,30}; //,ust be sorted in ascending 
    // n = sizeof(numbers)/sizeof(int);


    sort(numbers, numbers + n); 

 int *ptr = lower_bound(numbers , numbers +n, 25);
 
    cout<<"lower bound of 25 is "<<*ptr<<endl;
    ptr = lower_bound(numbers , numbers +n, 4);
    cout<<"lower bound of 4 is "<<*ptr<<endl;
 ptr = lower_bound(numbers , numbers +n, 26);
    cout<<"lower bound of 26 is "<<*ptr<<endl;
 ptr = lower_bound(numbers , numbers +n, 3);
    cout<<"lower bound of 3 is "<<*ptr<<endl;
 ptr = lower_bound(numbers , numbers +n, 5);
    cout<<"lower bound of 5 is "<<*ptr<<endl;
    ptr = lower_bound(numbers , numbers +n, 6);
    cout<<"lower bound of 6 is "<<*ptr<<endl;
    ptr = lower_bound(numbers , numbers +n, 31);
    cout<<"lower bound of 31 is "<<*ptr<<endl;


    cout<<endl;
    
    ptr = upper_bound(numbers, numbers+n ,25);
    cout<<"upper bound of 25 is "<<*ptr<<endl;
    ptr = upper_bound(numbers, numbers+n ,4);
    cout<<"upper bound of 4 is "<<*ptr<<endl;
    ptr = upper_bound(numbers, numbers+n ,26);
    cout<<"upper bound of 26 is "<<*ptr<<endl;
    ptr = upper_bound(numbers, numbers+n ,3);
    cout<<"upper bound of 3 is "<<*ptr<<endl;
    ptr = upper_bound(numbers, numbers+n ,5);
    cout<<"upper bound of 3 is "<<*ptr<<endl;
    ptr = upper_bound(numbers , numbers +n, 6);
    cout<<"upper bound of 6 is "<<*ptr<<endl;
    return 0;
}
