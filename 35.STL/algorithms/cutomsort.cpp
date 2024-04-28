#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// return the increasing order of both first and second element of the pair
bool cmp1(pair<int, int> a, pair<int, int> b) {
  if (a > b)
    return false;
  return true;
}

// a comparator function in which the first elecment wil  be increasing order
// and the second element will be in decreasing order if first element is same
bool cmp2(pair<int, int> a, pair<int, int> b) {
  if (a.first != b.first) {
    if (a.first > b.first)
      return false;
    else
      return true;
  } else {
    if (a.second < b.second)
      return false;
    else
      return true;
  };
}

// other way of writing comparator function
bool cmp3(pair<int, int> a, pair<int, int> b) {
  if (a.first != b.first) {
    return a.first < b.first;
  } else {
    return a.second > b.second;
  }
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  cout << "the inserted pair vector:- " << endl;

  for (int i = 0; i < n; i++) {
    cout << a[i].first << " " << a[i].second << endl;
  }
  cout << endl;

  sort(a.begin(), a.end()); // increasing order
  cout << "default sorting algo result :- " << endl;
  for (int i = 0; i < n; i++) {
    cout << a[i].first << " " << a[i].second << endl;
  }
  cout << endl;

  cout << "sorting algo result using user defined comparator1 function :- "
       << endl;
  sort(a.begin(), a.end(), cmp1);
  for (int i = 0; i < n; i++) {
    cout << a[i].first << " " << a[i].second << endl;
  }
  cout << endl;

  cout << "sorting algo result using user defined comparator2 function :- "
       << endl;
  sort(a.begin(), a.end(), cmp2);
  for (int i = 0; i < n; i++) {
    cout << a[i].first << " " << a[i].second << endl;
  }
  cout << endl;

  // not the comparator function reverse the given comparator function
  cout << "sorting algo result using user defined comparator2 function :- "
       << endl;
  sort(a.begin(), a.end(), cmp3);
  for (int i = 0; i < n; i++) {
    cout << a[i].first << " " << a[i].second << endl;
  }
  cout << endl;
}

/*smaple input
7
4 6
4 9
2 1
5 7
5 2
9 2
1 7


OUTPUT
the inserted pair vector:-
4 6
4 9
2 1
5 7
5 2
9 2
1 7

default sorting algo result :-
1 7
2 1
4 6
4 9
5 2
5 7
9 2

sorting algo result using user defined comparator1 function :-
1 7
2 1
4 6
4 9
5 2
5 7
9 2

sorting algo result using user defined comparator2 function :-
1 7
2 1
4 9
4 6
5 7
5 2
9 2

sorting algo result using user defined comparator2 function :-
1 7
2 1
4 9
4 6
5 7
5 2
9 2

*/