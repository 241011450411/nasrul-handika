#include<iostream>
#include<string.h>
using namespace std;

main(){
	
	int n;
	cout<<"masukan bilangan: ";cin>>n;
	if(n% 2 == 0){
		cout<<"adalah bilangan genap"<<endl;
	}else{
		cout<<"adalah bilangan ganjil"<<endl;
	}
	return 0;
}
