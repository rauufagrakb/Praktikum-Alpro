using namespace std;
class Proses {
  	public:
  	void getData() {
    	ifstream infile;
    	infile.open("data.txt");
    	infile >> saku;
    	infile >> bulan;
    	infile.close();
  	}
  	void proses() {
    	uang =saku;
    	t_tabungan = 0;
    	t_keluar = 0;
    	int i = 1;
    	cout << "\nBulan ke:\tUang saat ini:\t\tTabungan saat ini:\n";
    	while(i<=bulan) {
      		cout << i << "\t\t\t" << uang << "\t\t\t\t" << t_tabungan << endl;
      		cout << "\t\t\t\t\t\t\t\t\tPengeluaran  = ";
      		cin >> data[i-1];
      		cout << "\t\t\t\t\t\t\t\t\tDitabung     = ";
      		cin >> tabung;
      		cout << "--------------------------------------------------------------\n";
      		t_keluar += data[i - 1];
      		t_tabungan += tabung;
      		uang -= (data[i-1]+tabung);
      		uang += saku;
      		i++;
      		cout << "\n\n";
    	}
    	uang -= saku;
  	}
  	void toFile() {
    	ofstream tofile;
    	tofile.open("data.txt");
    	for(int i = 0; i < bulan; i++){
    		tofile << data[i]<<endl;
		}
    	tofile << t_tabungan << endl;
    	tofile << bulan << endl;
    	tofile << t_keluar;	
  	}
  
 	void toPengeluaran(){
  		ofstream tofile;
    	tofile.open("data2.txt");
    	for(int i = 0; i < bulan; i++){
    		tofile << data[i]<<endl;
		}
  	}
  private:
  int data[100], saku,bulan,uang,tabung,keluar,t_tabungan,t_keluar;
};
