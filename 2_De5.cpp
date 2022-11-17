/*
#include<iostream>
using namespace std;
class DT{
	int bac;
	double *hs;
public:
	Dt(){
		bac = 0;
		hs = NULL;
	}
	void nhap(){
		cout<<"Nhap bac da thuc: ";cin>>bac;
		hs = new double[bac+1];
		for(int i = 0; i< bac; i++){
			cin>>hs[i];
		}
	}
	void xuat(){
		for(int i = 0; i< bac ;i ++){
			cout<<hs[i]<<" ";
		}
	}
	DT tong(DT p){
		DT t;
		t.bac = p.bac;
		t.hs = new double[t.bac +1];
		for(int i = 0; i< t.bac; i++){
			t.hs[i] = hs[i] + p.hs[i];
		}
		return t;
	}
};
int main(){
	DT a,b, s;
	a.nhap();
	b.nhap();
	s = a.tong(b);
	s.xuat();
}*/
//Bai 2: 
#include<iostream>
#define ll long long
class Hang{
	string mh,th;
	int sl;
	long long dg;
public:
	Hang(){}
	void nhap(){
		cout<<"Nhap ma hang: ";fflush(stdin);
		getline(cin, mh);
		cout<<"Nhap ten hang: ";fflush(stdin);
		getline(cin, th);
		cout<<"Nhap sl: ";cin>>sl;
		cout<<"Nhap don gia: ";cin>>dg;
	}
	void xuat(){
		cout<<setw(7)<<mh<<setw(15)<<th<<setw(5)<<sl<<setw(13)<<dg<<endl;		
	}
};

