#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	
	int a,b,c,D;
	float x1,x2;
	char ulang;
	
	
	do{
		
		
	cout<<"============================="<<endl;
	cout<<"MARI KITA MENCARI AKAR PERSAMAAN KUADRAT :v"<<endl;
	cout<<"============================="<<endl;
	cout<<"Nyari yang ga ada mah susah"<<endl;
	cout<<endl;
	
	
	cout<<"FORMAT PERSAMAAN : ax^2+bx=c=0"<<endl;
	cout<<"input nilai a : ";
	cin>>a;
	cout<<"input nilai b : ";
	cin>>b;
	cout<<"input nilai c : ";
	cin>>c;
	
	cout<<endl;
	
	D=(b*b)-(4*a*c);
	cout<<"DISRIMINAN : "<<D;
	
	if(D>0){
		cout<<"(AKAR REAL DAN BERBEDA)"<<endl;
		
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		
		cout<<"x1 = "<< x1 <<endl;
		cout<<"x2 = "<< x2 <<endl;
		
	}else if(D==0){
		cout<<"(AKAR REAL DAN SAMA)"<<endl;
		
		x1=x2=(-b+sqrt(D))/(2*a);
		
		cout<<"x1 = "<< x1 <<endl;
		cout<<"x2 = "<< x2 <<endl;
		
		
	}else{
		cout<<"(AKAR TIDAK REAL/IMAJINER)"<<endl;
		
	}
	cout<<"ULANGI NGABSS (y/n)?";
	cin>>ulang;
	cout<<endl;
	
	system("cls");	
			
	}
	  while (ulang !='n');
	  cout<<"OKE SIP"<<endl;
	  cout<<"BUATAN ARYA COPAS KENA DOLAR KUNING"<<endl;
	
}
