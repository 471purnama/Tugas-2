#include<iostream>
int luas, panjang, lebar;

int main()
{
	std::cout<<"Menghitung Luas Persegi Panjang \n";
	std::cout<<"Masukan Sisi Panjang :10 ";
	std::cin>>panjang;
	std::cout<<"Masukan Sisi Lebar :4 ";
	std::cin>>lebar;
	luas = panjang * lebar;
	std::cout<<"Luasnya adalah :40 ";
	std::cout<<luas;
}