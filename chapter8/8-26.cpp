// This is demonstrating the usage of push_back build in function 


#include <iostream>
#include <iomanip>
// why need iomanip 
#include <vector>
 
using namespace std; 

int main()
{ const int NUM = 5; 
  vector <int> hours;
  //this vector <type> name without size!!! just an empty array 
  //So array can be dynamically decleared!!!! 
  vector <double> payRate;
  double grossPay; 
  int Num; 
  int index; 

  cout << "many empN do you have " << endl; 
  cin >>Num;  
  
  cout << "enter hour and rate" << endl; 
  
  for(index = 0; index < Num; index++) 
  {
    int tempHours; 
    double tempRate; 
  
    cout<<"hourly rate for employee # "<< index <<endl;
    cin >> tempHours; 
    hours.push_back(tempHours);

    cout<<"hourly rate for employee # "<< index <<endl;
    cin>>tempRate;
    payRate.push_back(tempRate);
  }
  
  //:w
  //cout << fixed << showpoint << setpercision(2); 
  // view them as pipe, reverse pipe 

  for( index = 0; index< NUM; index++)
  {
    cout << "The gross pay of empolyee # " << index << " is " << hours[index] * payRate[index] << endl; 
  }
return 0; 
}
/*
 * comments and notes 
 */

