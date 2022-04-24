////#include<iostream>
////using namespace std;
////class Silah
////{
////public:
////	std::string isim;
////	int mermiKapasitesi;
////	std::string renk;
////
////};
////
////class A47 :public Silah {
////public:
////	 
////	bool seriTek;
////	int kayisUzunlugu;
////	bool durbun;
////	void atesEt()
////	{
////		cout << "A47" << endl;
////	}
////};
////class Pistol :public Silah
////{
////public:
////	 
////	int kurmaKoluDeseni;
////	void atesEt() {
////		cout << "Pistol" << endl;
////	}
////
////
////};
////class M1 :public Silah {
////public:
////	 
////	bool seriTek;
////	int kayaisUzunlugu;
////	int kurmaPozisyonu;
////	void atesEt()
////	{
////		cout << "m1" << endl;
////
////	}
////
////
////
////};
////void main()
////{
////	M1 m1;
////	m1.atesEt();
////	cout << "omer dogu" << endl;
////
////}
//
////#include<iostream>
////#include <string>
////using namespace std;
////class Silah
////{
////public:
////	std::string isim;
////	int mermiKapasitesi;
////	std::string renk;
////
////};
////
////class AK47 :public Silah {
////public:
////
////	bool seriTek;
////	int kayisUzunlugu;
////	bool durbun;
////	void atesEt()
////	{
////		cout << "A47" << endl;
////	}
////};
////class Pistol :public Silah
////{
////public:
////
////	int kurmaKoluDeseni;
////	void atesEt() {
////		cout << "Pistol" << endl;
////	}
////
////
////};
////class M1 :public Silah {
////public:
////
////	bool seriTek;
////	int kayaisUzunlugu;
////	int kurmaPozisyonu;
////	void atesEt()
////	{
////		cout << "m1" << endl;
////
////	}
////
////
////
////};
////void main()
////{
////	M1 m1;
////	m1.atesEt();
////	cout << "omer dogu" << endl;
////	int sayi1 = 10;
////	int& deneme = sayi1;
////	cout << deneme << endl; //10 çıkar. 
////	sayi1 = 50;
////	cout << deneme << endl;//50 ikisi de sayi1 referans ediyor. elimdizde bir veri var. birden fazla isim refere ediyor.hepsi bu kadar basittir. 
////	AK47 ak47;
////	AK47& ak47Ref = ak47; //tıpkı değişkenler gibidir. 
////	cout << "ak47&ak47Ref:"<< ak47Ref << endl;
////	ak47Ref.isim = "Ateşli Silah";
////	cout << ak47Ref.isim << endl;
////
////}
/////*
////*interger & ekleyerek referans oluşturmak mümkündür. Referans oluşturduğumuzda bir şeyi referans etmesi gerekmektedi 
////* deneme & ile bu saatten sonra sen sayi1 işaret edeceksin. denemenin başına ne gelirse sayi1 başına da gelmiş demektir. bellekte kopyaya değil asıl duruma müdahale ediyorsunzu. 
////* sayi1 ram da tutulan bir değerdir.sadece birisi refere ediyor. 
////*/
//
//#include<iostream>
//#include <string>
//using namespace std;
//class Silah
//{
//public:
//	std::string isim;
//	int mermiKapasitesi;
//	std::string renk;
//	virtual void atesEt() = 0;
//};
//
//class AK47 :public Silah {
//public:
//
//	bool seriTek;
//	int kayisUzunlugu;
//	bool durbun;
//	void atesEt()
//	{
//		cout << "A47" << endl;
//	}
//};
//class Pistol :public Silah
//{
//public:
//
//	int kurmaKoluDeseni;
//	void atesEt() {
//		cout << "Pistol" << endl;
//		this->isim = "ömer doğu pistol silahı";
//	}
//
//
//};
//class M1 :public Silah {
//public:
//
//	bool seriTek;
//	int kayaisUzunlugu;
//	int kurmaPozisyonu;
//	void atesEt()
//	{
//		cout << "m1" << endl;
//
//	}
//  
//};
//
//class Payment {
//private:
//	float tutar; 
//public: 
//	std::string paraBirimi;
//	void setTutar(float t) {
//		if (t > 0)
//		{
//			tutar = t;
//		}
//		else
//		{
//			tutar = 0.01;
//		}
//	}
//	void pay()
//	{
//		std::cout << tutar<<" Odeme alinmistir." << endl;
//	}
//
//};
//
////void main()
////{
////	/*
////	* Nesneler üzerinde pointer kullanımı: 
////	* her anımızda pointerler bulunamsını istedik. referansları sınıftan nesne oluşturduğumuzda bir bellek adresini bir pointer koymak farklı değildir. bir değişken gibidir. 
////	* bellekteki yerleşmeye bakalım. a47 oluşturulduğunda; silah sınıfından miras alıyor. ak47 nesnesi oluşunca bir tane de silah nesnesi oluşturulur. 
////	* ak47 silahı da kapsar ve daha geniş olabilr veya eşit olabilir. aşağı yukarı cast edeceğiz. 
////	* AK47 ak47;
////	*/
////	//AK47 ak47; //nesne oluşturduk. 
////	//AK47* ak47Ptr = &ak47; //pointer oluşturduk. bir bellek adresi attık.
////	 //ilkel veri bir veri türüdür.diğerinden farklı olarak kullanıcı tanımlı değildir. 
////	//std::cout << ak47Ptr << endl;// 0000000E4D90FAC0 bellek adresidir. 
////	//Referans: int & deneme gibi bir referans oluşturabiliyoruz. neyi referans ettiğimizi bilmeli ve göstermeliyiz. 
////	int sayi1 = 100;
////	int& referans1 = sayi1;
////	cout << referans1 << endl; //100
////	cout << sayi1 << endl;//100
////	referans1 = 10000;
////	cout << referans1 << endl; //10000
////	cout << sayi1 << endl;//10000
////	/*
////	00000060F0EFFA00
////	100
////	100
////	10000	
////	10000
////	*/
////	AK47 ak47;  
////	AK47& ak47Ptr = ak47;  
////	//cast bir türü diğer türe dönüştürme işlemidir. 
////	//int floata dönüştürmek gibidir. neden ihtiyaç var?Karakter türünde bir değişken olsun ve değeri 10 olsun
////	//string bir ifade olsun. bir matematiksel işlem yapamayız. önce matematiksel bir değere döndürmeliyiz. int dönüştürürsek, eksiltme bölme çoğaltma yapabiliriz. nesnenler üzerinde de dönüşümler yapabiliriz. 
////	//cast işlemine aralarında bir ilişki bulunan nesnenler birbirine dönüşebilir. 
////	//silah ile ak47 bir birine dönüşebilir. silah ak47 ye veya ak47 silaha dönüşebilinir. 
////	//ak47 bir silah gibi davranmasını isteyebiliriz. 
////	//upcasting: AK47 Silaha dönüştürmek upcasting denir. çok tehlikeli değildir genelde güvenlidir. 
////	//downcasting bayağı risklidir. çoğu yerde dönüşebilir veya dönüşmeyebilinir. pistolu ak47 dönüştürmek gibi bir deliliktir. 
////	//dönüşüm ifadesi doğru değil aslında. bir dönüşme olmuyor. orada sadece derleyiciye bir şeyi farklı şekilde ele almasını istiyoruz. 
////	//ak47 bir nesnesi oluşturulduğunda ram yerleşir.silah nesnesi de oluşturulur. 
////	//şimdi biz ak47 nesnesi ile bir pointer oluşturduğumuzda bir burada derleyiciye diyoruz ki; ak47 türündeki bir nesnenin bellek adresdir. 
////	//senin davranışın ak47 göre olacaktır. derleyici burada ak47 bakacak. bunlara bakacak. benim elimde bir bellek adresi var
////	//sonraki bir byte okursam;ismi, sırası ile mermikapasitesini... alırım diyecektir. derleyici gezinirken bilir sırası ile yol haritasını. burada bir byte gezdiğni düşünün. fazla da gezebilr. birharita var 
////	//M1 m1;
////	//M1* m1ptr=&m1;
////	//M1 sınıfına bakrak bellekte nasıl yol almsı gerektiğini bilecek. 
////	//sırası ile yol haritasını izleyecektir.
////	//burada aslıdna biz aslında AK47 bellek adresi veriyorum derken; vereceğim diye tanımlandığımzda;
////	//farklı bir bellek adresi veriyoruz. Örnek Silah adresini veriyoruz. silah türünde bir bellekte gezinmeye başlıyor.
////	//upcasting bir sorun yok ama downcasting risk var. 
////	//AK47 ak47;
////	//Silah* silahptr = &ak47;//ak47 türündeki bellek adresini veriyoruz!
////	//Silah* pointer dediğmiizde  silah neseninin 3 tane değişkeni var. derleyici şunu bilir. 0 isim, 1 mermikapasitesi, 2 renk görebilriiz. 
////	//bunlara atama yapabiliriz. 
////	//aslında AK47 ismini değiştirmiş oluyoruz. Silah sınıfından miras almış! ak47 dolaylı olarak etkilemektedir. cast ihtiyacı da yok bu durumda!
////	//yukarı doğru upcasting yapılıyor. kullanıcıdan bir onay almaya ihtiyaç yok diyoruz. 
////	//neden AK47 diğer alanlarına erişemiyoruz. bir derleyiciye bir silah türünü ele alacğımızı ifade ettik. derleyciye ise ak47 değil de üst devranılan türünü ifade etmiştir.
////	////eğer ak47 bir pointer oluştursaydık, derleyici bize AK47 nesnesini ele alıyorum diyecekti bütün ak47 ele alacaktı. 
////	////derleyici gititğinde nasıl okumasını yapması gerektiğini ifade etmektir. onu kısıtlamış oluyoruz. 
////	//AK47 ak47_1;
////	//ak47_1.isim = "Silahlı kullanma izni";
////
////	//Silah* silahPtr = &ak47_1;
////
////	//silahPtr->isim = "MERHABA";
////	//cout << ak47_1.isim << endl; //MERHABA yazdı.
////	////C++ Sizi kısıtlamaz. güzel yanı budur. 
////
////	/*Silah silah;
////	silah.isim = "Silah ismini yap";
////	silah.mermiKapasitesi = 5000;
////	silah.renk = "Blue";
////	AK47* ak47Ptr = (AK47*)&silah;
////	std::cout << ak47Ptr->seriTek << endl;*/
////
////
////
////}
//// 
//// 
////void test(AK47* ak47Ptr)
////{
////	std::cout << ak47Ptr->durbun << endl;
////}
//// 
//// 
////
////int main()
////{
////	//daha önce aşağı yukarı, yukarı aşağı casting gördük. sağa veya sola casting da yapabilriz ama doğruve mümkün olmaması lazım. 
////
////	//sağdan sola veya soldan sağa da bir işlem yapmak çok tehlikeli ve ciddi bir sonuç meydana getirir. 
////
////	Pistol pistol;
////	test((AK47*)&pistol);//yanlış! 204 çıktı. halbuki AK47 değil pistol ve pistol da durbun diye bir şey yok ki? bir yanlış hafızadan okuma yaptı ve patladı. 
//////
//////
//////	return 0;
//////}
////
//////void Goster(AK47* ak47) {
//////
//////	std::cout << ak47->isim << endl;
//////}
//////
//////void Goster2(Pistol* pistol) {
//////
//////	std::cout << pistol->isim << endl;
//////}// yerine 
////void Goster(Silah* silah) {
////
////	std::cout << silah->isim << endl;
////}
//// 
////int main()
////{
////	
////	//cast neden yapılır? örnek yapalım basit bir şekilde. 
////	//kullanıcının bir göstermek istediği bir amacı var. cast neden yapıldığına 
////	AK47 ak47;
////	ak47.isim = "AK47 türünde bir silahtır.";
////	Pistol pistol;
////	pistol.isim = "Pistol türünde bir silah";
////	M1 m1;
////	m1.isim = "M1 türünde bir silah türüdür. ";
////	//Goster(&ak47);
////	//Goster2(&pistol);
////	Goster(&ak47);
////	Goster(&pistol);
////	Goster(&m1); //bize dönüşümler bunun gibi işler için gereklidir. 
////	/*AK47 türünde bir silahtır.
////		Pistol türünde bir silah
////		M1 türünde bir silah türüdür.
////*/
////	//tek fonsiyon daha az kod ile birnde fazla iş yaptırabiliyrouz. 
////
////	return 0;
////}
//
////int main()
////{
////
//// //nesne tabanlı concepte bir base sınıf ve başka sınıflar oalbiliyrodu. kalıtım dene şeyler vardır 
////	//encapsulation : kapsülleme: bir öğrenci belgesine ihtiyacınız olsun. yönetime gider ve yetkili kişiye öğrenci belgesi istiyorum dersinzi. bilgisayar başına geçeer, yetkili girişi ile öğrenci belgeis verir ve aktarır. 
////	//kapsüllemeye örnek olan şey ise yetkilinin kendisidir. öğrenci işlerinin yetkilisi bir kapsülleme yapılmış durumdadır. kapsülleme geçerli değilse doğrudan gidipkendiniz almanız demektir. 
////	Payment pay;
////	pay.setTutar(-1);
////	pay.paraBirimi = "TL";
////	pay.pay();
////	//kullanıcı buradan negatif bir değer gönderilenbilinir. 
////	//araya bir katman koyalım ve hazırlayalım. bunun için private payarız. 
////
////	return 0;
////}
//void atesEt(Silah* silah)
//{
//	silah->atesEt();
//
//}
//int main()
//{
//	//this parametresindne bahsedelim.Her nesne için bir tane kod hafızasına eklenir ve bütün nesnenler o methodu kullanır. ak47 100 tane de olsa bir tane method kullanılır. Bu methodlar nasıl çağrıldığına bakalım. bütün nesneler nasıl kullanılıyor?
//	//değerlerin tutulduğu yer stack diyrouz. Ram bölümleri vr. 
//	//this methodu ile başka başka nesnenelr ile çalışmasınımümkün kılmaktır. 
//
//	//sanal methodlar.
//	//sanal methodlar silah base ait türetien sınıftna gelen nesneleri kullanıyoruz. 
//	AK47 ak47;
//
//	atesEt(&ak47);
//	return 0;
//}