#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
#include<dos.h>

int tanggal;
int bulan1;
int tahun;
int Jam;
int Menit;
int Detik;

void koor(int x , int y);
void box(int a,int b,int c,int d);
void box1(int a, int b, int c, int d);
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void Loading();
void perhitungankalorisaatolahraga();

void main(){
    Loading();
    perhitungankalorisaatolahraga();
}


void perhitungankalorisaatolahraga()
{
bersih();
Tanggal_Waktu();
setcolor(10);
box(35,7,117,35);
    koor(47,10);printf("============================================================\n");
    koor(47,11);printf("                 Menghitung Pembakaran Kalori            \n");
    koor(47,12);printf("                       Saat Berolahraga                   \n");
    koor(47,13);printf("============================================================\n");
	koor(47,14);printf("Pilih aktivitas yang sudah anda lakukan   : \n");
	koor(47,15);printf("1.Bersepeda     || Kode = s\n");
	koor(47,16);printf("2.Jogging       || Kode = j\n");
	koor(47,17);printf("3.Basket        || Kode = b\n");
	koor(47,18);printf("4.Yoga          || Kode = y\n");
	koor(47,19);printf("5.Sepak Bola    || Kode = S\n");
	koor(47,20);printf("6.Voli          || Kode = v\n");
	koor(47,21);printf("7.Badminton     || Kode = B\n");
	koor(47,22);printf("\n");
	char jenisaktivitas;
	koor(47,24);printf("Input aktivitas yang anda lakukan         : ");
	scanf("%c", &jenisaktivitas);
            if(jenisaktivitas == 's'){
                float menit, kalori, pembakarankalori;
                kalori = 8.66;
                    koor(47,26);printf("Berapa menit anda bersepeda? ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    koor(47,27);printf("\n");
                    koor(47,28);printf("Anda telah membakar kalori dengan bersepeda sebanyak %.2f\n",pembakarankalori);

	}
            if(jenisaktivitas == 'j'){
                float km, kalori, pembakarankalori;
                kalori = 60.0;
                    koor(47,26);printf("Berapa km anda melakukan jogging? : ");
                    scanf("%f", &km);
                    pembakarankalori = km * kalori;
                    koor(47,27);printf("\n");
                    koor(47,28);printf("Anda telah membakar kalori dengan jogging sebanyak %.2f\n",pembakarankalori);
	}
             if(jenisaktivitas == 'b'){
                float menit, kalori, pembakarankalori;
                kalori = 9.83;
                    koor(47,26);printf("Berapa menit anda bermain basket? : ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    koor(47,27);printf("\n");
                    koor(47,28);printf("Anda telah membakar kalori dengan bermain basket sebanyak %.2f\n",pembakarankalori);
	}
            if(jenisaktivitas == 'y'){
                float menit, kalori, pembakarankalori;
                kalori = 5.0;
                    koor(47,26);printf("Berapa menit anda melakukan yoga? : ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    koor(47,27);printf("\n");
                    koor(47,28);printf("Anda telah membakar kalori dengan melakukan yoga sebanyak %.2f\n",pembakarankalori);
	}
            if(jenisaktivitas == 'S'){
                float menit, kalori, pembakarankalori;
                kalori = 10.2;
                    koor(47,26);printf("Berapa menit anda bermain sepak bola? : ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    koor(47,27);printf("\n");
                    koor(47,28);printf("Anda telah membakar kalori dengan bermain sepak bola sebanyak %.2f\n",pembakarankalori);
	}
            if(jenisaktivitas == 'v'){
                float menit, kalori, pembakarankalori;
                kalori = 4.9;
                    koor(47,26);printf("Berapa menit anda bermain voli? : ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    koor(47,27);printf("\n");
                    koor(47,28);printf("Anda telah membakar kalori dengan bermain voli sebanyak %.2f\n",pembakarankalori);
	}
            if(jenisaktivitas == 'B'){
                float menit, kalori, pembakarankalori;
                kalori = 4.53;
                    koor(47,26);printf("Berapa menit anda bermain badminton? : ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    koor(47,27);printf("\n");
                    koor(47,28);printf("Anda telah membakar kalori dengan bermain badminton sebanyak %.2f\n",pembakarankalori);
	}
            else{
                    koor(47,26);printf("Input yang anda masukkan salah");
	}

    koor(47,31);printf(" \n");
	koor(47,32);printf("============================================================\n");
    koor(47,33);printf("          Terima kasih telah menggunakan fitur ini          \n");
    koor(47,34);printf("============================================================\n");

  	return 0;
}

void Tanggal_Waktu(){
    setcolor(5);
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

    if (Jam < 12)
        printf("%02d:%02d:%02d\n", Jam,Menit,Detik);
    else
        printf("%02d:%02d:%02d\n", Jam-12,Menit,Detik);

    printf("%02d/%02d/%d\n", tanggal,bulan1,tahun);
}

void koor(int x , int y)
{
    HANDLE h;
    COORD c;
    c.X = x;
    c.Y = y;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h,c);
}
void bersih()
{
    system("cls");
}

void delay(int sec)
{
    Sleep(sec);
}

void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

void Loading(){

    bersih();
    koor(40,9);
    printf("============================================================\n");
    koor(40,10);
    printf("                    Menghitung Pembakaran Kalori            \n");
    koor(40,11);
    printf("                         Saat Berolahraga                   \n");
    koor(40,12);
    printf("============================================================\n");
    koor(40,14);
    for(int i=1 ; i<=34 ; i++){
        setcolor(7);
        printf("%c",219);
        Sleep(150); } }

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
		koor(i,b);printf("%c",16);
		koor(i,d);printf("%c",16);
	}
	for(j=b;j<d;j++)
	{
		koor(a,j);printf("%c",63);
		koor(c,j);printf("%c",63);
	}
		koor(a,b);printf("%c",218);
		koor(c,b);printf("%c",191);
		koor(a,d);printf("%c",192);
		koor(c,d);printf("%c",217);
}
