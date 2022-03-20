#include<iostream>
using namespace std;
int main(){
	int harga1,harga2,op;
	cout<<"Masukkan harga 1 : ";
	cin>>harga1;
	cout<<"masukkan harga 2 : ";
	cin>>harga2;
	cout<<"K A L K U L A T O R";
	cout<<endl;
	cout<<"1. Pertambahan(+)"<<endl;
	cout<<"2. Pengurangan(-)"<<endl;
	cout<<"3. Perkalian  (x)"<<endl;
	cout<<"4. Pembagian  (:)"<<endl;
	cout<<"Pilih operasi yang diinginkan : ";
	cin>>op;
	
	if (op==1){
		cout<<"Hasil Pertambahan dari <<harga1<< + <<harga2<< adalah : "<<harga1+harga2;
	}else if(op==2){
		cout<<"Hasil Pengurangan dari <<harga1<< - <<harga2<< adalah : "<<harga1-harga2;
	}else if(op==3){
		cout<<"Hasil Perkalian dari <<harga1<< x <<harga2<< adalah : "<<harga1*harga2;
	}else{
		cout<<"Hasil Pembagian dari <<harga1<< : <<harga2<< adalah : "<<harga1/harga2;
	}
}
