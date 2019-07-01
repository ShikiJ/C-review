// This is demonstrating the usage of vector 

#include <iostream>
#include <iomanip>
// why need iomanip 
#include <vector>
 
using namespace std; 

int main()
{ const int NUM = 5; 
  vector <int> hours(NUM);
  //this vector <type> name (size) declear a vector 
  //this tell vector is not dynamically allocated
  vector <double> payRate(NUM);
 // double grossPay; 
  cout << "enther datad for hours worked and hourly pay rate for " <<NUM <<"employees"<<endl;

  for(int i =0; i<NUM;i++)
  {
    cout<<"hour worked by employee # "<< i <<endl;
    cin>>hours[i];
    cout<<"hourly rate for employee # "<< i <<endl;
    cin>>payRate[i];
  }
  
  //:w
  //cout << fixed << showpoint << setpercision(2); 
  // view them as pipe, reverse pipe 

  for(int i = 0; i< NUM; i++)
  {
    cout << "The gross pay of empolyee # " << i << " is " << hours[i] * payRate[i] << endl; 
  }
return 0; 
}
/*
 * comments and notes 
 * 1. still don't know what is #include <imanip> is used for 
 * 2. can not pipe the cout<< fixed << showpoint << setpercision(2) to work 
 * 3. setw(7) not yet used. Maybe <iomanip> has something to do with it. 
 * 4. vector is not dynamically created so its size can not span, at least nt shown in this example. 
