#include<iostream>
#define maks 69
using namespace std;
class Nyet{
	public:
		nyet();
		tampil();
		inputStok();
		inputHarga();
		output();
		total();
	private:
		string data[5]={"LOGITECH","MICROSOFT","APPLE","PHILIPS","DELL"};
		int baris;
		int kolom = 3;	
		int matriks[69][69];
		int x=1;
		int tot;
};
Nyet::tampil(){
	cout<<"+==============ISI DATA=============+"<<endl;
	cout<<"|    NAMA    |   STOK   |   HARGA   |"<<endl;
	cout<<"+===================================+"<<endl;
	cout<<"|LOGITECH     [2]        [3]        |"<<endl;
	cout<<"|MICROSOFT    [5]        [6]        |"<<endl;
	cout<<"|APPLE        [8]        [9]        |"<<endl;
	cout<<"|PHILIPS      [11]       [12]       |"<<endl;
	cout<<"|DELL         [14]       [15]       |"<<endl;
	cout<<"+===================================+"<<endl;
}
Nyet::inputStok(){
	for(int i=0; i<=4; i++){
		cout<<"Masukkan Stok "<<data[i]<<" : ";
		cin>>matriks[0][i];
	}
}
Nyet::inputHarga(){
	for(int i=0; i<=4; i++){
		cout<<"Masukkan Harga "<<data[i]<<" : ";
		cin>>matriks[1][i];
	}
}
Nyet::output(){
	cout<<"+==============ISI DATA=============+"<<endl;
	cout<<"|    NAMA    |   STOK   |   HARGA   |"<<endl;
	cout<<"+===================================+"<<endl;
	for(int i=0; i<=4; i++){
		cout<<"|  ";
		cout<<data[i];
		if(i==4)
			cout<<"\t";
		for(int j=0; j<2; j++){
//			cout<<"\t   "<<matriks[i][j+1];
			if(j==1){
				cout<<"\t   "<<matriks[0][j+1]<<"\t|";
			}
			else{
				cout<<"\t   "<<matriks[i][j+1];
			}
		}
		cout<<endl;
	}
}
Nyet::total(){
	for(int i=0; i<=4; i++){
		for(int j=0; j<2; j++){
			tot+=matriks[i][2];
		}
	}
	cout<<"TOTAL : "<<tot;
}
int main(){
	Nyet aw;
	aw.tampil();
	cout<<endl;
	aw.inputStok();
	cout<<endl;
	aw.inputHarga();
	cout<<endl;
	aw.output();
	cout<<endl;
	aw.total();
}
