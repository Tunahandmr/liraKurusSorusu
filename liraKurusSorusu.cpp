#include <iostream>
using namespace std;

class para {
public:
	double liraDegeri;
	int ellikrs, yirmibeskrs, onkrs, beskrs, birkrs;

	void liraAta() {
		cout << "para miktarini lira olarak giriniz : ";
		cin >> liraDegeri;
		cout << liraDegeri << " lira:"<<endl;
	}

	void donustur() {
		ellikrs = (liraDegeri * 100) / 50;
		liraDegeri = (liraDegeri * 100) - (ellikrs * 50);
		yirmibeskrs = liraDegeri / 25;
		liraDegeri = liraDegeri - (yirmibeskrs * 25);
		onkrs = liraDegeri / 10;
		liraDegeri = liraDegeri - (onkrs * 10);
		beskrs = liraDegeri / 5;
		liraDegeri = liraDegeri - (beskrs * 5);
        birkrs = liraDegeri / 1;
		liraDegeri = liraDegeri - (birkrs * 1);
		
		
	}

	void yaz() {
		cout << ellikrs << " 50 kurus,"<<endl;
		cout << yirmibeskrs << " 25 kurus,"<<endl;
		cout << onkrs << " 10 kurus,"<<endl;
		cout << beskrs << " 5 kurus,"<<endl;
		cout << birkrs << " 1 kurus,";


	}
};



int main()
{

	para para;
	para.liraAta();
	para.donustur();
	para.yaz();


}
