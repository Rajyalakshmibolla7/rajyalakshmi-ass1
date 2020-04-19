/*File Name     :access specifiers.cc
  Author Name   :Rajya lakshmi
  Created Date  :18-04-2020
  Description   :To know the purpose and difference between public,private and protected access specifiers
  Requirements  :#include<iostream>,#include<stdio.h>,#include<string.h>*/

#include<iostream> 
#include<string.h>
using namespace std; 
// base class 
class Parent 
{    
    // protected data members 
    protected: 
    int id_protected;
    // private data members
	private:
	int id1_private; 
	void getparent()
    {
    	cout<<"enter the private id"<<endl;
    	cin>>id1_private;
	}
	public:
	void putparent()
    {
    	getparent();
	}
}; 
// sub class or derived class 
class Child : protected Parent 
{    
    public: 
    void setId(int id) 
    {
        // Child class is able to access the inherited  
        // protected data members of base class 
        id_protected=id;   
    }
    
    void displayId() 
    { 
        cout<<"id_protected is:"<<id_protected<<endl;
    }  
}; 
int main(int argc,char* argv[])
 { 
        if((argc==2)&&strcmp(argv[1],"-h")==0)    //created a help command
        {
            cout<<"enter the input to the private mem "<<endl;
        }
    else
    {
    Child obj1; 
    Parent obj2;
     // access the protected data members of the base class 
    obj1.setId(81); 
    obj1.displayId(); 
    obj2.putparent();
    return 0; 
}
}
