#include<iostream>
int topla(int a,int b){
	return a+b;
}
int getir( int(*fint)(int,int)  ){
	int	a = fint(10,10); //10 10 de�er verdik �st fonksiyona *fint o y�zden yazd�k 
	return a;
}
int main(){
	int b = getir(topla);
	std::cout<<b;
	return 0;
}
