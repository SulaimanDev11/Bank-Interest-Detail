#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
main ()
{
	system("color 0E");
	 int p,q,n,r, rep=1;
	float res=1,div,a,add,pwr;
	while (rep<=10){
		cout<<"Enter amount of Ruppees :";
		cin>>p;
		cout<<"Enter rate of Interest :";
		cin>>r;
		cout<<"Enter numbers of Years :";
		cin>>n;
		cout<<"How do you like the amount to be compounded in :";
		cin>>q;
		div=(r*1.0/q)/100;;	
		add=1+div;	
		pwr=n*q;
		for (int j=1; j<=pwr; j++){			
				res*=add;
			}	
		a=p*res;
		cout<<"The Final Amount after "<<n<<"Years will be : "<<a;
		if (rep<10){
			cout<<"\n\nPress Any Key To Continue Again";
		}
			getch();
			system("cls");
	
			rep++;
		}
		return 0;
} 

