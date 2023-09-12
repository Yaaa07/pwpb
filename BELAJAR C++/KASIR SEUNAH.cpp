#include<iostream>
using namespace std;
int main(){
	int kode ,pri,jml,tot,byr,kbl;
	char mad;
	do
     {
	 
    cout<<"                  RUMAH MAKAN KADAL            "<<endl;
    cout<<"           JLN.IN AJA DULU NANTI JUGA TAU      "<<endl;
    cout<<"==============================================="<<endl;
    cout<<endl;
    cout<<"                 MENU NYA NIH NGABSS           "<<endl;
    cout<<endl;
    cout<<"    MENU MAKANAN                        HARGA    "<<endl;
    cout<<" 1. KADAL GORENG                       175.000   "<<endl;
    cout<<" 2. SOP KADAL                          150.000   "<<endl;
    cout<<" 3. SEBLAK KADAL                       100.000   "<<endl;
    cout<<" 4. NASI GORENG KADAL                  150.000   "<<endl;
    cout<<" 5. KADAL GULING                       300.000   "<<endl;
    cout<<" 6. KADAL ASAM MANIS                   150.000   "<<endl;
    cout<<" 7. AIR PUTIH                       GRATIS MASZEH"<<endl;
    cout<<'n'<<"MASUKAN PILIHAN MENU ANDA : " ;
    cin>>kode;
    switch ( kode ){
    	case 1:
    		cout<<'n'<<"KADAL GORENG"<<endl;
    		pri=175.000;
    		cout<<"masukan jumlah : " ;
    		cin>>jml;
    		tot=pri*jml;
    		cout<<"Masih ada Y/T : ";
    		cin>>mad;
    		break;
    	case 2:
			cout<<'n'<<"SOP KADAL"<<endl;
			pri=150.000;
			cout<<"masukan jumlah : ";
			cin>>jml;
			tot=pri*jml;
			cout<<"Masih ada Y/T : ";
			cin>>mad;
			break;
		case 3:
			cout<<'n'<<"SEBLAK KADAL"<<endl;
			pri=100.000;
			cout<<"masukan jumlah : ";
			cin>>jml;
			tot=pri*jml;
			cout<<"masih ada Y/T : ";
			cin>>mad;
		
		default :
		cout<<"kode yang anda masukan tidak ada";	
		}
		
	    }
	    while (mad/='Y');
	    return 0;
}
