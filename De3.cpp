#include<iostream>
/*Bai 1: 
#include<cmath>
using namespace std;

class HCN{
private:
	double d,r;
public:
	void nhap();
	void xuat();
	HCN(int a, int b);
	double S();
	HCN(){}
};
void HCN:: nhap(){
		cout<<"Nhap chieu dai, chieu rong hcn: ";
		cin>>d>>r;
	}
void HCN:: xuat(){
		cout<<"chieu dai: "<<d<<endl;
		cout<<"chieu rong: "<<r<<endl;		
	}
HCN::HCN(int a, int b){
		d = a;
		r = b;
	}
double HCN::S(){
		return d*r;
	}
int main()
{
	HCN *a, a1(4,5);
	int n;
	cout<<"Nhap n hcn: ";cin>>n;
	a = new HCN[n+1];
	for(int i = 0; i< n ; i++){
		a[i].nhap();
	}
	cout<<"Xuat 1 hcn: ";
	a1.xuat();
	double Tong = 0;
	double dem = 0;
	double min = a[0].S();
	for(int i = 0; i< n ; i++){
		Tong += a[i].S();
		dem++;
		min = min < a[i].S() ? min : a[i].S();
	}
	cout<<"Dien tich trung binh : "<<(Tong/dem)<<endl;
		
	for(int i = 0; i< n; i++){
	    if(a[i].S() == min){
         	cout<<"Dien tich hcn nho nhat la: \n"; 
	        a[i].xuat();
    }
    }
    return 0;
}*/
//Bai 2: 
#include<iostream>
#include<string>
using namespace std;
class Thisinh{
	string ht;
	double diem;
public:
    void nhap(){
    	
    	cout<<"Nhap ho ten: ";fflush(stdin);
    	getline(cin, ht);
    	cout<<"So diem: ";cin>>diem;
	}
	void xuat(){
		cout<<"Ho ten : "<<ht<<endl;
		cout<<"Diem : "<<diem<<endl;
	}
	int getdiem(){ return diem;}
};
class Olympic:public Thisinh{
	string t;
public:
	void nhap(){
		Thisinh::nhap();
		cout<<"Truong: ";fflush(stdin);
		getline(cin, t);
	}
	void xuat(){
		Thisinh::xuat();
		cout<<"Truong: "<<t;
	}
	string gettruong(){return t;}
};
int main(){
	Olympic *a;
	int n; 
	cout<<"Nhap so thi sinh: ";cin>>n;
	a = new Olympic[n + 1];
	for(int i = 0; i< n; i++){
		a[i].nhap();
	}
	double tong = 0,tong1 = 0, tong2 = 0;
	int d = 0, d1 = 0, d2 = 0;
	for(int i = 0; i< n; i++)
	{
		if( a[i].gettruong() == "A"){
		    tong += a[i].getdiem();
		    d++;
		}
		if( a[i].gettruong() == "B"){
		    tong1 += a[i].getdiem();
		    d1++;
	    }
		if( a[i].gettruong() == "C"){
		    tong1 += a[i].getdiem();
		    d2++;
	    }
	}
	cout<<"Tong diem truong A: "<<tong<<endl;
	cout<<"Tong diem truong B: "<<tong1<<endl;
	cout<<"Tong diem truong C: "<<tong2<<endl;
	double max = 0;
	for(int i = 0; i< n; i++)
	    if(tong2 < tong)
	        max = tong > tong1 ? tong : tong1;
		else
		    max = tong1 > tong2 ? tong1 : tong2;
	if(max == tong){
	    cout<<"Truong A co tong diem cao nhat. \n";
		}
	if(max == tong1){
	    cout<<"Truong B co tong diem cao nhat. \n";
		}
	if(max == tong2){
	    cout<<"Truong C co tong diem cao nhat. \n";
		}	
	cout<<"So luong sinh vien tham du truong A: "<<d<<endl;
	cout<<"So luong sinh vien tham du truong B: "<<d1<<endl;
	cout<<"So luong sinh vien tham du truong C: "<<d2;	
	return 0;
}
	
