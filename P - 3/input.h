using namespace std;
class Menu {
    public:
        Menu() {
            cout << "Menu Makanan dan Harganya\n";
            cout << "1. Ayam geprek     : 21000\n";
            cout << "2. Ayam goreng     : 17000\n";
            cout << "3. Udang goreng    : 19000\n";
            cout << "4. Cumi goreng     : 20000\n";
            cout << "5. Ayam bakar      : 25000 \n";
        }
        void inputData() {
            cout << "Pilih menu : ";
            cin >> menu;
            
            cout << "Jumlah     : ";
            cin >> jumlah;
            
            cout << "Jarak rumah: ";
            cin >> jarak;
            
            datain.open("pesanan.txt");
            datain << menu << endl;
            datain << jumlah << endl;
            datain << jarak;
            datain.close();
        }
    private:
    	ofstream datain;
        int menu,jumlah;
        double jarak;
        char opsi;
};
