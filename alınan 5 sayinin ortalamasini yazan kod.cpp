#include<iostream>
using namespace std;
int main()
//ortalama=toplam/sayý
//accumulator= biriktirici
{
	int toplam = 0;
	int sayi=0;
	int okunan=0;
	for(int i=0;okunan!=-1;i++)
	{
		cout<<"bir sayi giriniz"<< endl;
		cin>>okunan;
		toplam+=okunan;
		sayi++;
	}
	sayi--;
	toplam+=1; 
	cout<<"toplam:"<<toplam<< endl;
	cout<<"sayi:"<<sayi<< endl;
	
	cout<<"ortalama:"<<(float)toplam/sayi<< endl;
}
