/*Bai 1
#include<iostream>
using namespace std;
class Dayso{
	int n;
	int * a;
public:
	Dayso(){
		n = 0;
		a = NULL;
	}
	friend istream& operator>>(istream & is, Dayso &p){
		cout<<"Nhap n: ";is>>p.n;
		p.a = new int[p.n + 1];
		for(int i = 0; i< p.n; i++){
			is>>p.a[i];
		}
		return is;
	}
	friend ostream& operator<<(ostream & os, Dayso p){
		for(int i = 0; i< p.n; i++){
			os<<p.a[i]<<" ";
		}
		return os;
	}
	double tbc()
	{
		double tong = 0;
		int dem = 0; 
		for(int i = 0 ;i< n ; i++){
			tong += a[i];
			dem++;
		}
		return tong;
	}
};
int main()
{
	Dayso b;
	cin>>b;
	cout<<"Day so vua nhap : ";
	cout<<b;
	cout<<"\nTong day so nguyen: ";
	b.tbc();
	\
	
}*/
//Bai 2
#include<iostream>
#include<string>
#define ll long long
using namespace std;
class Mathang{
	string mh;
	long long dg;
public:
	void nhap(){
		cout<<"Nhap ma hang: "; fflush(stdin);
			getline(cin,mh);
			cout<<"Nhap don gia: ";
			cin>>dg;
	}
	void xuat(){
		cout<<"Ma hang: "<<mh<<"\n";
		cout<<"Don gia: "<<dg<<"\n";
	}
	string getmh(){return mh;}
	int getdg(){return dg;}
};
class HoaDon{
	string mh, nb;
	int sl;
public:
	void nhap(){
		cout<<"Nhap ma hang: ";fflush(stdin);
		getline(cin, mh);
		cout<<"Nhap so luong: ";cin>>sl;
		cout<<"Nhap ngay ban: ";fflush(stdin);
		getline(cin, nb);
	}
	void xuat(){
		cout<<"Ma hang: "<<mh<<endl;
		cout<<"So luong: "<<sl<<endl;
		cout<<"Ngay ban: "<<nb<<endl;
	}
	string getMH(){return mh;}
	int getsl(){return sl;}
	string getnb(){return nb;}
};
int main()
{
	Mathang *a;
	int m;
	cout<<"Nhap m mat hang: ";cin>>m;
	a = new Mathang[m+1];
	for(int i = 0; i< m; i++){
		a[i].nhap();
	}
	cout<<"-----------DS MAT HANG-----------\n";
	for(int i = 0; i< m ; i++){
		a[i].xuat();
	}
	HoaDon * b;
	int n; 
	cout<<"Nhap n hoa don: ";cin>>n;
	b = new HoaDon[n+1];
	for(int i = 0; i< n; i++){
		b[i].nhap();
	}
	cout<<"-----------DS HOA DON-----------\n";
	for(int i = 0; i< m ; i++){
		b[i].xuat();
	}
	int dem = 0;
	for(int i = 0; i< n; i++){
		if(b[i].getsl() > 10)
		    dem++;
	}
	cout<<"So luong hoa don lon hon 10: "<<dem;
	string ngay;
	cout<<"\nNhap ngay : ";fflush(stdin);
	getline(cin, ngay);
	double tong = 0;
	for(int i = 0; i< m ; i++ ){
		if(b[i].getnb() == ngay)
		for(int i = 0; i< n; i++){
			if(a[i].getmh() == b[i].getMH())
		    tong += a[i].getdg()*b[i].getsl();
		}
	}
	cout<<"So tien ban duoc trong mot ngay: "<<tong;
}


