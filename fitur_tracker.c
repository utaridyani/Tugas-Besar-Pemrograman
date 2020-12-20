#include <stdio.h>
#include <windows.h>

void bersih();
void errorHandling();
void koor(int x , int y);
void box(int a,int b,int c,int d);
void box1(int a,int b,int c,int d);
void tracker(int pilihan, double penurunan1, double penurunan2, double kenaikan1 , double kenaikan2, double bulanPertama, double bulanKedua, double bulanKetiga);

int pilihan;
double penurunan1, penurunan2, kenaikan1 , kenaikan2;
double bulanPertama, bulanKedua, bulanKetiga;

int main()
{
    tracker(pilihan, penurunan1, penurunan2, kenaikan1 ,kenaikan2, bulanPertama, bulanKedua, bulanKetiga);

}

//fungsi error handling
void errorHandling()
{
	printf("Input yang anda masukkan salah!");
}

//Fungsi untuk membersihkan layar tanpa menutup program
void bersih()
{
    system("cls");
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

void tracker(int pilihan, double penurunan1, double penurunan2, double kenaikan1 , double kenaikan2, double bulanPertama, double bulanKedua, double bulanKetiga)
{
    setcolor(10);
    box(30,7,117,35);
    box1(40,12,107,30);
    setcolor(7);
    koor(60,14);printf("Masukkan BMI anda");
    koor(45,19);printf("BMI bulan ke-1 : ");
	koor(67,19);scanf("%lf", &bulanPertama);
	koor(45,23);printf("BMI bulan ke-2 : ");
	koor(67,23);scanf("%lf", &bulanKedua);
	koor(45,27); printf("BMI bulan ke-3 : ");
	koor(67,27);scanf("%lf", &bulanKetiga);

	bersih();

	setcolor(10);
	box(30,7,117,35);
    //box rekapitulasi
    box1(31,8,116,20);
    box1(63,9,90,11);
    //box tracking
    box1(31,21,116,34);
    box1(63,22,90,24);

    koor(68,10); printf("REKAPITULASI BMI");
	koor(35,14); printf("BMI bulan pertama adalah %.2f", bulanPertama);
	koor(35,16); printf("BMI bulan kedua adalah %.2f", bulanKedua);
	koor(35,18); printf("BMI bulan ketiga adalah %.2f", bulanKetiga);

    koor(75,23); printf("TRACKING");

	if(bulanPertama>bulanKedua)
	{
		penurunan1=bulanPertama-bulanKedua;
		koor(35,27);printf("Pada bulan kedua BMI anda mengalami penurunan sebesar %.2f", penurunan1);
	}
	else if(bulanKedua>bulanPertama)
	{
		kenaikan1=bulanKedua-bulanPertama;
		koor(35,27); printf("Pada bulan kedua BMI anda mengalami kenaikan sebesar %.2f", kenaikan1);
	}
	else if(bulanPertama=bulanKedua)
	{
		koor(35,27);printf("BMI anda stabil pada bulan kedua");
	}

	if(bulanKedua>bulanKetiga)
	{
		penurunan2=bulanKedua - bulanKetiga;
		koor(35,30); printf("Pada bulan ketiga BMI anda mengalami penurunan sebesar %.2f", penurunan2);
	}
	else if(bulanKetiga>bulanKedua)
	{
		kenaikan2=bulanKetiga - bulanKedua;
		koor(35,30);printf("Pada bulan kedua BMI anda mengalami kenaikan sebesar %.2f", kenaikan2);
	}
	else if(bulanKetiga=bulanKedua)
	{
		koor(35,30); printf("BMI anda stabil pada bulan ketiga");
	}
}

void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
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
