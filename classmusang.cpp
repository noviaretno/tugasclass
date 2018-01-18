#include <iostream>
#include <string>
using namespace std;
class jenismusang{
	private:
		string namamusang;
		string jenismakanan;
		string warnabulu;
		int panjangtubuh;
	public:
		jenismusang (string namamusang, string makanan, string warnabulu, int panjangtubuh )
		{
			jenismusang::namamusang = namamusang;
			jenismusang::jenismakanan = makanan;
			jenismusang::warnabulu = warnabulu;
			jenismusang:: panjangtubuh = panjangtubuh;
			
		
		}
		void info(void)
		{
			cout << "===================================" << endl;
			cout << "===========musang==================" <<endl;
			
			cout << "Nama Musang         : " << namamusang << endl;
			cout << "Jenis Makanan       :" <<  makanan << endl;
			cout << "Warna Bulu          :" << warnabulu << endl;
			cout << "Panjang Tubuh(m)    :" << panjangtubuh << endl;
			
			cout << endl;
		};
		};

int main(){
	jenismusang musang1("Musang Pandan", "buah buahan","Hitam ke Coklatan",1);
	jenismusang musang2("Musang Akar", "daging ayam dan serangga","Putih Ke Abu-Abuan", 1);
	
	musang1.info();
 	musang2.info();
	
	return 0;
};
