/*
a person has given t situation
in each situation it has n bags with given no of candies in each bag
and k minitues to eat in each situation in every minitue he can eat all the candies
after eating when he drops the bag magically half of the candies come back

find the maximum no of candies the person can eat in each situation.

*/


#include <iostream>
#include <set>
using namespace std;

void print(multiset<int>bags)
{
	cout<<"candies in the bags after each time candies are eaten:- "<<endl;
	for(auto value : bags)
	{
		cout<<value<<" "; 
	}
	cout<<endl;
}

int main()
{
	int t;
	cin >>t;
	while(t--)
	{
	int n ,k;
	cin>> n>> k;

	multiset<int>bags;
	for(int i = 0 ; i< n ; i++)
	{
		int candycount;
		cin>>candycount;
		bags.insert(candycount);
	}

	int eatencandies =0;

	while(k--)
	{
		auto max = bags.rbegin();
		int eat =  *max;
		eatencandies += eat;
		eat = eat/2;
		bags.erase(*max);

		bags.insert(eat);
		print(bags);

	}

	cout<<"the total eaten candies :- "<<eatencandies<<endl;

	}

	

}


/*
SAMPLE INPUT
1
5 3
2 1 7 4 2
SAMPLE OUTPUT
candies in the bags after each time candies are eaten:- 
1 2 2 3 4 
candies in the bags after each time candies are eaten:- 
1 2 2 2 3 
candies in the bags after each time candies are eaten:- 
1 1 2 2 2 
the total eaten candies :- 14

*/
