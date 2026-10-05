//scope resolution operator and name space demo 
#include<iostream>
using namespace std;
int x=19;
namespace demo{
	int x=29;
	
}
main(){
	int x=30; 
	cout<<"global variable of x:"<<::x <<endl;
	cout<<"scope resolution variable value x:"<<x<<endl;
	cout<<"namespace variable value of x:"<<demo::x;
}