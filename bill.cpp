#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
 
 class bill
 {
char name[20],adress[20],month[12];
int  Id , cnic ,no, reading ;
int date;
int payment;
int pay;
int rate;                                               //rate per reading
public:
	void info();
	void total();
	void disp();
 };
 void bill::info()
 {
 	cout<<"Enter your name"<<endl;
 	cin>>name;
 	cout<<"enter your address"<<endl;
 	cin>>adress;
 	cout<<"bill month"<<endl;
 	cin>>month;
 	cout<<"enter Account Id"<<endl;
 	cin>> Id;
 	cout<<"enter cnic"<<endl;
 	cin>>cnic;
 	cout<<"enter meter no "<<endl;
 	cin>> no;
 	cout<<"enter due date "<<endl;
 	cin>>date;
 	cout<<"enter rate per reading"<<endl;
 	cin>>rate;
 	
 }
 void bill::total()
 {
 	cout<<"enter meter reading "<<endl;
 	cin>>reading;
 	payment=rate*reading;
 	cout<<"Total Amount:"<<payment<<endl;
 	if(date>=7)
 	{
 		pay=payment+200;                                    //200 is fine 
	 }
	 cout<<"Payment after due date is :"<<pay;
 }
 void bill::disp()
 {
 		
 	cout<<"\n\n\n";
 	cout<<"\t\t********customer detail********\t\t"<<endl;
 	cout<<"\t\t Name:"<<" "<<name<<endl;
 	cout<<"\t\t Addres:"<<" "<<adress<<endl;
 	cout<<"\t\t Bill Month:"<<" "<<month<<endl;
 	cout<<"\t\t Meter no:"<<" "<<no<<endl;
 	cout<<"\t\t Due Date:"<<" "<<date<<endl;
 	cout<<"\t\t Rate per reading:"<<" "<<rate<<endl;
 	cout<<"\t\t Payment with in due date:"<<" "<<payment<<endl;
 	cout<<"\t\t Payment after due date:"<<" "<<pay;
 }
 int main()
 {
 	bill obj;
 	obj.info();
 	obj.total();
 	obj.disp();
 }
