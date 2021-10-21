#include <iostream>
using namespace std;
int main(){


	int umur, hasil_tes1, hasil_tes2;
	double skor1, skor2, murid, rata;
	string grade, kelamin;
	
	
	cout<<"berapa umur mu:";
	cin >> umur;
	cout<<"masukan kelamin anda laki atau perempuan?:";
	cin >> kelamin;
	cout<<"masukan hasil tes 1:";
	cin >> hasil_tes1;
	cout<<"masukan hasil tes 2:";
	cin >> hasil_tes2;
	
	if(kelamin == "laki"){
		if(umur > 19 && umur < 31){
			if(hasil_tes1 >= 38 && hasil_tes1 <= 40){
				skor1 = 3.0;
			}
			else if(hasil_tes1 >= 35 && hasil_tes1 <= 37){
				skor1 = 2;
			}
			else if(hasil_tes1 <= 35){
				skor1 = 1.0;
			}

			if(hasil_tes2 >= 14 && hasil_tes2 <= 16){
				skor2 = 3.0;
			}
			else if(hasil_tes2 > 11 && hasil_tes2 <= 13){
				skor2 = 2.0;
			}
			else if(hasil_tes2 <=11){
				skor2 = 1.0;
			}
		}
		else if(umur >= 31 && umur <= 40){
			if(hasil_tes1 > 35 && hasil_tes1 < 37){
				skor1 = 3.0;
			}
			else if(hasil_tes1 > 32 && hasil_tes1 <= 35){
				skor1 = 2.0;
			}
			else if(hasil_tes1 >= 30 && hasil_tes1 <=32){
				skor1 = 1.0;
			}
      
			if(hasil_tes2 >= 28 && hasil_tes2 <= 30){
				skor2 = 3.0;
			}
			else if(hasil_tes2 > 25 && hasil_tes2 <= 27){
				skor2 = 2.0;
			}
			else if(hasil_tes2 < 25){
				skor2 = 1.0;
			}
		}
	}
	if(kelamin == "perempuan"){
		if(umur > 19 && umur < 31){
			if(hasil_tes1 >= 34 && hasil_tes1 <= 36){
				skor1 = 3.0;
			}
			else if(hasil_tes1 >= 32 && hasil_tes1 < 34){
				skor1 = 2.0;
			}
			else if(hasil_tes1 <= 31){
				skor1 = 1.0;
			}


			if(hasil_tes2 >= 11 && hasil_tes2 <= 13){
				skor2 = 3.0;
			}
			else if(hasil_tes2 >= 8 && hasil_tes2 <= 10){
				skor2 = 2.0;
			}
			else if(hasil_tes2 < 8){
				skor2 = 1.0;
			}
		}
		else if(umur >= 31 && umur <= 40){
			if(hasil_tes1 > 30 && hasil_tes1 < 33){
				skor1 = 3.0;
			}
			else if(hasil_tes1 >= 28 && hasil_tes1 <= 30){
				skor1 = 2.0;
			}
			else if(hasil_tes1 < 28){
				skor1 = 1.0;
			}


			if(hasil_tes2 >= 22 && hasil_tes2 <= 24){
				skor2 = 3.0;
			}
			else if(hasil_tes2 >= 20 && hasil_tes2 <= 22){
				skor2 = 2.0;
			}
			else if(hasil_tes2 < 20){
				skor2 = 1.0;
			}
		}
	}
	
	cout << skor1 << endl;
	
	murid = skor1+skor2;
	rata = murid /2.0;
	if(rata >= 2.5){
		grade = "sangat bugar";
	}
	if(rata >= 2.0){
		grade = "cukup bugar";
	}
	if(rata >= 1){
		grade = "kurang bugar";
	}
	cout<<"umur anda adalah: " << umur <<endl;
	cout<<"jenis kelamin anda adalah: "<< kelamin <<endl;
	cout<<"hasil tes 1:" << skor1 <<endl;
	cout<<"hasil tes 2:" << skor2 <<endl;
	cout<<"hasil rata rata nya adalah :  "<< rata <<endl;
	cout<<"da an keterangan anda " << grade <<endl;

  cin.get();
	return 0;
}