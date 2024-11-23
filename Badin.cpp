#include<iostream>
using namespace std;
int main(){
	int birth_date;
	string birth_week;
	int birth_month;
	int birth_year,myan_year=0;
	
	string Zartar_name[7] ={ "Binga  " , "Marana " , "Ahtun  " , "Thaike " ,
	 "Yaza   " , "Puti   " , "Adipati" };
	int Zartar_num[7];
	int remain1,remain2,i;
	
 	string Aday[7]={"sat","sun","mon","tue","wed","thur","fri"};
 	int An[7]={0,1,2,3,4,5,6};
 	int n,k=0,l;
	 
	cout<<"Enter date  : ";
	cin>>birth_date;
	cout<<"Enter month : ";
	cin>>birth_month;
	cout<<"Enter year  : ";
	cin>>birth_year;
 	cout<<"Enter Day   : ";
 	cin>>birth_week;
 	cout<<endl;

	if(birth_month<4){
		myan_year = birth_year - 639;
	}
	else if(birth_month>4){
		myan_year = birth_year - 638;
	}
	else if(birth_month==4 && birth_date<13){
		myan_year = birth_year - 639;
	}
	else if(birth_month==4 && birth_date>=13){
		myan_year = birth_year - 638;
	}
	cout<<"Myanmar Year  : "<<myan_year<<endl;
	
		remain1=myan_year%7;
	
	Zartar_num[0]=remain1;
	for(int i=1; i<7; i++){
		remain2=remain1+3;
		if(remain2>=7){
			remain2=remain2-7;
		}
		Zartar_num[i]=remain2;
		remain1=remain2;
}
	cout<<endl;
	 	
 	cout<<Zartar_name[0]<<" : "<<Zartar_num[0]<<"\n";
	cout<<Zartar_name[1]<<" : "<<Zartar_num[1]<<"\n";
	cout<<Zartar_name[2]<<" : "<<Zartar_num[2]<<"\n";
	cout<<Zartar_name[3]<<" : "<<Zartar_num[3]<<"\n";
	cout<<Zartar_name[4]<<" : "<<Zartar_num[4]<<"\n";
	cout<<Zartar_name[5]<<" : "<<Zartar_num[5]<<"\n";
	cout<<Zartar_name[6]<<" : "<<Zartar_num[6]<<"\n";
 cout<<endl<<endl;
 
 	for(int i=0; i<7;i++){
		if(Aday[i]==birth_week){
			n=i;
			k++;
		}
	}
	if(k==0){cout<<"Wrong...."<<endl;}
	
	for(int i=0;i<7;i++){
		if(n==Zartar_num[i]){
			l=i;
		}
	}
	for(int i=0;i<7;i++){
		if(l==i){
			cout<<"You are "<<Zartar_name[i]<<" ."<<"\n\n";
		}
	}
}
