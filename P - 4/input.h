using namespace std;
class Input {
	public:
  		void pilihan();
    	void cetak();
      
    	void toFile(){
        	ofstream tulis_data;
       		tulis_data.open("data.txt");
       		tulis_data << saku << endl;
       		tulis_data << bulan;
       		tulis_data.close();
   		}
   	
  	private:
   		int saku,bulan,uang,tabung,t_tabungan,t_keluar;
};

void Input::cetak(){
	cout<<"==========================================="<<endl;
    cout<<"\t\tCek Tabungan "<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Masukan uang saku bulanan\t\t: "; 
	cin >> saku;
    cout<<"Masukan bulan\t\t: "; 
	cin >> bulan;
}
