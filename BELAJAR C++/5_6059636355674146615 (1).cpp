#include <iostream>
using namespace std;

int main() {
	cout << "Biodata \n";
	cout << "Nama: Siti Fauziah In'Amillah \n";
	cout << "Kelas: X PPLG \n";
	cout << "Alamat: Jalan Gagak gg Hasan \n";
	cout <<endl;
	




      do{
	cout << "---------------------------------------------";
	cout << "     PROGRAM - PROGRAM C++ SITI FAUZIAH      ";
	cout << "---------------------------------------------";
	cout <<endl;
	cout << "1. Program Persegi Panjang"<<endl;
	cout << "2. Program Menghitung Segitiga siku-siku"<<endl;
	cout << "3. Program Mengitung luas lingkaran"<<endl;
	cout << "4. Program Menentukan Nilai Kelulusan"<<endl;
	cout << "5. Program Menentukan Jenis Kelamin"<<endl;
	cout << "6. Program Biodata"<<endl;
	cout << "7. Program Nama Hari"<<endl;
	cout << "8. Program Absen PPLG"<<endl;
	cout << "9. Program Kalkulator"<<endl;
	cout << "10. Program Bilangan Prima"<<endl;
	cout <<endl;
	cout <<endl;
	
	cout << "Masukan program yang ingin anda lihat";
	cin >>program   
	system( "cis" );
	
	switch ( program );
	
		case 1 :
			cout << "---------------------------------------------";
			cout << "     PROGRAM MENGHITUNG PERSEGI PANJANG      ";
			cout << "---------------------------------------------";
			cout <<endl;
			cout << "Masukan panjang :";
			cin <<panjang;
			cout << "Masukan lebar :":
			cin <<lebar;
			hasil = panjang*lebar;
			system ( "cis");
			cout << "Luas persegi panjang adalah =" <<endl;
			break;
			
		case 2 :
			cout << "---------------------------------------------";
			cout << "     PROGRAM MENGHITUNG SEGITIGA SIKU-SIKU      ";
			cout << "---------------------------------------------";
			cout <<endl;
			cout << "Masukan alas :";
			cin >>alas;
			cout << "Masukan tinggi :";
			cin >>tinggi;
			hasil = alas*tinggi/2;
			system ( "cis");
			cout << "Luas segitiga siku-siku adalah =" <<endl;
			break; 
			
		case 3 :
			cout << "---------------------------------------------";
			cout << "     PROGRAM MENGHITUNG LUAS LINGKARAN       ";
			cout << "---------------------------------------------";
			cout << "Masukan jari-jari :";
			cin >>jari-jari;
			hasil = phi*(r*r);
			system ( "cis");
			cout << "Luas lingkaran adalah =" <<endl;
			break;
			
		case 4 :
	       	cout << "---------------------------------------------";
			cout << "     PROGRAM MENENTUKAN NILAI KELULUSAN      ";
			cout << "---------------------------------------------";
			cout <<endl;
			cout << "Menentukan nilai kelulusan " <<endl;
			cout << "nilai siswa " <<endl;
			cin  >>nilai;
			
		if (nilai >= 75) {
			cout << "Anda lulus!";
			
		}
		else
		{
			cout << "anda tidak lulus!";
		}
		cout <<endl;
		
		break
		
		case 5 :
			cout << "---------------------------------------------";
			cout << "      PROGRAM MENENTUKAN JENIS KELAMIN       ";
			cout << "---------------------------------------------";
			cout <<endl;
			cout << "menentukan jenis kelamin " <<endl;
			cin >>angka;
		
		if ( angka <= 1 ) {
			cout << "anda laki-laki!" <<endl;
		}
		else
		{
			cout << "anda perempuan!"
		}
		cout <<endl;
		
		break;
		
		case 6 :
			cout << "---------------------------------------------";
			cout << "               PROGRAM BIODATA               ";
			cout << "---------------------------------------------";
			cout <<endl;
			cout << "Biodata" <<endl
			
			//nama, tanggal lahir, alamat, hobi kelas
			String nama;
				cout << "Nama: \n";
				getline(cin,nama);
				
			String tanggal lahir;
			    cout << "tanggal lahir: \n";
			    getline(cin,tanggal lahir);
			    
			Char Alamat:
				cout << "alamat: \n";
				getline(cin,alamat);
				
			String hobi:
				cout << "hobi: \n";
				getline(cin,hobi);
				
			String Kelas:
				cout << "Kelas: \n";
				getline(cin,kelas);
				
				cout <<endl;
				
				break;
				
		case 7 :
			cout << "---------------------------------------------";
			cout << "             PROGRAM NAMA HARI               ";
			cout << "---------------------------------------------";
			cout <<endl;

   				 int hari;
    				cout<<"masukan hari ke= ";
    				cin>>hari;
    				switch(hari) {
    			   case 1 :
     			    cout<<"senin";
     		      	break;
        		case 2 :
            	   	cout<<"selasa";
          		  	break;
        		case 3 :
            		cout<<"rabu";
            		break;
       			case 4 :
            		cout<<"kamis";
            		break;
        		case 5 :
            		cout<<"Jum'at";
            		break;
        		case 6 :
            		cout<<"sabtu";
            		break;
        		case 7 :
            		cout<<"Minggu";
            		break;

        default : cout<<"hari tidak di temukan";
        
        break;

		case 8:
			cout << "---------------------------------------------";
			cout << "             PROGRAM ABSEN PPLG              ";
			cout << "---------------------------------------------";
			cout <<endl;
        int absen;
    
    absen:
    
    cout<<"masukan nomor absen ke= ";
    cin>>absen;
    switch(absen) {
    
        {case 1 :
            cout<<"Ahmad Dzidan Logika Sanma"<<endl;
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 22 BANDUNG"<<endl;
            break;}
        {case 2 :
            cout<<"Alfhiko Azka Dinova";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMP DARUL HIKAM BANDUNG"<<endl;
            break;}
        {case 3 :
            cout<<"Alvino Sheva Putra Sopia";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 14 BANDUNG"<<endl;
            break;}
        {case 4 :
            cout<<"Ammar Ali Musthofa";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMP MUHAMMADIYAH 5 BANDUNG"<<endl;
            break;}
        {case 5 :
            cout<<"Arya Sencaki";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 27 BANDUNG"<<endl;
            break;}
        {case 6 :
            cout<<"Azriel Fadlilah Priantsyah";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 22 BANDUNG"<<endl;
            break;}
        {case 7 :
            cout<<"Azzriel Fharel Syahara";
            cout<< "perempuan"<<endl;
            cout<<"Asal SMPN  BANDUNG"<<endl;
            break;}
        {case 8 :
            cout<<"Dhalimunthe Ahmad Abdurrozzaq S.";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 14 BANDUNG"<<endl;
            break;}
        {case 9 :
            cout<<"Dhafin Khairul Faza";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 49 BANDUNG"<<endl;
            break;}
        {case 10 :
            cout<<"Dzikra Naufal Baihaqi";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 4 BANDUNG"<<endl;
            break;}
        {case 11 :
            cout<<"Fajar Muhammad Sofwan";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 7 BANDUNG"<<endl;
            break;}
        {case 12 :
            cout<<"Farrel Atha Satriatama";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 44 BANDUNG"<<endl;
            break;}
        {case 13 :
            cout<<"Farrel Putra Guntoro";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN  BANDUNG"<<endl;
            break;}
        {case 14 :
            cout<<"Galis Trenaningsih";
            cout<< "perempuan"<<endl;
            cout<<"Asal SMPN 44 BANDUNG"<<endl;
            break;}
        {case 15 :
            cout<<"Gina Hasna Agniyya";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 12 BANDUNG"<<endl;
            break;}
        {case 16 :
            cout<<"Hessel Christian";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMP SUMATRA 40 BANDUNG"<<endl;
            break;}
        {case 17 :
            cout<<"Maulana Farel Ibrahim";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 22 BANDUNG"<<endl;
            break;}
        {case 18 :
            cout<<"Mohammad Azka Ghifari";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 20 BANDUNG"<<endl;
            break;}
        {case 19 :
            cout<<"Muchammad Rafly Bustaman";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 22 BANDUNG"<<endl;
            break;}
        {case 20 :
            cout<<"M Azka Talula Dermawan";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMP ISLAM AL-AZHAR BANDUNG"<<endl;
            break;}
        {case 21 :
            cout<<"Muhammad Faisal Aktsa";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN  BANDUNG"<<endl;
            break;}
        {case 22 :
            cout<<"Muhammad Ihsan Juliansah";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 19 BANDUNG"<<endl;
            break;}
        {case 23 :
            cout<<"M Ikhsan Putra Pratama Sya'ban";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN  BANDUNG"<<endl;
            break;}
        {case 24 :
            cout<<"Muhammad Rifqi Rajif";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 12 BANDUNG"<<endl;
            break;}
        {case 25 :
            cout<<"Nike Nadiani";
            cout<< "perempuan"<<endl;
            cout<<"Asal SMP PASUNDAN 8 BANDUNG"<<endl;
            break;}
        {case 26 :
            cout<<"Permana Surya Dharma";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 12 BANDUNG"<<endl;
            break;}
        {case 27 :
            cout<<"Rafi Aditya Pasha";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN  BANDUNG"<<endl;
            break;}
        {case 28 :
            cout<<"Raihan Fatur Nurrohman";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMP AL-FALAH BANDUNG"<<endl;
            break;}
        {case 29 :
            cout<<"Resti Apriyani Wijaya";
            cout<< "perempuan"<<endl;
            cout<<"Asal SMPN 27 BANDUNG"<<endl;
            break;}
        {case 30 :
            cout<<"Reyza Fauzy Mubarok";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 22 BANDUNG"<<endl;
            break;}
        {case 31 :
            cout<<"Sitanggang Ignatius Christian John";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN  BANDUNG"<<endl;
            break;}
        {case 32 :
            cout<<"Siti Fauziah In'Amillah";
            cout<< "perempuan"<<endl;
            cout<<"Asal SMPN 7 BANDUNG"<<endl;
            break;}
        {case 33 :
            cout<<"Tiara Bungga Lestari";
            cout<< "perempuan"<<endl;
            cout<<"Asal SMPN  BANDUNG"<<endl;
            break;}
        {case 34 :
            cout<<"Vargas Gatama Iwana Sasmita";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMP "<<endl;
            break;}
        {case 35 :
            cout<<"Virgi Putra Riyadi";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN BANDUNG"<<endl;
            break;}
        {case 36 :
            cout<<"Zikri Achmad Fahrezy";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN BANDUNG"<<endl;
            break;}
        {case 37 :
            cout<<"Zulfan Arif Nur Zaky";
            cout<< "Laki-laki"<<endl;
            cout<<"Asal SMPN 7 BANDUNG"<<endl;
            break;}
        

        default : cout<<"Nama tidak ditemukan. Mohon coba lagi!\n";
        goto absen;
        
        break;
        
        case 9 :
        	cout << "---------------------------------------------";
			cout << "             PROGRAM KALKULATOR              ";
			cout << "---------------------------------------------";
			cout <<endl;
			
			int b1,b2,pil;
		 	float bv1,bv2,hasil;
 			string operasi;
 
			 cout << "PILIH OPERATOR ARITMATIKA"<<endl;
			 cout<<"-----------------------------"<<endl;
			 cout << "1. PENJUMLAHAN "<<endl;
			 cout << "2. PENGURANGAN "<<endl;
			 cout << "3. PERKALIAN "<< endl;
			 cout << "4. PEMBAGIAN "<< endl;
			 cout << "5. MODULUS "<<endl;
			 cout<<"-----------------------------"<<endl;
			 cout << endl;
 
			 cout << "PILIHAN OPERATOR : ";
			 cin >> pil;
			 if(pil==4){
			 cout << "MASUKKAN BILANGAN 1 : ";
			 cin >> bv1;
			 cout << "MASUKKAN BILANGAN 2 : ";
			 cin >> bv2;
			 hasil=bv1/bv2;
			 operasi='/';
			 cout<<endl;
			 cout<<"-----------------------------"<<endl;
			 cout<<"    "<<bv1<<operasi<<bv2<<"="<<hasil<<endl;
			 cout<<"-----------------------------"<<endl;
  
 		}else{
  
 
		 cout << "MASUKKAN BILANGAN 1 : ";
		 cin >> b1;
		 cout << "MASUKKAN BILANGAN 2 : ";
		 cin >> b2;
  
		  switch (pil){
		   case 1 : hasil=b1+b2;
		   operasi='+';
		   break;
		   case 2 : hasil=b1-b2;
		   operasi='-';
		   break;
		   case 3 : hasil=b1*b2;
		   operasi='*';
		   break;
		   case 5 : hasil=b1%b2;
		   operasi='%';
		   break;
		   default :
		      cout << "SALAH MASUKKAN OPERATOR";
 }
     
			 cout<<"-----------------------------"<<endl;
			 cout<<"    "<<b1<<operasi<<b2<<"="<<hasil<<endl;
			 cout<<"-----------------------------"<<endl;
        
        break;
        
        case 10 :
        	cout << "---------------------------------------------";
			cout << "            PROGRAM BILANGAN PRIMA           ";
			cout << "---------------------------------------------";
			cout <<endl;
			
			int ambil (int bil, int i){
				if (i ==1){
					return 1;
				}
			else if (bil % i == 0){
				return 1 + ambil (bil, --i);
			} else {
				return 0 + ambil (bil, --i);
			}
		}
	
		int cek (int bil){
			if (bil >1){
				return (ambil (bil,bil)== 2);
			}
		}
		else
			return false;
}
	int main( ){
		int bil;
		cout << "Masukan bilangan : "
		cin >>bil;
		
			if (cek(bil)){
				cout << "bilangan prima";
				}else{
					cout << "bukan bilangan prima";
				}
				
				break;		
				
			cout <<endl; 
			cout << "---------------------------------------------";
			cout <<endl;
			cout << "         PROGRAMMED BY FAUZIAHINMLH          ";
			cout <<endl;
			cout << "---------------------------------------------";
			cout <<endl;
			
			return 0;
	
	
	

	
