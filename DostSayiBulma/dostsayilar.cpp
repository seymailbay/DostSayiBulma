#include <iostream>

using namespace std;
main (){
	int sayi1,sayi2,i,toplam1=0,toplam2=0;
	cout << " birinci sayiyi giriniz: ";
	cin >> sayi1 ;
	cout << " ikinci sayiyi giriniz: ";
	cin >> sayi2;
	
	for (i=1; i<=sayi1/2 ; i++){
		if(sayi1 % i == 0)
			toplam1 = toplam1 + i;
	}
	if ( toplam1 == sayi2){
	
		for (i=1; i<=sayi2/2 ; i++){
			if(sayi2 % i == 0)
				toplam2 = toplam2 + i;
		}
	    if(toplam2==sayi1){
	    	cout<<"sayilar dost";
		}
		else{
			cout<<"dost degil...";
		}
	}
	else{
		cout<<"dost degil...";
	}
}
