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
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void Loading();
void utama();

void main(){
    Loading();
    utama();
}


void utama()
{
bersih();
Tanggal_Waktu();
    printf("============================================================\n");
    printf("                    Menghitung Pembakaran Kalori            \n");
    printf("                         Saat Berolahraga                   \n");
    printf("============================================================\n");
	printf("Pilih aktivitas yang sudah anda lakukan   : \n");
	printf("1.Bersepeda     || Kode = s\n");
	printf("2.Jogging       || Kode = j\n");
	printf("3.Basket        || Kode = b\n");
	printf("4.Yoga          || Kode = y\n");
	printf("5.Sepak Bola    || Kode = S\n");
	printf("6.Voli          || Kode = v\n");
	printf("7.Badminton     || Kode = B\n");
	printf("\n");
	char jenisaktivitas;
	printf("Input aktivitas yang anda lakukan         : ");
	scanf("%c", &jenisaktivitas);
	printf("\n============================================================\n");
            if(jenisaktivitas == 's'){
                float menit, kalori, pembakarankalori;
                kalori = 8.66;
                    printf("Berapa menit anda bersepeda? ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    printf("\n");
                    printf("Anda telah membakar kalori dengan bersepeda sebanyak %.2f\n",pembakarankalori);

	}
            if(jenisaktivitas == 'j'){
                float km, kalori, pembakarankalori;
                kalori = 60.0;
                    printf("Berapa km anda melakukan jogging? : ");
                    scanf("%f", &km);
                    pembakarankalori = km * kalori;
                    printf("Anda telah membakar kalori dengan jogging sebanyak %.2f\n",pembakarankalori);
	}
             if(jenisaktivitas == 'b'){
                float menit, kalori, pembakarankalori;
                kalori = 9.83;
                    printf("Berapa menit anda bermain basket? : ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    printf("Anda telah membakar kalori dengan bermain basket sebanyak %.2f\n",pembakarankalori);
	}
            if(jenisaktivitas == 'y'){
                float menit, kalori, pembakarankalori;
                kalori = 5.0;
                    printf("Berapa menit anda melakukan yoga? : ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    printf("Anda telah membakar kalori dengan melakukan yoga sebanyak %.2f\n",pembakarankalori);
	}
            if(jenisaktivitas == 'S'){
                float menit, kalori, pembakarankalori;
                kalori = 10.2;
                    printf("Berapa menit anda bermain sepak bola? : ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    printf("Anda telah membakar kalori dengan bermain sepak bola sebanyak %.2f\n",pembakarankalori);
	}
            if(jenisaktivitas == 'v'){
                float menit, kalori, pembakarankalori;
                kalori = 4.9;
                    printf("Berapa menit anda bermain voli? : ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    printf("Anda telah membakar kalori dengan bermain voli sebanyak %.2f\n",pembakarankalori);
	}
            if(jenisaktivitas == 'B'){
                float menit, kalori, pembakarankalori;
                kalori = 4.53;
                    printf("Berapa menit anda bermain badminton? : ");
                    scanf("%f", &menit);
                    pembakarankalori = menit * kalori;
                    printf("Anda telah membakar kalori dengan bermain badminton sebanyak %.2f\n",pembakarankalori);
	}
            else {
                    printf("Input yang anda masukkan salah");
	}


	printf("\n============================================================\n");
    printf("          Terima kasih telah menggunakan fitur ini\n");
    printf("============================================================\n");

  	return 0;
}

void Tanggal_Waktu(){
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
