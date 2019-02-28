#include<iostream>
#include<stdlib.h>

using namespace std;

class penambahanData{
	private :
		int stock;
		
		public :
			void Pensil ();
			void Buku();
			void Penghapus ();
			
};

void penambahanData  :: Pensil (){
	int stock = 8, stockPensil, total ;
	cout<<"Masukan jumlah stock barang = "; cin>> stockPensil;
	total = stock + stockPensil;
	cout<<"Total stock pensil adalah"<<total<<endl;
}

void penambahanData :: Buku (){
	int stock = 10, stockBuku, total ;
	cout<<"Masukan jumlah stock barang = "; cin>> stockBuku;
	total = stock + stockBuku;
	cout<<"Total stock Buku adalah"<<total<<endl;
}

void penambahanData :: Penghapus (){
	int stock = 28, stockPenghapus, total ;
	cout<<"Masukan jumlah stock barang = "; cin>> stockPenghapus;
	total = stock + stockPenghapus;
	cout<<"Total stock penghapus adalah  "<<total<<endl;
}

int main (int argc, char** argv){
	int pilih;
	cout<<"No. \t Nama Barang \t Stock"<<endl;
	cout<<"1. \t Pensil  \t 8"<<endl;
	cout<<"2. \t Buku  \t\t 10"<<endl;
	cout<<"3. \t Penghapus \t 28"<<endl;
	
	cout<<"Pilih barang yag akan ditambah stock nya [1,2,3] = "; cin>>pilih;
	
	if(pilih == 1){
		penambahanData pensil;
		pensil.Pensil();
		cout<<"Terima kasih"<<endl;
		}
	if(pilih == 2){
		penambahanData buku;
		buku.Buku();
		cout<<"Terima kasih"<<endl;
		}
	if(pilih == 3){
		penambahanData penghapus;
		penghapus.Penghapus();
		cout<<"Terima kasih"<<endl;
		}
	return 0;
	system ("PAUSE");
	}

