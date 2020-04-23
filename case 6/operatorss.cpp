/*File Name     :operatorss.cc
  Author Name   :Rajya lakshmi
  Created Date  :20-04-2020
  Description   :To write a Display method to display int and char variables
  Requirements  :#include<iostream>*/
  
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
//class declaration
class School
{
private:
	//declaration of variables in private 
    int *iroll_no;               
    char cName[20]; 
public:
	//default constructor
    School()   
    {
        cout<<"Default Constructor :"<<endl;
        
    }
    //parameterised constructor                                                          
     School(int *i_no,char *cname)  
    {
        cout<<"Parameterized Constructor is Invoked"<<endl;
         iroll_no=i_no;
        strcpy(cName,cname);
    }
    //copy constructor
     School(const School& ob)
    {
        strcpy(cName,ob.cName);
        //copying variables
        *iroll_no=*ob.iroll_no;
    }
    /*function name : student_Details
     parameters     : *ino,cname[]
     */
 void student_Details(int *ino,char cname[])
    {   
        iroll_no=ino;
        strcpy(cName,cname);
    }
    void display()
    {
        cout<<"ID Number :"<<*iroll_no<<endl<<"Name:"<<cName<<endl;
        cout<<endl;
    }
     //Assignment Operator Overloading
    void operator =(const School& t)
    {
        strcpy(cName,t.cName);
        *iroll_no=*t.iroll_no;
    }
    // destructor
    ~School()
    {
        cout<<"Deallocating Memory"<<endl;
       
    }
   
};
int main(int argc,char* argv[])
{
	// condition for the arguments to display -h file
    if(argc>=2) 
   {
   	if(strcmp(argv[1],"-h"))
   	        
    {
     cout<<"Usage :"<<endl;
     cout<<"Enter the integer and char variables "<<endl;
        }
    }
    else
    {
    	//object creation for class 
        School obj; 
		int iNum;
        char cNme[20];
         cout<<"Enter student roll number:";
        cin>>iNum;
        cout<<"Enter Name of the student:";
        cin>>cNme;
        obj.student_Details(&iNum,cNme);
        obj.display();
        //Parameterised Constructor
         cout<<endl<<"Using Parameterized Constructor :"<<endl;
         School obj1(&iNum,cNme);    
        obj1.display();
        //copy Constructor
        School obj2=obj;
        cout<<"After Using Copy Constructor"<<endl;
         obj2.display();
        cout<<"Assignment Operator is Invoked"<<endl;
         obj2=obj1;
         obj2.display();
         obj2=obj;
         obj2.display();
        //obj1.student_Details(&iNum,cNme);    
        //obj1.display();
        //shallow copy 
       // School obj3=b1;
        //obj1.display();
		//obj3.display(); 
	 }
    return 0;
}
