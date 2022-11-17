
//Bai 2:
#include<iostream>
#include<string>
#define ll long long
using namespace std;
class Hang{
private:
	string mh, th;
	int sl;
	long long dg;
public:
	void nhap(){
		cout<<"Nhap ma hang: ";fflush(stdin);
		getline(cin, mh);
		cout<<"Nhap ten hang: ";fflush(stdin);
		getline(cin, th);
		cout<<"Nhap so luong: ";cin>>sl;
		cout<<"Nhap don gia: ";cin>>dg;
	}
	void xuat(){
		cout<<"Ma hang: "<<mh<<endl;
		cout<<"Ten hang: "<<th<<endl;
		cout<<"So luong: "<<sl<<endl;
		cout<<"Don gia: "<<dg<<endl;
	}
	string getmh(){return mh;}
	string getth(){return th;}
	int getdg(){return dg;}
};
class MayGiat:public Hang{
    double can;
public:
	void nhap(){
			Hang::nhap();
			cout<<"So can: ";cin>>can;
	}
	void xuat(){
		    Hang::xuat();
		    cout<<"So can: "<<can;
	}
	double getcan(){return can;}
	
};
int main()
{
	MayGiat *a;
	int n; 
	cout<<"Nhap n: ";cin>>n;
	a = new MayGiat[n+1];
	for(int i = 0 ; i< n; i++)
	    a[i].nhap();
	cout<<"------------------DS hang----------------------";
	for(int i = 0 ; i< n; i++)
	    a[i].xuat();
	
	string x;
	int ok = 0;
	cout<<"\nNhap hang can tim: ";fflush(stdin);
	getline(cin, x);
	for(int i = 0; i<n; i++){
		if(a[i].getmh() == x || a[i].getth() == x){
			ok = 1;
			a[i].xuat();
		}			    
	}
	if(!ok)cout<<"\nDeo co ma tim ok!!\n";
	int min = a[0].getdg();
	for(int i = 0; i< n ; i++){
	    if(min > a[i].getdg() && a[i].getcan() > 6)
	        min = a[i].getdg();
	}
	cout<<"\nDanh sach c�c may giat loai tu 6 kg tro l�n m� c� gi� re nhat.\n";
	for(int i = 0; i< n ;i++){
		if(a[i].getdg() == min && a[i].getcan() > 6)
		    a[i].xuat();
	}
}    

