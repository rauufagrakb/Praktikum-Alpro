using namespace std;
class Proses {
    public:
        void getData() {
            infile.open("pesanan.txt");
            while(!infile.eof()) {
            	infile >> menu;
               	infile >> banyak;
               	infile >> jarak;
            }
    		infile.close();
        }
        void hitung() {
            if (jarak>3) ongkir = 25000;
            else ongkir = 15000;

            switch(menu) {
                case 1: harga = 21000; break;
                case 2: harga = 17000; break;
                case 3: harga = 19000; break;
                case 4: harga = 20000; break;
                case 5: harga = 25000; break;
            }
            total_beli = harga*banyak;

            if (total_beli>25000 && total_beli<=50000) {
                ongkir =ongkir- 3000;
                total_diskon = 0;
            }
            else if (total_beli>50000 && total_beli<= 150000) {
            	ongkir =ongkir- 5000;
                total_diskon = total_beli*0.15;
            }
            else {
                ongkir =ongkir- 8000;
                total_diskon = total_beli*0.35;
            }
			jumlah = total_beli + ongkir - total_diskon;
            datain.open("pesanan.txt");
            datain << menu << endl;
            datain << banyak << endl;
            datain << total_beli << endl;
            datain << ongkir << endl;
            datain << total_diskon << endl;
            datain << jumlah <<endl;
            datain << jarak << endl;
            datain.close();
        }
    private:
    	ofstream datain;
    	ifstream infile;
        int jumlah,ongkir,total_beli, harga, menu, banyak, total_diskon;
        double jarak;
};
