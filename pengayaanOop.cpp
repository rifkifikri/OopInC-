#include <iostream>
using namespace std;

class Mobil{
    public ://acces modifier
    int harga;
    string name="Toyota";
    void namaToko() {//default atau tanpa modifier
	
		cout<<"SRIKANDI MOTOR\n";
	}
     void mobil() {
		cout<<" Mobil 1\n";
	}
	
	int setHarga(int harganya) {
        harga = harganya;
		return harga;
	}

    void jenis() {
		cout<<"Jenis :" <<name+" Pajero\n";
	}
	void beban() {
		cout<<"\nBerat body : "<<"360 kg\n";
	}
};

class Alphard :public Mobil{//cara inheritance dalam c++
    public:         //acces modifier
    void mobil() {
		cout<<" Mobil 2\n";
	}
	
    void jenis() {
		cout<<"Jenis :" <<name+" Alphard\n";
	}
	void beban() {
		cout<<"\nBerat body : "<<"350 kg\n";
	}
};

int main (){
    Mobil mobil;//ini yang dinamakan object dalam c++

    mobil.namaToko();
    mobil.mobil();
    mobil.jenis();
    cout<<"Harga mulai : Rp" <<mobil.setHarga(250000000);
    mobil.beban();

    Alphard alphard;//ini yang dinamakan object dalam c++

    alphard.namaToko();
    alphard.mobil();
    alphard.jenis ();
    cout<<"Harga mulai : Rp" <<alphard.setHarga(400000000);
    alphard.beban();
    return 0;
}