
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include <bits/stdc++.h>


using namespace std;

struct student
{
    int roll ;
    char name[20];
    int marks;
};

int main()
{
    int num;
    int i;
    cout<< "enter the number of records you want to enter:- ";
    cin >> num;
    struct student s[10];
    for (i = 0 ; i< num ; i++)
    {
        cout<<"enter the details of s[ " << i << "] student endl " <<endl ;
        cout << "enter s["<< i+1 << "] roll no:-";
        cin >> s[i].roll;
        cout << "enter s["<< i+1 << "] name:-";
        cin >> s[i].name;
        cout << "enter s["<< i+1 << "] marks:-";
        cin >> s[i].marks;
    }
    
    cout<<"Details of " << num << " studets " << endl;
    for(i=0 ; i< num ; i++)
    {
        cout <<"Details of [" << i+1 << "] student " <<endl ;
        cout << " s["<< i+1 << "] roll no:-";
        cout << s[i].roll <<endl;
        cout << "s["<< i+1 << "] name:-";
        cout << s[i].name << endl;
        cout << "s["<< i+1 << "] marks:-";
        cout << s[i].marks <<endl;
    }
}
