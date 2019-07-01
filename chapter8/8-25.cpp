#include <iostream>
#include <vector>
using std::vector; 
using std::cout;
using std::cin; 
using std::endl; 
// this program show the ranged based loop for vector 

int main()
{
  vector <int> num(5); 
  for(int &val :num)
  {
    cout << "enter the value " << endl; 
    cin >> val; 
  }
  
  for(int val : num)
  { cout << val <<endl; 
  }

return 0; 
}

/* 
 *biuld in range variable 
 range variable iterate and copy next element in array until counter the \n
 for(dataTYpe rangeVariable : array)
 {..}
 since rangeVariabel is a copy of the array element, it must be explictly passed by reference &, in order to modify original array
for (dataType &val : array)
{..}
*/
