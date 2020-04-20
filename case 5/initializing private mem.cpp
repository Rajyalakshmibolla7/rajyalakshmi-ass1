/*File Name     :initializing private.cc
  Author Name   :Rajyalakshmi
  Created Date  :19-04-2020
  Description   :To know different ways to initialize private members of a class
  Requirements  :#include<iostream>,#include<string.h>*/

#include<iostream> 
#include<string.h>  
using namespace std; 
  // creating class
class Test { 
  private:     
    int inum1,inum2;  
    int inum3,inum4;
    int inum5,inum6;
	void gettest()
	{
		cout<<"enter the two numbers"<<endl;
		cin>>inum3>>inum4;
		}    
  public: 
  /*	//default constructor
    Test():inum1(10),inum2(inum1 + 10) {} 
    void print();*/
	// using functions
	void puttest()
  	{
  		gettest();
  		cout<<"num3= " <<inum3<<"num4= " <<inum4<<endl;
	  }
	  // using parameterized constructor 
    Test(int x=0 ,int y=0 ): inum5(x),inum6(y){
	}
	int getX() const{return inum5;}
	int getY() const{return inum6;}
}; 
  
/*void Test::print() 
{  
   cout<<"num1 = "<<inum1<<"num2= "<<inum2;  
} */
int main(int argc,char* argv[]) 
{   
// help command
if((argc==2)&&strcmp(argv[1],"-h")==0)      
    {
    	cout<<argv[0]<<" "<<"private initializations"<<endl;
	}
	// object creating and calling
    Test t(33,66);
   // t.print(); 
	t.puttest();
    cout<<"num5 = "<<t.getX()<<",";
    cout<<"num6 = "<<t.getY()<<endl;
    getchar(); 
    return 0;     
} 

