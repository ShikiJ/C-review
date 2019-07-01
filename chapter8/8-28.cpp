// This is demonstrating the usage of push_back and pop_back fucntiuon and how they chg the size of vector 


#include <iostream>
//#include <iomanip>
// why need iomanip 
#include <vector>
 
using namespace std; 

void showValue(vector<int >);

int main()
{  vector <int> hours;

    // note here! vectot in declearation has no declared size but with vect.push_back(); one can dynamucally increase or decrease the size! 
    //
  for(int index = 0; index < 3; index++) 
  {
    int tempHours = index; 
    hours.push_back(tempHours);
  }
  
  showValue(hours);

  cout << "the size of vector after 3 push_back is " << hours.size() << endl;
  
  showValue(hours);

  cout << "now popping " << endl;
  hours.pop_back();
  cout << "the size of vector after 1 pop_back is " << hours.size() << endl;
  
  showValue(hours);

  cout << "now popping again" << endl;
  hours.pop_back();
  cout << "the size of vector after 1 pop_back is " << hours.size() << endl;



  showValue(hours);
return 0; 
}

void showValue(vector<int> vec)
{
  for(int i=0; i < vec.size(); i++)
  {
      cout << vec[i] << "  ";
      cout << endl;
  }
}
/*
 * comments and notes 
r: expected initializer before ‘vector’
vector <int> hours;
      ^~~~~~
This is due to forget { at the begin of int mian()
 */

