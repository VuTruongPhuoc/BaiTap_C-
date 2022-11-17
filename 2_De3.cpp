/*#include <iostream>
#include<cmath>
using namespace std;
class Dayso{
private:
	int n;
	int *a;
public:
	Dayso()
	{
		int n = 0;
		a = NULL;
	}
	friend istream& operator>>(istream& is, Dayso &p)
	{
		cout<<"Nhap so phan tu n: ";cin>>p.n;
		p.a = new int[p.n +1];
	    for(int i = 0; i< p.n; i++){
	    	is>>p.a[i];
		}
		return is;		
	}
	friend ostream& operator<<(ostream& os, Dayso p)
	{
		for(int i = 0; i< p.n; i++){
			os<<p.a[i]<<" ";
		}
		return os;
	}
	int getn(){return n;}
	int geta(int i){return a[i];}
};
double tbc(Dayso a)
{
	double tong = 0;
	for(int i = 0; i< a.getn(); i++){
		if(a.geta(i) > 0)
		    tong += a.geta(i);
	}
	return double(tong/a.getn());
}
bool ktra(int k)
{
	int ketqua = (int)sqrt(k * 1.0);
	if(ketqua * ketqua == k)
	{
		return true;
	}
	return false;
}
int dem(Dayso a)
{
	int dem = 0;
	for(int i = 0; i< a.getn(); i++){
		if(ktra(a.geta(i)) == true){
			dem++;
		}
	}
	return dem;
}
int main(){
	Dayso b;
	cin>>b;
	cout<<"Day so vua nhap: ";
	cout<<b;
	cout<<endl<<"TBC cac phan tu co gia tri duong: "<<tbc(b);
	cout<<endl<<"So phan tu trong day la so chinh phuong: "<<dem(b);
}*/
//Bai 2:
#include<iostream>
#include<iomanip>
using namespace std;
class Xe{
	string bs;
	double tl;
public:
	void nhap(){
		cin.ignore();
		cout<<"Nhap bien so xe: ";
		getline(cin, bs);
		cout<<"Nhap trong luong xe: ";cin>>tl;
	}
	void xuat(){
		cout<<"\nBien so xe: "<<bs<<endl;
		cout<<"Trong luong xe: "<<tl<<endl;
	}
	string getbs(){return bs;}
	double gettl(){return tl;}
};
class Xebus:public Xe{
	int cho;
public:
	void nhap(){
		Xe::nhap();
		cout<<"Nhap so cho ngoi: ";cin>>cho;
	}
	void xuat(){
		Xe::xuat();
		cout<<"So cho ngoi: "<<cho<<endl;
	}
	int getcho(){return cho;}
};
class Xetai:public Xe{
	double tt;
public:
	public:
	void nhap(){
		Xe::nhap();
		cout<<"Nhap tai trong xe: ";cin>>tt;
	}
	void xuat(){
		Xe::xuat();
		cout<<"Tai trong xe: "<<tt<<endl;
	}
	int getcho(){return tt;}
};
int main(){
	Xebus *a;
	int n;
	cout<<"Nhap so xe buyt: ";cin>>n;
	a = new Xebus[n+1];
	for(int i = 0; i< n; i++){
		a[i].nhap();
	}
	cout<<"\n----------------DS xe bus------------------";
	for(int i = 0; i< n; i++){
		a[i].xuat();
	}
	
	Xetai *b;
	int m;
	cout<<"\nNhap so xe tai: ";cin>>m;
	b = new Xetai[m+1];
	for(int i = 0; i< m; i++){
		b[i].nhap();
	}
	cout<<"----------------DS xe tai------------------";
	for(int i = 0; i< m; i++){
		b[i].xuat();
	}
	//2,
	Xetai tg;
	cout<<"Danh sach xe tai co trong luong lon nhat: ";
	for(int i = 0; i< m-1 ; i++){
		for(int j = i+1; j < m ; j++){
			if(b[i].gettl() < b[j].gettl() && b[i].gettl() < 5)
			    Xetai tg = b[i];
			    b[i] = b[j];
			    b[j] = tg;
		}
		b[i].xuat();
	}
	//3,
	string name;
	cout<<"\nNhap bien so xe can tim: ";fflush(stdin);
	getline(cin, name);
	int ok  = 0; 
	for(int i = 0; i< n +m ; i++){
		if(a[i].getbs() == name ){
			ok = 1;
			a[i].xuat();
		}
		if(b[i].getbs() == name){
			ok = 2;
			b[i].xuat();	    
		}
	}
	if(!ok)cout<<"Viet dung xe moi tim duoc !!! ok ";
	return 0;
}
