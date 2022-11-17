/*Bai 1:
#include<iostream>
#include<cmath>
using namespace std;
class DT{
	int bac;
	double *hs;
public:
	DT(){
		bac = 0;
		hs = NULL;
	}
	~DT(){ delete hs;}
	void nhap(){
		cout<<"Nhap da thuc bac: ";cin>>bac;
		hs = new double[bac+1];
		for(int i = 0; i< bac ; i++){
			cin>>hs[i];
		}
	}
	void xuaths(){
		for(int i = 0 ; i< bac ; i++){
			cout<< hs[i] <<" ";
		}
	}
	void xuat(){
		cout<<hs[0];
		for(int i = 1; i< bac ;i++){
			cout<<" + "<<hs[i]<<"x^"<<i;
		}
	}
	int getbac(){
		return bac;
	}	
	double geths(int i){ return hs[i];}
};
double tinh(DT a, double d1, double d2){
	double tong = 0;
	for(int i = 0; i< a.getbac(); i++){
		tong += ((a.geths(i) * pow( d1, i)) + (a.geths(i) * pow( d2, i)));
	}
	return sqrt(tong);
}
int main(){
	DT a;
	a.nhap();
	a.xuaths();
	double d1,d2;
	cout<<"\nNhap d1, d2: ";cin>>d1>>d2;
	cout<<"\nS = ";
	cout<<tinh(a, d1, d2);
}*/
//Bai 2:
#include<iostream>
#include<iomanip>
using namespace std;
class Monhoc{
	string ma, ten;
	int stc;
public:
	void nhap(){
		cout<<"Nhap ma mon hoc: ";fflush(stdin);
		getline(cin, ma);
		cout<<"Nhap ten mon hoc: ";fflush(stdin);
		getline(cin, ten);
		cout<<"Nhap so tin chi: ";cin>>stc;
	}
	void xuat(){
		cout<< setw(5) << ma <<setw(20)<< ten <<setw(10) << stc <<endl;
	}
	string getma(){return ma;}
	int getstc(){return stc;}
};
class DKHP{
	string msv, tensv;
	Monhoc a[100];
public:
	void nhap(){
		cout<<"Nhap ma sinh vien: ";fflush(stdin);
		getline(cin, msv);
		cout<<"Nhap ten sinh vien: ";fflush(stdin);
		getline(cin, tensv);
	}
	void xuat(){
		cout<< setw(5) << msv<<setw(20)<< tensv <<setw(10)<<endl;
	}
	string getmsv(){return msv;}
	string gettensv(){return tensv;}
	
};
int gettong(int sm, Monhoc a[]){
		int tong = 0;
		for(int i = 0; i< sm; i++){
			tong += a[i].getstc();
		}
		return tong;
	}
int dem(int sm, Monhoc a[], string tk){
	int dem = 0;
	for(int i = 0; i< sm; i++){
		if(a[i].getma() == tk){
		    dem++;   
			break;
		}else
		    dem = 0;
	}
}
int main(){
	Monhoc a[100];
	int m;
	cout<<"Nhap m mon hoc: ";cin>>m;
	for(int i= 0 ;i< m ; i++){
		a[i].nhap();
	}
	cout<<"----------------------DS cac mon hoc------------------\n";
	for(int i= 0 ;i< m ; i++){
		a[i].xuat();
	}
	DKHP b[100];
	int n;
	int sm;
	cout<<"Nhap so luong sinh vien:  ";cin>>n;
	for(int i = 0; i< n ; i++){
		b[i].nhap();
		cout<<"Nhap so mon hoc muon dang ki: ";cin>>sm;
		for(int i = 0; i< sm; i++)
			a[i].nhap();
	}
	cout<<"----------------------DS so sinh vien dki----------------------\n";
	for(int i = 0; i< n; i++){
		b[i].xuat();
	}
	//3,
	for(int i = 0 ; i< n; i++)
     	cout<<"So tin chi moi sinh vien "<<b[i].gettensv()<<" : "<<gettong(sm, a)<<" tin chi"<<endl;
    //4, 	
    string mmh;
    cout<<"Nhap ma mon hoc: ";fflush(stdin);
    getline(cin, mmh);
    int d = 0;
    for(int i = 0 ;i < n; i++){
    	if(a[i].getma() == mmh)
    	    d += dem(sm, a, mmh);
	}
	cout<<"\n "<<mmh <<" : "<<dem;
}

