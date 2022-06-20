#include <iostream>
#include <queue>

using namespace std;
int main(){
//FIFO concept
//we can not directly go at an element, therefore q.at(i) will not work

queue<char> q;
q.push('e'); //i = 0
q.push('d'); //i = 1
q.push('c'); //i = 2
q.push('b'); //i = 3
q.push('a'); //i = 4
 cout << q.front() <<endl; //for accessing 1st element


    return 0;
}