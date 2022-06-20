#include <iostream>
#include<algorithm> //library used to for stl algos
#include<vector>

using namespace std;
int main(){
 vector<int> v;
 v.push_back(2);
 v.push_back(3);
 v.push_back(6);
 v.push_back(8);
 v.push_back(10);

 
 cout << binary_search(v.begin() + 1,v.end() - 1,2) <<endl;
    return 0;
}