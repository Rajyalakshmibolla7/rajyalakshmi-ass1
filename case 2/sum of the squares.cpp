/*File Name   : sum of the suqares.cc
Creator Name  : Rajya lakshmi
creation Date : 16-4-2020
Aim           : To Find the sum of squares of integers
*/
#include <iostream>
#include<string.h> 
using namespace std;  
// Function calculating 
// the series 
int sumofsquares(int inum) 
{ 
    //formula for sum of the squares
    return (inum*(inum+1)*(2*inum+1))/6;     
}  
int main(int argc,char* argv[]) 
{ 
    // declaring variables
    int inum;
    // help command usage
    if((argc==2)&&strcmp(argv[1],"-h")==0)      
    {
    	cout<<argv[0]<<" "<<"can give any number as input and upto that number we can get sum of squares"<<endl;
	}
	// enter the number for the sum of squares
	cout<<"enter the n value"<<endl;
	cin>>inum;
	// checking the number is positive or not
	if(inum<=0)
	{
		cout<<"please enter the positive intergers only"<<endl;
	}
	else
	// go to the function
    cout<<sumofsquares(inum)<<endl; 
    return 0; 
} 
