
#include <iostream>
#include <deque>

using namespace std;
int main() {
  // deque - doubly ended queue - the are basicakky like vectors we can insert and delete elements from both the ends.

 deque <int> d;
 //pushback - similar to vector
 d.push_back(1);
 d.push_back(3);
 
 //inserting in the start
 d.push_front(5);
 
 for (int i =0; i <d.size(); i++ ){
     cout << d.at(i)<<" "; //accessing arr at ith index
 }

cout<<endl<<"after deleting first element" <<endl;


//deleting an element from the front
 d.pop_front();
 
 for (int i =0; i <d.size(); i++ ){
     cout << d.at(i)<<" "; //accessing arr at ith index
 }

cout << endl <<"after deleting an element from back" << endl;


//deleting and element from back
d.pop_back();
 for (int i =0; i <d.size(); i++ ){
     cout << d.at(i)<<" "; //accessing arr at ith index
 }
 cout << endl <<"empty or not" << endl;


//to check empty or not? returns in true(1)/false(0)
cout << d.empty();
cout<<endl<<"we can also delete an i'th element"<<endl;


//we can also declare char deque
deque <char> ch;
ch.push_back('a'); //a
ch.push_back('b'); //a,b
ch.push_front('c'); //c,a,b
ch.push_front('d'); //d,c,a,b
ch.push_back('e'); //d,c,a,b,e
for (int i =0; i <ch.size(); i++ ){
     cout << ch.at(i)<<" "; //accessing arr at ith index
 }
 cout<<endl <<ch.size()<<endl;

 //deleting the i'th element
 ch.erase(ch.begin() + 3);
 cout<< endl <<"printing after deleting"<<endl;
for (int j = 0; j < ch.size(); j++){
     cout << ch.at(j)<<" "; //accessing arr at ith index
 }
 cout<<endl <<ch.size()<<endl;





  return 0;
}