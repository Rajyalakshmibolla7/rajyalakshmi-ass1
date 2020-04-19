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
	public:
	void setId1(int Id1)
    {
    	id1_private=Id1;
	}
	void displayId1()
    {
    	cout<<"id_private is:"<<id1_private<<endl;	
	}
}; 
// sub class or derived class 
class Child : public Parent 
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
            cout<<"observe the differences "<<endl;
        }
    else
    {
    Child obj1,obj2; 
     // access the protected data members of the base class 
    obj1.setId(81); 
    obj1.displayId(); 
    obj2.setId1(77);
    obj2.displayId1();
    return 0; 
}
}
