#include<iostream>
using namespace std;
class Silah {
public:
	std::string isim;
	int mermiKapasitesi;
	std::string renk;
	virtual void atesEt() {
		std::cout << "pis pis" << endl;
	}
};

class Ak47 :public Silah {
public:
	bool seriTek;
	int kayisUzunlugu;
	bool durbun;
	void atesEt()
	{
		std::cout << "A47 ateş etti." << endl;
	}
};
class M1 :public Silah {
public:
	bool seriTek;
	int kayisUzunlugu;
	int kurmaPosizyonu;
	void atesEt()
	{
		std::cout << "M1 ateş etti." << endl;
	}
};

class Pistol :public Silah {
public:
	int kurmaKoluDeseni;
	void atesEt()
	{
		std::cout << "Pistol ateş etti." << endl;
	}
};

void atesEt(Silah* silahPtr)
{
	silahPtr->atesEt();
}
int main()
{

	//bir silah sınıfı oluşturudk ve bunun altında da bir ak47 sınıfı oluşturduk.
	//bunun altında da bir m1silver altısınıf oluşturudk. 
	//bir insna düşünün, bir yer de öğrenci, bir yer de öğretmen, bir yer de baba, bazen bir işçi, bazen bir müşteri olabilmektedir. 
	//aynı şekilde bir polimorfizm olabilir. babanızın evdeki davranış ile işteki ile davranışları farklıdır. ama evde bir babadır. 
	//bunu önce baktımk. 
	//derleme zamanı çok biçimlilik, çalışma zmanı çok biçimlilik
	//a) derleme zamanı çok biçimlillik; örneklemeye bakalım 
	Ak47 ak47;
	M1 m1;
	Pistol pistol;
	atesEt(&m1);
	atesEt(&ak47);
	atesEt(&pistol);
	//bir burada atesEt gönderidğimiz yapıyı çalışma zamanında belirlenir. 
	//hangi methodu çağrıcağını bilmiyoru. babanın rolüyle ilgili bir bilgiye sahip değildir. 
	//baba göreviyle derleyici çalışacağını düşünüyor. çalışma zamanında 
	//bir şeyin birden fazla görevde davranmasıdır. buna polimorfizm denir. virtual method yoksa polimorfizm yoktur. 
	//polimorfizm olsa bile tam anlamıyla gerçekleşmez. silah rolünde iken başka bir rolün içindeki görevi yapması gerekmektedir. 
	

	return 0;
}