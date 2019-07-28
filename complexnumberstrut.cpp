#include<iostream>
using namespace std;
//structure of real and imaginary part to addd, multiply and subtratc two complex numbers
struct complex
{
	float r;
	float i;
};
int main()
{	complex c1,c2,res;
	cout<<"ENTER COMPLEX NUMBER 1st";
	cout<<"REAL PART :";
	cin>>c1.r;
	cout<<"IMAGINARY PART: ";
	cin>>c1.i;	
	cout<<"ENTER COMPLEX NUMBER 2nd";
	cout<<"REAL PART :";
	cin>>c2.r;
	cout<<"IMAGINARY PART: ";
	cin>>c2.i;	
	int c;
	do{
	
	cout<<"ENTER CHOICE \n 1.ADD \n 2.SUBTRACT \n 3.MULTIPLY \n 0.EXIT" ;
	cin>>c;
	switch(c){
	
		case 1:{
			res.r=c1.r+c2.r;
			res.i=c1.i+c2.i;
			cout<<"add IS : "<<res.r<<"+"<<res.i;
			break;
		}
		case 2:{
			res.r=c1.r-c2.r;
			res.i=c1.i-c2.i;
			cout<<"sub IS : "<<res.r<<"+"<<res.i;
			break;
		}
		case 3:{
			res.r=(c1.r*c2.r)-(c1.i*c2.i);
			res.i=(c1.r*c2.i)+(c1.i*c2.r);
			cout<<"mul IS : "<<res.r<<"+"<<res.i;
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default:{
			cout<<"ENTER A VALID CHOICE";
			break;
		}
	}
	}while(c!=0);
}









