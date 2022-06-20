// #include <iostream>
// #include <array> //include this lubrary for stl

// using namespace std;
// int main(){
  
// //basic way to create arrays
//   int a[3] = {1,2,3};
//   int asize = a.size();//arrname.size is used only in STL and nowhere else
//   cout<<asize<<endl<<endl;

//   //declaring array from stl
//   array <int,4> arr = {1,2,3,4}; //declaration
//   int size = arr.size(); //checking size of array
//   for (int i = 0; i<size; i++){
//     cout << arr[i] <<" ";
//   }
//   cout<<endl<<endl<<endl;

//   //finding array at ith index
//   cout << "array at 3rd index " <<arr.at(3)<<endl;

//   //we can check if the array is empty or not - it gives us bool(0 - false ; 1 -true)

//   //non empty array
// cout << "not empty array " << arr.empty()<<endl; //not empty
//   //if a static array has size>0 it can never be empty, if the elements arent given any value a garbage value or maybe 0 can be initialised.

//   //empty array - size 0;
//   array <int,0> arr2; //0 size array is an empty array.
//   for(int i =0; i<5; i++){
//     cout<<arr2.at(i)<<endl;
//   }
//   cout<<"empty array "<<arr2.empty()<<endl; 
// }