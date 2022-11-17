#include<iostream>
using namespace std;
class Thisinh{
	string ht;
	double t, l , h;
public:
	void nhap(){
		cout<<"Nhap ho ten: ";fflush(stdin);
		getline(cin, ht);
		cout<<"Nhap diem toan, ly, hoa: ";cin>>t>>l>>h;
	}
	void xuat(){
		cout<<"\nHo Ten: "<<ht<<endl;
		cout<<"Diem toan, ly, hoa: "<<t<<" "<<l<<" "<<h<<endl;
	}
	double gett(){return t;}
	double getl(){return l;}
	double geth(){return h;}
	double tongdiem(double x) {return t + l + h +x; }
};
class Uutien: public Thisinh{
	int loai;
public:
	void nhap(){
		Thisinh::nhap();
		cout<<"Loai: ";cin>>loai;
	}
	void xuat(){
		Thisinh::xuat();
		cout<<"Loai: "<<loai;
	}
	int getloai(){return loai;}	
};
int main(){
	Uutien * a;
	int n ;
	cout<<"Nhap n thi sinh: ";cin>>n;
	a = new Uutien[n + 1];
	for(int i = 0; i< n; i++){
		a[i].nhap();
	}
	cout<<"-------------DS thi sinh--------------";
	for(int i= 0; i< n; i++){
		a[i].xuat();
	}
	
	double diemchuan;
	cout<<"\nNhap diem chuan: ";cin>>diemchuan;
	int dem = 0, dem1 = 0, dem2 = 0;
	double x;
	cout<<"---------------DS thi sinh trung tuyen------------\n";
	for(int i = 0; i< n; i++){
	if(a[i].getloai() == 1){
		x = 1.5;
		a[i].tongdiem(x);
		dem++;
	}
	else if(a[i].getloai() == 2){
		x = 1.0;
		a[i].tongdiem(x);
		dem1++;
	}
	else if(a[i].getloai() == 3){
		x = 0.5;
	    a[i].tongdiem(x);
	    dem2++;
	} 
	    if(a[i].tongdiem(x) > diemchuan && a[i].gett() !=0 && a[i].getl() != 0 && a[i].geth() != 0){
		    a[i].xuat();
		    cout<<endl<<a[i].tongdiem(x);
		}
	}		
	cout<<"\nSo luong sinh vien thuoc loai 1: "<<dem;
	cout<<"\nSo luong sinh vien thuoc loai 2: "<<dem1;
	cout<<"\nSo luong sinh vien thuoc loai 3: "<<dem2;
}
