#include <iostream>
#include<algorithm> //library used to for stl algos
#include<vector>


//sort function here is a sort is intro sort which is a sum of 3 sorting functions ==> heap sort + quick sort + insertion sort
using namespace std;
int main(){
 vector<int> v;
 v.push_back(26);
 v.push_back(3);
 v.push_back(2);
 v.push_back(9);
 v.push_back(0);

 
 sort (v.begin(),v.end() -1); // we can define the range upto which we have to sort

 for (int i=0;i<v.size();i++){
    cout << v.at(i) <<endl;
 }

//  cout<<"capacity = " << v.capacity();
    return 0;
}