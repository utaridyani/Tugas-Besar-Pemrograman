#include <stdio.h>
#include <windows.h>

//deklarasi fungsi
int tanyaDokter (int hari, int dokter);
void koor(int x , int y);
void box(int a,int b,int c,int d);
void box1(int a, int b, int c, int d);
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void mainTanyaDokter (int hari, int dokter, int pengguna, int userID, int password, int panjangX,int panjangY,int button);

int hari, dokter, pengguna, userID, password;
int panjangX,panjangY,button;

//Main Function
int main(){
 mainTanyaDokter (hari, dokter, pengguna, userID, password, panjangX, panjangY, button);
}

//Fungsi Tanya Dokter
int tanyaDokter (int hari, int dokter){
    bersih();
    setcolor(10);
    box(30,7,117,35);
    box1(40,12,107,30);
    box1(66,14,82,16);
	koor(68,15); printf("TANYA DOKTER");
	koor(45,18); printf("Pilih hari untuk sesi tanya jawab : ");
	koor (50,20); printf("Senin");
	koor (50,22); printf("Selasa");
	koor (50,24); printf("Rabu");
	koor (50,26); printf("Kamis");
	koor (50,28); printf("Jumat");

	printf("\n\n\n");
}

//Fungsi Untuk Menentukan letak kursor
void koor(int x , int y)
{
    HANDLE h;
    COORD c;
    c.X = x;
    c.Y = y;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h,c);
}

//Fungsi untuk membersihkan layar tanpa menutup program
void bersih()
{
    system("cls");
}

//Fungsi Blocking yang menyebabkan program berhenti sejenak dan tidak melakukan proses
void delay(int sec)
{
    Sleep(sec);
}

//Fungsi Untuk Memberi Warna
void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

//Fungsi Pembetukan Box
void box(int a,int b,int c,int d)
{
	int i,j;
	for(i=a;i<c;i++)
	{
		koor(i,b);printf("\xcd");
		koor(i,d);printf("\xcd");
	}
	for(j=b;j<d;j++)
	{
		koor(a,j);printf("\xba");
		koor(c,j);printf("\xba");
	}
		koor(a,b);printf("\xc9");
		koor(c,b);printf("\xbb");
		koor(a,d);printf("\xc8");
		koor(c,d);printf("\xbc");
}

void box1(int a,int b,int c,int d)
{
	int i,j;
	for(i=a;i<c;i++)
	{
		koor(i,b);printf("%c",196);
		koor(i,d);printf("%c",196);
	}
	for(j=b;j<d;j++)
	{
		koor(a,j);printf("%c",179);
		koor(c,j);printf("%c",179);
	}
		koor(a,b);printf("%c",218);
		koor(c,b);printf("%c",191);
		koor(a,d);printf("%c",192);
		koor(c,d);printf("%c",217);
}

void mainTanyaDokter (int hari, int dokter, int pengguna, int userID, int password, int panjangX,int panjangY,int button)
{
    panjangX = 47;
    panjangY = 20;

    do{
    tanyaDokter(hari, dokter);

    koor(panjangX,panjangY);
    printf(">>");
    button = getch();

    //72=tombol UP
    //80=tombol DOWN
    //13=ENTER
    if(button == 80 && panjangY == 20)
    {
        panjangY = 22;
    }
    else if(button == 80 && panjangY == 22)
    {
        panjangY = 24;
    }
    else if(button == 80 && panjangY == 24)
    {
        panjangY = 26;
    }
    else if(button == 80 && panjangY == 26)
    {
        panjangY = 28;
    }
    else if(button == 72 && panjangY == 28)
    {
        panjangY = 26;
    }
    else if(button == 72 && panjangY == 26)
    {
        panjangY = 24;
    }
    else if(button == 72 && panjangY == 24)
    {
        panjangY = 22;
    }
    else if(button == 72 && panjangY == 22)
    {
        panjangY = 20;
    }
}while(button != 13);

if(panjangX == 47 && panjangY == 20)
{
    bersih();
    setcolor(10);
    box(30,7,117,35);

    koor(51,10);printf("====================================================");
    koor(51,11);printf("Anda akan melakukan sesi tanya jawab pada hari Senin");
    koor(51,12);printf("====================================================");

    setcolor(7);
    koor(35,17);printf("Pilihan dokter yang bertugas pada hari Senin");
    koor(35,18);printf("--------------------------------------------");
    koor(45,20);printf("1. dr.Putu Putri");
    koor(48,21);printf("Dokter spesialis Gizi di Rumah Sakit Badung");
    koor(45,23);printf("2. dr. Made Putra");
    koor(48,24);printf("Dokter Umum di Rumah Sakit Bangli");
    koor(45,26);printf("3.dr. Ari Putri");
    koor(48,27);printf("Dokter di Klinik Kasih Ibu");

    setcolor(10);
    koor(48,31);printf("Masukkan nomor dokter pilihan Anda : ");
    koor(86,31);scanf("%d",&dokter);

		switch (dokter){
			case 1 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Putu Putri");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Made Putra");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 3 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Ari Putri");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
            default :
                printf("Input Anda salah!");
		}
}
else if (panjangX == 47 && panjangY == 22)
{
bersih();
    setcolor(10);
    box(30,7,117,35);

    koor(51,10);printf("=====================================================");
    koor(51,11);printf("Anda akan melakukan sesi tanya jawab pada hari Selasa");
    koor(51,12);printf("=====================================================");

    setcolor(7);
    koor(35,17);printf("Pilihan dokter yang bertugas pada hari Selasa");
    koor(35,18);printf("--------------------------------------------");
    koor(45,20);printf("1. dr.Putu Putra");
    koor(48,21);printf("Dokter spesialis Gizi di Rumah Sakit Denpasar");
    koor(45,23);printf("2. dr. Made Putra");
    koor(48,24);printf("Dokter Umum di Rumah Sakit Bangli");
    koor(45,26);printf("3.dr. Ananda");
    koor(48,27);printf("Dokter di Klinik Kasih Ibu");

    setcolor(10);
    koor(48,31);printf("Masukkan nomor dokter pilihan Anda : ");
    koor(86,31);scanf("%d",&dokter);

		switch (dokter){
			case 1 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Putu Putra");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Made Putra");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 3 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Ananda");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
		}
}
else if (panjangX == 47 && panjangY == 24)
{
    bersih();
    setcolor(10);
    box(30,7,117,35);

    koor(51,10);printf("===================================================");
    koor(51,11);printf("Anda akan melakukan sesi tanya jawab pada hari Rabu");
    koor(51,12);printf("===================================================");

    setcolor(7);
    koor(35,17);printf("Pilihan dokter yang bertugas pada hari Rabu");
    koor(35,18);printf("--------------------------------------------");
    koor(45,20);printf("1. dr.Putu Putri");
    koor(48,21);printf("Dokter spesialis Gizi di Rumah Sakit Badung");
    koor(45,23);printf("2. dr. Bila Putri");
    koor(48,24);printf("Dokter Umum di Rumah Sakit Bangli");
    koor(45,26);printf("3.dr. Kartika Putri");
    koor(48,27);printf("Dokter di Klinik Putra Beta");

    setcolor(10);
    koor(48,31);printf("Masukkan nomor dokter pilihan Anda : ");
    koor(86,31);scanf("%d",&dokter);

		switch (dokter){
			case 1 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Putu Putri");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Bila Putri");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 3 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Kartika Putri");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
		}
}
else if(panjangX == 47 && panjangY == 26)
{
    bersih();
    setcolor(10);
    box(30,7,117,35);

    koor(51,10);printf("====================================================");
    koor(51,11);printf("Anda akan melakukan sesi tanya jawab pada hari Kamis");
    koor(51,12);printf("====================================================");

    setcolor(7);
    koor(35,17);printf("Pilihan dokter yang bertugas pada hari Kamis");
    koor(35,18);printf("--------------------------------------------");
    koor(45,20);printf("1. dr.Putu Putri");
    koor(48,21);printf("Dokter spesialis Gizi di Rumah Sakit Badung");
    koor(45,23);printf("2. dr. Made Putra");
    koor(48,24);printf("Dokter Umum di Rumah Sakit Bangli");
    koor(45,26);printf("3.dr. Ari Putri");
    koor(48,27);printf("Dokter di Klinik Kasih Ibu");

    setcolor(10);
    koor(48,31);printf("Masukkan nomor dokter pilihan Anda : ");
    koor(86,31);scanf("%d",&dokter);

		switch (dokter){
			case 1 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Putu Putri");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Made Putra");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 3 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Ari Putri");
				koor(45,16);printf ("----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
		}
}
else if(panjangX == 47 && panjangY == 28)
{
    bersih();
    setcolor(10);
    box(30,7,117,35);

    koor(51,10);printf("====================================================");
    koor(51,11);printf("Anda akan melakukan sesi tanya jawab pada hari Jumat");
    koor(51,12);printf("====================================================");

    setcolor(7);
    koor(35,17);printf("Pilihan dokter yang bertugas pada hari Jumat");
    koor(35,18);printf("--------------------------------------------");
    koor(45,20);printf("1. dr.Putu Putri");
    koor(48,21);printf("Dokter spesialis Gizi di Rumah Sakit Badung");
    koor(45,23);printf("2. dr. Made Putra");
    koor(48,24);printf("Dokter Umum di Rumah Sakit Bangli");
    koor(45,26);printf("3.dr. Ari Putri");
    koor(48,27);printf("Dokter di Klinik Kasih Ibu");

    setcolor(10);
    koor(48,31);printf("Masukkan nomor dokter pilihan Anda : ");
    koor(86,31);scanf("%d",&dokter);

		switch (dokter){
			case 1 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Putu Putri");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Made Putra");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 3 :
			    bersih();
                setcolor(10);
                box(30,7,117,35);
                box1(40,12,107,30);
                setcolor(7);
				koor(45,15);printf ("Anda akan melakukan sesi tanya jawab bersama dr. Ari Putri");
				koor(45,16);printf ("-----------------------------------------------------------");
				koor(45,20);printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA");
				koor(45,21);printf("Hubungi asisten dokter 1 jam sebelum tanya jawab");
				koor(45,22);printf("Kontak : 081234321111");
				koor(45,23);printf("Selamat Melangsungkan Sesi Tanya Jawab!");
				break;
		}
}
getch();
return(0);
}

void Tanggal_Waktu(){
int tanggal;
int bulan1;
int tahun;
int Jam;
int Menit;
int Detik;
    time_t current;
    time(&current);

    printf("%s", ctime(&current));

    struct tm*local = localtime(&current);

    tanggal = local->tm_mday;
    bulan1  = local->tm_mon + 1;
    tahun   = local->tm_year + 1900;
    Jam     = local->tm_hour;
    Menit   = local->tm_min;
    Detik   = local->tm_sec;

    if (Jam < 12){
 
        printf("%02d:%02d:%02d\n", Jam,Menit,Detik);
    }
    else{
       
        printf("%02d:%02d:%02d\n", Jam-12,Menit,Detik);
    }
    
    printf("%02d/%02d/%d\n", tanggal,bulan1,tahun);
}
