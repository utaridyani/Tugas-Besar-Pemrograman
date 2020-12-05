#include <stdio.h>
#include <conio.h>
#include <windows.h>

//prototype
void koor(int x , int y);
void box(int a,int b,int c,int d);
void box1(int a, int b, int c, int d);
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void namaProgram();
void pemilihanUser();

//Fungsi main
int main()
{
    int panjangX,panjangY,button;

    box(7,5,76,22); //Memberikan garis pinggir
    namaProgram();

    panjangX = 6;
    panjangY = 12;

do{
    pemilihanUser();

    koor(panjangX,panjangY);
    printf("-->");
    button = getch(); //apapun yang ditekan pada keyboard akan disimpan pada variabel button

    //Opsi untuk memindahkan user
    if(button == 77 && panjangX == 6)
    {
        panjangX = 47;
    }
    else if(button == 75 && panjangX == 47)
    {
        panjangX = 6;
    }
}while(button != 13);
//User Permium
if(panjangY == 12 && panjangX == 6)
{
    bersih();
    //Menu Login
}
//User Reguler
else if(panjangY == 12 && panjangX == 47)
{
    bersih();
   //Fitur-Fitur untuk user reguler
}

getch();
return 0;
}



//FUNGSI-FUNGSI
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

//Tampilan Pertama nama program
void namaProgram()
{
    box1(33,9,50,13); //memberi garis pinggir pada judul
    koor(35,11);
    printf("WEIGHT TRACKER");
    koor(31,16);
    printf("By Herry, Utari, Darryl");
    koor(26,14);
    for(int i=1 ; i<=34 ; i++){
        setcolor(7); //7 = simbol warna putih
        printf("%c",219);
        Sleep(80); }
}

//Fungsi Pemilihan Jenis User
void pemilihanUser()
{
    bersih();
    box(2,5,70,16); //memberi garis pinggir
    setcolor(7);
    box1(28,7,42,9); //memberi garis pinggir pada tulisan
    koor(29,8);printf("Jenis User : ");
    box1(9,11,18,13); //memberi garis pinggir pada tulisan
    koor(10,12);printf("Premium");
    box1(50,11,58,13); //memberi garis pinggir pada tulisan
    koor(51,12);printf("Reguler");
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
