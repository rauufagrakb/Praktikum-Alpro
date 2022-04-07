#include <iostream>
#include <fstream>
using namespace std;

class Output{
	friend ostream& operator<<(ostream&, const Output&);
 	public :
  		void getData(){
  			ifstream infile;
     			infile.open("pesanan.txt");
        		index = 0;   
    			while(!infile.eof()) {
            			infile >> data[index];
               			index = index +1;
            		}
       			infile.close();  
		}
  	private :
      		int data[100], index;
};

ostream& operator<<(ostream& cout, const Output& keluar){
	cout << "\n------------------------------------\n";
   	cout << "|      Rincian Belanjaan Kamu      |\n";
    	cout << "------------------------------------\n";
	    
	if(keluar.data[0] == 1){
	 	cout<<"Menu makanan\t: Ayam Geprek"<<" X "<<keluar.data[1]<<endl;
 	}else if(keluar.data[0] == 2){
	 	cout<<"Menu makanan\t: Ayam Goreng"<<" X "<<keluar.data[1]<<endl;
	}else if(keluar.data[0] == 3){
	 	cout<<"Menu makanan\t: Udang Goreng"<<" X "<<keluar.data[1]<<endl;
	}else if(keluar.data[0] == 4){
	 	cout<<"Menu makanan\t: Cumi Goreng"<<" X "<<keluar.data[1]<<endl;
	}else if(keluar.data[0] == 5){
	 	cout<<"Menu makanan\t: Ayam Bakar"<<" X "<<keluar.data[1]<<endl;
	}
	cout<<"Total Menu\t\t: Rp"<<keluar.data[2]<<",-"<<endl;
	cout<<"Total Ongkir\t: Rp"<<keluar.data[3]<<",-"<<endl;
	cout<<"Diskon\t\t: -Rp"<<keluar.data[4]<<",-"<<endl;
	cout<<"Total Bayar\t\t: Rp"<<keluar.data[5]<<",-"<<endl;
	cout<<"Jarak Rumah\t\t: "<<keluar.data[6]<<" km"<<endl;

	return cout;	
}	
