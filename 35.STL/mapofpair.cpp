#include <bits/stdc++.h>
using namespace std;


int main()
{
    map<string ,pair<int , float>> bill;
    int op;
    cin>>op;
    
    
    string item;
    int q;
    float price;
    float sum = 0;
    
    
    
    while(op != 4)
    {
        if(op == 1)
        {
            cin>>item>>q>>price;
            bill[item] = make_pair(q,price);
            
        }
        else if(op == 2)
        {
            cin>>item>>q;
            auto it = bill.find(item);
            if(it != bill.end())
            {
                // cout<<"Before changing quantity:- "<<it->second.first<<endl;
                it->second.first = q;
                // cout<<"after changing quantity:- "<<it->second.first<<endl;
            }
            else
            {
                cout<<"Item not found in the order."<<endl;
            }
        }
        else if(op == 3)
        {
            
            for(auto it = bill.begin() ; it != bill.end() ; it++)
            {
                // cout<<it->first<<" "<<" "<<it->second.first<<"*"<<it->second.second;
                sum += (it->second.first)*(it->second.second);
                // cout<<sum<<endl;
            }
            cout<<"Total Bill: $"<<sum<<endl;
        }
        else
        {
            cout<<"Invalid choice"<<endl;
        }
        
        cin>>op;
        
    }
    return 0;
}

/*INPUT 1
1
Pizza
2
12.5
1
Coke
3
2.0
2
Pizza
6
3
4

OUTPUT - Total Bill: $81
*/

/*INPUT 2
1
Burger
1
8.0
2
Pizza
2
3
7
4
OUTPUT - 
Item not found in the order.
Total Bill: $8
Invalid choice
*/

