#include<iostream>
int topla(int a,int b){
	return a+b;
}
int getir( int(*fint)(int,int)  ){
	int	a = fint(10,10); //10 10 değer verdik üst fonksiyona *fint o yüzden yazdık 
	return a;
}
int main(){
	int b = getir(topla);
	std::cout<<b;
	return 0;
}
