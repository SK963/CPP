#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> marks{11,55,22,77,33,66,44};
    list<string> l2{"Jharkhand", "West-bengal", "Punjab", "Bihar"};

    // Iterator to list
    cout << "state list looks like:- " << endl;
    list<string>::iterator p0 = l2.begin();
    while (p0 != l2.end()) {
        cout << *p0 << endl;
        p0++;
    }
    cout << endl;

    cout << "Total states in the list is: " << l2.size() << endl;
    
    // Push back and push front functions
    l2.push_back("Odisha");
    l2.push_front("Gujarat");
    
    cout << "state list look like after adding Odisha and Gujarat:- " << endl;
    list<string>::iterator q = l2.begin();
    
    while (q != l2.end()) {
        cout << *q << endl; // 
        q++;
    }
    cout << endl;

    l2.pop_back();
    l2.pop_front();

    cout << "state list look like deleting  Odisha and Gujarat:- " << endl;
    list<string>::iterator r = l2.begin();
    
    while (r != l2.end()) {
        cout << *r << endl; 
        r++;
    }
    cout << endl;
    
    cout << "marks list look like - before sorting:- " << endl;
    list<int>::iterator s = marks.begin();
    
    while (s != marks.end()) {
        cout << *s << " "; 
        s++;
    }
    cout << endl;

    marks.sort();

    //sort function
     cout << "marks list look like after sorting :- " << endl;
    list<int>::iterator t = marks.begin();
    
    while (t != marks.end()) {
        cout << *t << " "; 
        t++;
    }
    cout << endl;

    //clear and remove function
    marks.remove(44);
    cout << "marks list look after deleting 44 :- " << endl;
    list<int>::iterator u = marks.begin();
    
    while (u != marks.end()) {
        cout << *u << " "; 
        u++;
    }
    cout << endl;

    marks.clear();
    

    


    

    return 0;
}
