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
	box(10,2,78,18);
	box1(35,3,50,7);
	koor(37,5); printf("TANYA DOKTER");
	koor(12,10); printf("Pilih hari untuk sesi tanya jawab : ");
	koor (18,12); printf("Senin");
	koor (18,13); printf("Selasa");
	koor (18,14); printf("Rabu");
	koor (18,15); printf("Kamis");
	koor (18,16); printf("Jumat");

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
 panjangX = 15;
    panjangY = 12;

    do{
    tanyaDokter(hari, dokter);

    koor(panjangX,panjangY);
    printf(">>");
    button = getch();

    //72=tombol UP
    //80=tombol DOWN
    //13=ENTER
    if(button == 80 && panjangY == 12)
    {
        panjangY = 13;
    }
    else if(button == 80 && panjangY == 13)
    {
        panjangY = 14;
    }
    else if(button == 80 && panjangY == 14)
    {
        panjangY = 15;
    }
    else if(button == 80 && panjangY == 15)
    {
        panjangY = 16;
    }
    else if(button == 72 && panjangY == 16)
    {
        panjangY = 15;
    }
    else if(button == 72 && panjangY == 15)
    {
        panjangY = 14;
    }
    else if(button == 72 && panjangY == 14)
    {
        panjangY = 13;
    }
    else if(button == 72 && panjangY == 13)
    {
        panjangY = 12;
    }
}while(button != 13);

if(panjangX == 15 && panjangY == 12)
{
    bersih();
        printf("\nAnda akan melakukan sesi tanya jawab pada hari Senin\n");
        printf("Pilihan dokter yang bertugas pada hari Senin");
        printf("\n\n1. dr.xxx");
        printf("\nDokter spesialis x di Rumah Sakit x");
        printf("\n\n2. dr. yyy");
        printf("\nDokter spesialis y di Rumah Sakit y");
        printf("\n\n3.dr.zzz");
        printf("\nDokter di Klinik z");

		printf("\n\nMasukkan nomor dokter pilihan Anda\n");
		scanf("%d",&dokter);

		switch (dokter){
			case 1 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.xxx\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081334879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.yyy\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
			case 3 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.zzz\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
            default :
                printf("Input Anda salah!");
		}
}
else if (panjangX == 15 && panjangY == 13)
{
    bersih();
        printf("\nAnda akan melakukan sesi tanya jawab pada hari Selasa\n");
		printf("\nPilihan dokter yang bertugas pada hari Selasa");
		printf("\n\n1. dr.xxx");
		printf("\nDokter spesialis x di Rumah Sakit x");
		printf("\n\n2. dr. yyy");
		printf("\nDokter spesialis y di Rumah Sakit y");
		printf("\n\n3.dr.zzz");
		printf("\nDokter di Klinik z");

		printf("\n\nMasukkan nomor dokter pilihan Anda\n");
		scanf("%d",&dokter);

		switch (dokter){
			case 1 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.xxx\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081334879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.yyy\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
			case 3 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.zzz\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
		}
}
else if (panjangX == 15 && panjangY == 14)
{
    bersih();
        printf("\nAnda akan melakukan sesi tanya jawab pada hari Rabu\n");
		printf("\nPilihan dokter yang bertugas pada hari Rabu");
		printf("\n\n1. dr.xxx");
		printf("\nDokter spesialis x di Rumah Sakit x");
		printf("\n\n2. dr. yyy");
		printf("\nDokter spesialis y di Rumah Sakit y");
		printf("\n\n3.dr.zzz");
		printf("\nDokter di Klinik z");

		printf("\n\nMasukkan nomor dokter pilihan Anda\n");
		scanf("%d",&dokter);

		switch (dokter){
			case 1 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.xxx\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081334879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.yyy\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
			case 3 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.zzz\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
		}
}
else if(panjangX == 15 && panjangY == 15)
{
    bersih();
        printf("\nAnda akan melakukan sesi tanya jawab pada hari Kamis\n");
		printf("\nPilihan dokter yang bertugas pada hari Kamis");
		printf("\n\n1. dr.xxx");
		printf("\nDokter spesialis x di Rumah Sakit x");
		printf("\n\n2. dr. yyy");
		printf("\nDokter spesialis y di Rumah Sakit y");
		printf("\n\n3.dr.zzz");
		printf("\nDokter di Klinik z");

		printf("\n\nMasukkan nomor dokter pilihan Anda\n");
		scanf("%d",&dokter);

		switch (dokter){
			case 1 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.xxx\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081334879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.yyy\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
			case 3 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.zzz\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
		}
}
else if(panjangX == 15 && panjangY == 16)
{
    bersih();
        printf("\nAnda akan melakukan sesi tanya jawab pada hari Jumat\n");
		printf("\nPilihan dokter yang bertugas pada hari Jumat");
		printf("\n\n1. dr.xxx");
		printf("\nDokter spesialis x di Rumah Sakit x");
		printf("\n\n2. dr. yyy");
		printf("\nDokter spesialis y di Rumah Sakit y");
		printf("\n\n3.dr.zzz");
		printf("\nDokter di Klinik z");

		printf("\n\nMasukkan nomor dokter pilihan Anda\n");
		scanf("%d",&dokter);

		switch (dokter){
			case 1 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.xxx\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 08.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081334879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
				break;
			case 2 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.yyy\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
			case 3 :
				printf ("Anda akan melakukan sesi tanya jawab bersama dr.zzz\n\n");
				printf("Sesi tanya jawab dilayani pada pukul 10.00-14.00 WITA\n");
				printf("Hubungi asisten dokter 1 jam sebelum tanya jawab pada nomor 081338879xxx");
				printf("\nSelamat Melangsungkan Sesi Tanya Jawab!");
		}
}
getch();
return(0);
}
