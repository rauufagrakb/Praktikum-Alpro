using namespace std;
class outPut {
  	public :
    	void getData() {
      		ifstream infile;
     		infile.open("data.txt"); 
     		i = 0;
    		while(!infile.eof()) {
    			infile >> data [i];
				i++;          
   			}
    		infile >> t_tabung;
    	   	infile >> bulan;
    	   	infile >> t_keluar;
    	   	infile >> uang;
    	   	infile.close();
   		}
   		
   		void getData2(){
   			ifstream infile;
     		infile.open("data2.txt"); 
     		i = 0;
    		while(!infile.eof()) {
    			infile >> data [i];
				i++;          
   			}
   			infile.close();
		}
    
    	void dataOut(){
    		cout<<"==========================================="<<endl;
   			cout<<"\t\tCEK TABUNGAN"<<endl;
    		cout<<"==========================================="<<endl;
    		for(i = 0; i<bulan; i++){
    			cout<<"Pengeluaran Bulan "<<i+1<<"\t= Rp"<<data[i]<<endl;
			}
    		cout<<"\nTotal pengeluaran  "<<bulan << " bulan\t: Rp"<<t_keluar<<endl;
    		cout<<"\nTotal Tabungan sekarang\t\t: Rp"<<t_tabung<<endl;
    		cout<<"\nTotal Tabungan sekarang\t\t: Rp"<<uang<<endl;
    	}
    
  	private:
    	int data[100], i, bulan,uang,tabung,keluar,t_tabung,t_keluar;
};
