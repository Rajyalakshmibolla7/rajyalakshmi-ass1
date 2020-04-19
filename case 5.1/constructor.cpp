/*File Name     :v.destructor.cc
  Author Name   :Rajyalakshmi
  Created Date  :19-04-2020
  Description   :To know the order of constructors and destructors with and with virtual
  Requirements  :#include<iostream>,#include<string.h>*/

#include<iostream>
#include<string.h>   
using namespace std; 
  //creating class
class base { 
  public: 
    base()      
    { 
	cout<<"Constructing base \n"; 
	} 
    ~base() 
    { 
	cout<<"Destructing base \n";
	 }  
}; 
  //inherited from base class
class derived: public base { 
  public: 
    derived()      
    { 
	cout<<"Constructing derived \n";
	 } 
    ~derived() 
    { 
	cout<<"Destructing derived \n";
	 } 
}; 
  
 int main(int argc,char* argv[])
{
        if((argc==2)&&strcmp(argv[1],"-h")==0)    //created a help command
        {
            cout<<"Used to know the order of constructors and destructors, no need to give any input"<<endl;
        }
else
 {
  derived *d = new derived();   
  base *b = d; 
  delete b; 
  getchar(); 
  return 0; 
} }
