
/*#include<bits/stdc++.h>
using namespace std;
class Diem{
	private:
		double hd,td;
	public:
		Diem();
		Diem(double a, double b);
		friend istream& operator>>(istream & is, Diem &p);
		friend ostream& operator<<(ostream & os, Diem p);
		double kc(Diem p);
		
	};
	Diem::Diem()
	{
		hd = 0;
		td = 0;
	}
	Diem::Diem(double a, double b)
	{
		hd = a;
		td = b;
	}
	istream& operator>>(istream & is, Diem &p)
	{
		is>>p.hd>>p.td;
	}
	ostream& operator<<(ostream & os, Diem p)
	{
		os<<"("<<p.hd<<","<<p.td<<"),";
	}
	double Diem::kc(Diem p)
	{
		return sqrt(pow(p.hd-hd,2)+pow(p.td-td,2));
	}
int main()
{
	Diem *a, a1(1,1),a2;
	int n;
	cout<<"Nhap toa do n diem: ";cin>>n;
	a = new Diem[n+1];
	for(int i = 0 ; i < n; i++)
	{
		cin>>a[i];
	}
	cout<<"Khoang cach: "<<a1.kc(a2);
	double tong = 0;
	for(int i = 0 ; i < n; i++)
	{
		tong += a[i].kc(a2);
	}
	
	cout<<endl<<"Tong khoang cach tu tat ca cac diem den goc toa do: "<<tong;
	for(int i = 0 ; i < n-1; i++){
	    for(int j = i+1 ; j < n; j++){
	        if(a[i].kc(a2)>a[j].kc(a2)){
	            Diem tg = a[i];
	        	a[i] = a[j];
	        	a[j] = tg;
	        }
	    } 
		cout<<endl<<"Diem gan goc toa do nhat: ";
		cout<<a[0];   	
	}	          
}*/

//Cau 2
#include<bits/stdc++.h>
using namespace std;
class Toado{
private:
    double hd, td;	
public:
	double gethd(){return hd;}
	double gettd(){return td;}
	Toado();
	void nhap();
	void xuat();
	double kc();
};
Toado::Toado()
{
	hd = 0;
	td = 0;
}
void Toado::nhap()
{
	cout<<"Nhap hoanh do: ";
	cin>>hd;
	cout<<"Nhap tung do: ";
	cin>>td;
}
void Toado::xuat()
{
	cout<<"("<<hd<<","<<td<<")";
}
double Toado::kc()
{
	return sqrt(hd*hd + td*td);
}
class Diemmau: public Toado{
private:
	double mau;
	int Do, xanh, vang;
public:
	getmau(){return mau;}
	void nhap()
	{
		
		Toado::nhap();
		cout<<"Nhap mau: ";
		cin>>mau;
	}
	void xuat()
	{
		
		Toado::xuat();
		cout<<" : Mau "<<mau<<endl;
	}
};
int main()
{
	Diemmau *d;
	int n;
	cout<<"Nhap n diem: ";
	cin>>n;
	d = new Diemmau[n+1];
	for(int i = 0; i < n; i++){
		cout<<"Nhap diem thu "<<i+1<<": \n";
	    d[i].nhap();	
	}
	int Q[3] = {};
	for(int i=0; i<n; i++){
		Q[d[i].getmau()]++;
	}
	Q[1]? cout<<"\nMau 1 co so luong la: "<<Q[1] : cout<<"\nKhong co mau 1!";
	Q[2]? cout<<"\nMau 2 co so luong la: "<<Q[2] : cout<<"\nKhong co mau 2!";
	Q[3]? cout<<"\nMau 3 co so luong la: "<<Q[3] : cout<<"\nKhong co mau 3!";
	
	for(int i = 0 ; i < n-1 ; i++){
	    for(int j = i+1 ;j < n ; j ++){
	        if(d[i].kc()<d[j].kc()){
	        	Diemmau tg = d[i];
	        	d[i] = d[j];
	        	d[j] = tg;
			}
		}
	} 
	cout<<"\nDiem xa goc toa do nhat :";		
		d[0].xuat();            
	return 0;
}


