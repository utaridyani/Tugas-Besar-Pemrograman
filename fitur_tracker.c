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
    box(1,1,100,30);
    box1(20,5,80,7);
    koor(42,6); printf("Masukkan BMI anda");
    koor(10,10); printf("BMI bulan ke-1 : ");
	scanf("%lf", &bulanPertama);
	koor(10,13); printf("BMI bulan ke-2 : ");
	scanf("%lf", &bulanKedua);
	koor(10,16); printf("BMI bulan ke-3 : ");
	scanf("%lf", &bulanKetiga);
	bersih();

    box(1,1,100,30);
    //box rekapitulasi
    box1(2,2,99,15);
    box1(38,3,60,5);
    //box tracking
    box1(2,16,99,29);
    box1(38,17,60,19);

    koor(41,4); printf("REKAPITULASI BMI");
	koor(5,7); printf("BMI bulan pertama adalah %.2f", bulanPertama);
	koor(5,10); printf("BMI bulan kedua adalah %.2f", bulanKedua);
	koor(5,13); printf("BMI bulan ketiga adalah %.2f", bulanKetiga);

    koor(45,18); printf("TRACKING");

	if(bulanPertama>bulanKedua)
	{
		penurunan1=bulanPertama-bulanKedua;
		koor(5,22); printf("Pada bulan kedua BMI anda mengalami penurunan sebesar %.2f", penurunan1);
	}
	else if(bulanKedua>bulanPertama)
	{
		kenaikan1=bulanKedua-bulanPertama;
		koor(5,22); printf("Pada bulan kedua BMI anda mengalami kenaikan sebesar %.2f", kenaikan1);
	}
	else if(bulanPertama=bulanKedua)
	{
		koor(5,22); printf("BMI anda stabil pada bulan kedua");
	}

	if(bulanKedua>bulanKetiga)
	{
		penurunan2=bulanKedua - bulanKetiga;
		koor(5, 25); printf("Pada bulan ketiga BMI anda mengalami penurunan sebesar %.2f", penurunan2);
	}
	else if(bulanKetiga>bulanKedua)
	{
		kenaikan2=bulanKetiga - bulanKedua;
		koor(5, 25); printf("Pada bulan kedua BMI anda mengalami kenaikan sebesar %.2f", kenaikan2);
	}
	else if(bulanKetiga=bulanKedua)
	{
		koor(5, 25); printf("BMI anda stabil pada bulan ketiga");
	}
}
