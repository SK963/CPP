#include <iostream>
#include <vector>
using namespace std;


class student
{
    public:
    student(string name , int roll ): name(name) , roll(roll) , marks(3,0) {}
    string name;
    int roll;
    vector<int>marks;
    
};

vector<student>students;


int main()
{
    int op;
    cin>>op;
    
    
    string name;
    int roll;
    while(op != 4)
    {
        if(op == 1)
        {
            cin.ignore();
            getline(cin,name);
            cin>>roll;
            student s1(name , roll);
            students.push_back(s1);
        }
        else if(op == 2)
        {
            cin>>roll;
            bool sta = false;
            // cout<<students.size()<<endl;
            int i ;
            for (i = 0; i < students.size(); i++) 
            {
                if (students[i].roll == roll) 
                {
                    sta = true;
                    break;
                }
            }
                
                if(sta == true)    
                    cin>>students[i].marks[0]>>students[i].marks[1]>>students[i].marks[2];
                
                
                
            
        }
        else if(op == 3)
        {
            cin>>roll;
            int i = 0;
            bool stat = false;
            for(int i = 0 ; i< students.size() ; i++)
            {
                if(students[i].roll == roll)
                {
                    stat = true;
                    break;
                }
            }
            if(stat == true)
            {
                cout<<"Name: "<<students[i].name<<endl;
                cout<<"Roll Number: "<<students[i].roll<<endl;
                cout<<"Grades: "<<students[i].marks[0]<<" "<<students[i].marks[1]<<" "<<students[i].marks[2]<<endl;
            }
            else
            {
                cout<<"Student with Roll Number "<<roll<<" not found."<<endl;
            }
            
        }
        else
        {
            cout<<"Invalid Choice"<<endl;
        }
        
        cin>>op;
        
        
    }
    cout<<"Exiting the program."<<endl;
    return 0;
    
    
}

/*Sample input
1
Jane Smith
1002
2
1002
8 9 7
3
1002
4

OUTPUT
Name: Jane Smith
Roll Number: 1002
Grades: 8 9 7
Exiting the program.
*/
