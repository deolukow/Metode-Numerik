#include <iostream>

using namespace std;

int main(){
	
	cout<<" Excelsis Deo Lukow "<<endl;
	cout<<" 19021106024 "<<endl;
	
	int f;
	double a,b,c,x1;
	double k,l,m,x2;
	double r,s,t,x3;
	
	cout<<endl;
	cout<<endl;
	cout<<"Masukan Nilai Matrix"<<endl;
	cout<<endl;
	
	cout<<"Masukan Nilai Baris ke-1"<<endl;
	cout<<"Koefisien Kolom 1: "; cin>> a;
	cout<<"Koefisien Kolom 2: "; cin>> b;
	cout<<"Koefisien Kolom 3: "; cin>> c;
	cout<<"Koefisien Kolom 4: "; cin>> x1;
	cout<<endl;
	
	cout<<"Masukan Nilai Baris ke-2"<<endl;
	cout<<"Koefisien Kolom 1: "; cin>> k;
	cout<<"Koefisien Kolom 2: "; cin>> l;
	cout<<"Koefisien Kolom 3: "; cin>> m;
	cout<<"Koefisien Kolom 4: "; cin>> x2;
	cout<<endl;
	
	cout<<"Masukan Nilai Baris ke-3"<<endl;
	cout<<"Koefisien Kolom 1: "; cin>> r;
	cout<<"Koefisien Kolom 2: "; cin>> s;
	cout<<"Koefisien Kolom 3: "; cin>> t;
	cout<<"Koefisien Kolom 4: "; cin>> x3;
	cout<<endl;
	cout<<endl;
	
	cout<<"Tampilkan Matrix \n";
	
	cin.get();
	
	cout << a; cout<<" "; cout<<b; cout<<" "; cout<<c; cout<<"|"; cout<<x1<<endl;
	cout << k; cout<<" "; cout<<l; cout<<" "; cout<<m; cout<<"|"; cout<<x2<<endl;
	cout << r; cout<<" "; cout<<s; cout<<" "; cout<<t; cout<<"|"; cout<<x3<<endl;
	cout<< endl;
	
	
	cout<<"masukan Metode Penyelesaian :  \n";
	cout<<"NB : 1 = Gaus Jordan \n";
	cout<<"Pilihan Anda = ";
	cin>>f;
	cout<<endl;
	cout<<endl;
	
	switch (f){
		
		case 1 :
			
			cout<<"Operasi Gaus Jordan \n";
			cout<<endl;
			
			cout<<"Matriks Awal \n";
			cout << a; cout<<" "; cout<<b; cout<<" "; cout<<c; cout<<"|"; cout<<x1<<endl;
			cout << k; cout<<" "; cout<<l; cout<<" "; cout<<m; cout<<"|"; cout<<x2<<endl;
			cout << r; cout<<" "; cout<<s; cout<<" "; cout<<t; cout<<"|"; cout<<x3<<endl;
			cout<< endl;
			
			
			
			l=l-(b/a*k);
			m=m-(c/a*k);
			x2=x2-(x1/a*k);
			k=k-(a/a*k);
			
			s=s-(b/a*r);
			t=t-(c/a*r);
			x3=x3-(x1/a*r);
			r=r-(a/a*r);
			
			cout<< endl;
			cout<< endl;
			cout << a; cout<<" "; cout<<b; cout<<" "; cout<<c; cout<<"|"; cout<<x1<<endl;
			cout << k; cout<<" "; cout<<l; cout<<" "; cout<<m; cout<<"|"; cout<<x2<<endl;
			cout << r; cout<<" "; cout<<s; cout<<" "; cout<<t; cout<<"|"; cout<<x3<<endl;
			cout<< endl;
			
			t=(m/l*s)-t;
			x3=(x2/l*s)-x3;
			s=(l/l*s)-s;
			
			x1=x1-(x2/l*b);
			a=a-(k/l*b);
			c=c-(m/l*b);
			b=b-(l/l*b);
			
			x1=x1-(x3/t*c);
			c=c-(t/t*c);
			
			x2=x2-(x3/t*m);
			m=m-(t/t*m);
			
			cout<< endl;
			cout<< endl;
			cout << a; cout<<" "; cout<<b; cout<<" "; cout<<c; cout<<"|"; cout<<x1<<endl;
			cout << k; cout<<" "; cout<<l; cout<<" "; cout<<m; cout<<"|"; cout<<x2<<endl;
			cout << r; cout<<" "; cout<<s; cout<<" "; cout<<t; cout<<"|"; cout<<x3<<endl;
			cout<< endl;
			
			x1=x1/a;
			x2=x2/l;
			x3=x3/t;
			
			cout<<"Nilai X adalah :"<<x1<<endl;
			cout<<"Nilai Y adalah :"<<x2<<endl;
			cout<<"Nilai Z adalah :"<<x3<<endl;
	}
	
	cin.get();
	return 0;
	
}
