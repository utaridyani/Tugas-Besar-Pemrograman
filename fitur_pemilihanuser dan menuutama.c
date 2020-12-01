#include <stdio.h>
#include <conio.h>
#include <windows.h>

//prototype
void koor(int x , int y);
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void namaProgram();
void pemilihanUser();

int main()
{
int panjangX,panjangY,button;

namaProgram();

panjangX = 6;
panjangY = 12;

do{
    pemilihanUser();

    koor(panjangX,panjangY);
    printf("-->");
    button = getch();

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

if(panjangY == 12 && panjangX == 6)
{
    bersih();
    printf("nanti disini ada menu login untuk user premium");
    printf("\nsama fitur-fitur untuk user premium");
}
else if(panjangY == 12 && panjangX == 47)
{
    bersih();
    printf("\ndisini nanti fitur-fitur untuk user reguler");
    printf("\nniatku nanti user reguler gaada fitur tanya dokernya huehehehehe");
    printf("\nkalo ada ide lain atau yg perlu diperbaiki info info yawww:))))");
    printf("btw ini program aku nemu referensi di google uakakkakakakakkakaka");
}

getch();
return 0;
}



//FUNGSI-FUNGSI
//Fungsi Untuk Memindah-mindah kursor
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
    koor(35,11);
    printf("WEIGHT TRACKER");
    koor(31,16);
    printf("By Herry, Utari, Darryl");
    koor(26,14);
    for(int i=1 ; i<=34 ; i++){
        setcolor(5);
        printf("%c",219);
        Sleep(10); } }

//Fungsi Pemilihan Jenis User
void pemilihanUser()
{
    bersih();
    setcolor(7);
    koor(31,10);printf("Jenis User : ");
    koor(10,12);printf("Premium");
    koor(51,12);printf("Reguler");
}
