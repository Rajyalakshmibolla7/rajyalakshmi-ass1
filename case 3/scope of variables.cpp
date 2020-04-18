 /*File Name     :scope of variables.cc
  Author Name   :Rajyalakshmi
  Created Date  :17-04-2020
  Description   :To know the uses of variable scope and storage classes
  Requirements  :#include<iostream>,#include<string.h*/

#include <iostream> 
#include<string.h>
using namespace std;
// Global decleration  
int inum=0;

int sum(int n1, int n2)
{
	//declaration of auto(local) variable
	auto int summation;        
	summation=n1+n2;
	return summation;
}
void registerStorageClass() 
{ 
    cout << "Demonstrating register class\n"; 
    // declaring a register variable 
    register char cstat = 'G'; 
    // printing the register variable 'b' 
    cout << "Value of the variable 'cstat'"
         << " declared as register: " << cstat<<endl; 
} 
	// Function containing static variables 
	// memory is retained during execution 
	int staticFun() 
	{ 
    	cout << "For static variables: "; 
    	static int icount = 0; 
    	icount++; 
    	return icount; 
	} 
	// Function containing non-static variables 
	// memory is destroyed 	
	int nonStaticFun() 
	{ 
    	cout << "For Non-Static variables:"<<endl; 
    	int icount = 0; 
    	icount++; 
    	return icount; 
	} 
	int Modifier() 
	{
   		short int inum;           // a signed short integer
   		short unsigned int inum1;  // an unsigned short integer
   		inum1=50000;
   		inum=inum1;
   		cout <<inum<< " " <<inum1<<endl;
  } 
 int main(int argc,char* argv[])
 {
    if((argc==2)&&strcmp(argv[1],"-h")==0)    //created a help command
    {
        cout<<"Just observe the output"<<endl;
    }
    else
    {
	 	int inum1=2,inum2=3,isum;
  		isum=sum(inum1,inum2);
  		cout<< "sum is "<<isum<<endl;
    	// To demonstrate register Storage Class 
    	registerStorageClass(); 
		 // Calling the static parts 
   		cout << staticFun() << "\n"<<endl; 
    	cout << staticFun() << "\n"<<endl; 
   		 // Calling the non-static parts 
    	cout << nonStaticFun() << "\n"<<endl; 
    	cout << nonStaticFun() << "\n"<<endl; 
    	// Local decleration  
 		 int inum=10;  
 		 // when variable name is for global and local the 1st priority goes to local 
 		 //we have know the difference while print we will use scope resolution operator for global
 		cout << "Value of global num is " << ::inum<<endl; 
  		cout<< "\nValue of local num is " << inum<<endl; 
		Modifier();
    	return 0; 
	} 
}
