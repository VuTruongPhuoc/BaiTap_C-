/* Bài 1: 
#include<iostream>
#include<cmath>
using namespace std;
class DT{
	int n;
	double *dt;
public:
	void nhap(){
		cout<<"Nhap bac da thuc: ";
		cin>>n;
	    dt = new double[n+1];
	    for(int i = 0; i<=n; i++){
	    	cout<<"Nhap he so bdtc "<<i<<" : ";
				cin>>dt[i];
		}
	}
	void xuat(){
		cout<<"Da thuc: "<<dt[0]<<" + ";
		for(int i = 1;i< n; i++)
		{
			cout<<dt[i]<<"x^"<<i<<" + ";
		}
		cout<<dt[n]<<"x^"<<n-1;
	}
	int getn(){return n;}
	double getdt(int i){return dt[i];}
};
float tinh(DT a, float x)
{
	double sum = 0;
	for(int i = 0; i<=a.getn(); i++){
		sum+= a.getdt(i)*i*pow(x,i-1);
	}
	return sum;
}
int main()
{
	DT a;
	a.nhap();
	a.xuat();
	float x;
	cout<<"\nNhap x: ";
	cin>>x;
	cout<<"Tong = "<<tinh(a,x);
}*/
//Bài 2:
#include<iostream>
#include<string>
using namespace std;
class QLH{
	string mh, ten, xx;
	int loai,soluong;
public:
	void nhap(){
		cin.ignore();
		cout<<"Nhap ma hang: ";
		fflush(stdin);
		getline(cin, mh);
		cout<<"Ten hang: ";fflush(stdin);
		getline(cin, ten);
		cout<<"Xuat xu: ";fflush(stdin);
		getline(cin, xx);
		cout<<"Loai hang: ";
		cin>>loai;
		cout<<"So luong: ";
		cin>>soluong;
	}
	void xuat(){
		cout<<"\nMa hang: "<<mh<<endl;
		cout<<"Ten hang: "<<ten<<endl;
		cout<<"Noi xuat xu: "<<xx<<endl;
		cout<<"Loai hang: "<<loai<<endl;
		cout<<"So luong: "<<soluong;
	}
	int getloai(){return loai;}
	int getsoluong(){return soluong;}
	string getten(){return ten;}
};
class Dientu: public QLH{
	int tgbh;
public: 
    void nhap(){
    	QLH::nhap();
    	cout<<"Thoi gian bao hanh: ";cin>>tgbh;
	}	
	void xuat(){
		QLH::xuat();
		cout<<"\nThoi gian bao hanh: "<<tgbh;
	}
	int gettgbh(){return tgbh;}
};
int main()
{
	Dientu *a;
	int n;
	cout<<"Nhap n mat hang dien tu: ";cin>>n;
	a = new Dientu[n + 1];
	for(int i = 0; i< n; i ++)
	{
		a[i].nhap();
	}
	int tong = 0,tong1 = 0, tong2 = 0;
	for(int i = 0; i< n; i++)
	{
		if(a[i].gettgbh() > 12 && a[i].getloai() == 1){
		    tong += a[i].getsoluong();		    
	    }
	    if(a[i].gettgbh() > 12 && a[i].getloai() == 2){
		    tong1 += a[i].getsoluong();		    
	    }
	    if(a[i].gettgbh() > 12 && a[i].getloai() == 3){
		    tong2 += a[i].getsoluong();		    
	    }
	}
	cout<<"Tong so hang loai 1: "<<tong<<endl;
	cout<<"Tong so hang loai 2: "<<tong1<<endl;
	cout<<"Tong so hang loai 3: "<<tong2<<endl;
//	map<int, int>b;
//	for(int i = 0 ; i< n; i++)
//	{
//		if(a[i].gettgbh() > 12)
//		    b[a[i].getloai()]+= a[i].getsoluong();			
//	}
//	cout<<"Thong ke cac loai mat hang co thbh > 12 thang la: \n";
//	for(int i=1; i<=3; i++)
//		if(b[i]) cout<<"Mat hang "<<i<<" : "<<b[i]<<endl;
		
	string mh;
	int ktra = 0;
	cout<<"\nNhap mat hang can tim: ";fflush(stdin);
	getline(cin, mh);
	cout<<"\n--------------DS Mat hang--------------\n";	
	for(int i = 0; i< n ; i++)
	{
		if(a[i].getten() == mh){
		    a[i].xuat();
			ktra = 1;
		}		
	}
	if(!ktra)cout<<"Khong co mat hang can tim.";
	return 0;
}
