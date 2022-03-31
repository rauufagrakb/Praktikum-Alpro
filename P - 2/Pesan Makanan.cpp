#include <fstream>
#include <iostream>
using namespace std;

class Biaya {
    friend ostream& operator << (ostream&, const Biaya&);
    friend istream& operator >> (istream&, Biaya&);

    public:
        Biaya();
        void hitungHarga();
        void hitungOngkir();
        void Potongan_dan_Diskon();
        void hargaAkhir();
    private:
        int menu, jumlah, harga, ongkir, diskon, total, biaya_akhir;
        char jarak;
};

Biaya::Biaya() {
    cout << "============================\n";
    cout << "|  Menu Makanan dan Harga  |\n";
    cout << "============================\n\n";
    cout << "NB:    - Ongkir untuk jarak rumah < 3km adalah 15000, jika >= 3km adalah 25000\n";
    cout << "       - Total pembelian > 25000, potongan ongkirnya 3000.\n";
    cout << "       - Total pembelian > 50000, potongan ongkirnya 5000 dan diskon 15%.\n";
    cout << "       - Total pembelian > 150000, potongan ongkirnya 8000 dan diskon 35%.\n\n";
    cout << "1. Ayam geprek     : 21000\n";
    cout << "2. Ayam goreng     : 17000\n";
    cout << "3. Udang goreng    : 19000\n";
    cout << "4. Cumi goreng     : 20000\n";
    cout << "5. Ayam bakar      : 25000\n";
}

istream& operator >> (istream& input, Biaya& data) {
    cout << "\nPilih Menu : "; input >> data.menu;
    cout << "Jumlah     : "; input >> data.jumlah;
    cout << "Apakah jarak rumah lebih dari atau sama dengan 3KM? (y/n) : "; input >> data.jarak;
    return input;
}

void Biaya::hitungHarga() {
    switch (menu) {
        case 1: harga = 21000; break;
        case 2: harga = 17000; break;
        case 3: harga = 19000; break;
        case 4: harga = 20000; break;
        case 5: harga = 25000;
    }
    total = harga*jumlah;
}

void Biaya::hitungOngkir() {
    switch (jarak) {
        case 'y': ongkir = 25000; break;
        case 'n': ongkir = 15000;
    }
}

void Biaya::Potongan_dan_Diskon() {
    if (total > 25000 && total <= 50000) { ongkir = ongkir-3000; diskon = 0; }
    else if (total > 50000 && total <= 150000) { ongkir = ongkir-5000; diskon = total*0.15; }
    else if (total > 150000) { ongkir = ongkir-8000; diskon = total*0.35; }
}

void Biaya::hargaAkhir() {
    biaya_akhir = total + ongkir - diskon;
}

ostream& operator << (ostream& cout, const Biaya& data) {
    cout << "\n------------------------------------\n";
    cout << "|      Rincian Belanjaan Kamu      |\n";
    cout << "------------------------------------\n";
	if(data.menu == 1){
		cout<<"Menu makanan\t: Ayam Geprek"<<" X "<<data.jumlah<<endl;
	}else if(data.menu == 2){
		cout<<"Menu makanan\t: Ayam Goreng"<<" X "<<data.jumlah<<endl;
	}else if(data.menu == 3){
		cout<<"Menu makanan\t: Udang Goreng"<<" X "<<data.jumlah<<endl;
	}else if(data.menu == 4){
		cout<<"Menu makanan\t: Cumi Goreng"<<" X "<<data.jumlah<<endl;
	}else if(data.menu == 5){
		cout<<"Menu makanan\t: Ayam Bakar"<<" X "<<data.jumlah<<endl;
	}
	cout<<"Total Menu\t\t: Rp"<<data.total<<endl;
	cout<<"Total Ongkir\t: Rp"<<data.ongkir<<endl;
	cout<<"Diskon\t\t: Rp"<<data.diskon<<endl;
	cout<<"Total Bayar\t\t: Rp"<<data.biaya_akhir<<",-"<<endl;

    return cout;
}

int main() {
    Biaya makan;
    cin >> makan;
    makan.hitungHarga();
    makan.hitungOngkir();
    makan.Potongan_dan_Diskon();
    makan.hargaAkhir();
    ofstream outfile;
    outfile.open("Skrip.txt");
    outfile << makan;
    cout << endl;
    cout << makan;
    outfile.close();
    return 0;
}
