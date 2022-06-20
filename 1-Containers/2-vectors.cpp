#include <iostream>
#include <vector> //library for vector

using namespace std;
int main() {
  // a vector is a dynamic array - i.e. size can be increased or decreased by pushing the elements 
  vector<int> v; // declaring vector
  cout << v.empty() << endl; //0 size vector 
  cout << v.capacity() << endl;//this gives number of elements stored

  //entering an element
  v.push_back(4); //size = capacity
  
  // cout << v.capacity()<<endl;     0 to 1
  //  cout << v.size() << endl;      0 to 1
  
  v.push_back(3); //size = capacity
  
  // cout << v.capacity()<<endl;       1 to 2 
  // //  cout << v.size() << endl;     1 to 2
  
  v.push_back(2); //capacity doubles and size < capacity
  // cout <<"capacity = " << v.capacity()<<endl; 2 to 4 
  //  cout <<"size = "<< v.size()  << endl;      2 to 3

  v.push_back(1); // capactiy remains same till size = capacity
  // cout <<"capacity = " << v.capacity()<<endl;     4
  //  cout <<"size = "<< v.size()  << endl;        3 to 4
 
  v.push_back(0); // since size = capacity, therefore, capacity doubles
  // cout <<"capacity = " << v.capacity()<<endl; //4*2 =8
  //  cout <<"size = "<< v.size()  << endl; //4 to 5
  
  
  
  for (int i=0; i<v.size() ; i++){
    cout << v.at(i)<<endl;} //v.at(i) is used for getting the value at index i

  
// getting first and last elements - front and back
    // cout<<v.front()<<endl;
    // cout << v.back() << endl;

  
 //clearing a vector
   //cout << "before clearing size = " <<v.size() << " and capacity = "<<v.capacity() << endl;
  
   //  v.clear(); //clearing all the elements in vector
  
   //  cout << "after clearing size = " <<v.size() << " and capacity = "<<v.capacity() << endl;
 // //therefore size denotes number of elements in n vector and capacity denotes the maximum number of elements a vector can hold
    // clearing a vector only changes size - capacity remains the same
    


//popback - deleting first element
  v.pop_back(); // deletes the first element only and not the element at desired index
  cout << v.at(1)<<" "<< v.at(2) <<" "<<endl; 
   cout<<"after popback size is? " <<v.size()<<endl; //popback changes size and not capacity
   cout<<"after popback capacity is? " <<v.capacity()<<endl;


  
  vector<int> v2 (5,1); //makes vector of size 5 initialising all values as 1 
  for(int i =0; i<v2.size(); i++){
    cout << v2.at(i) <<endl;
  }

cout<<endl<<"copying in another vector"<<endl;
  //copying a vector in another new vector 
  vector<int> v3(v2);
    for(int i =0; i<v3.size(); i++){
    cout << v3.at(i) <<endl;
  }

  return 0;
}