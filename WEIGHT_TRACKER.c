#include <stdio.h>
#include <windows.h>
#include <string.h>

//prototype
void koor(int x , int y);
void box(int a,int b,int c,int d);
void box1(int a, int b, int c, int d);
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void namaProgram();
void pemilihanUser();
void signup ();
void login ();

struct data
{
    char nama[100];
    char username[20];
    char password[10];
    char noTLP[15];
}a;
char username[100];
char password[10];
int compare1;
int compare2;
FILE * fp;

//Fungsi main
int main()
{
    int panjangX,panjangY,button,kode;

    setcolor(10);
    box(30,7,117,35);
    namaProgram();

    panjangX = 37;
    panjangY = 21;

do{
    pemilihanUser();

    koor(panjangX,panjangY);
    printf("-->");
    button = getch();

    //Opsi untuk memindahkan user
    if(button == 77 && panjangX == 37)
    {
        panjangX = 94;
    }
    else if(button == 75 && panjangX == 94)
    {
        panjangX = 37;
    }
}while(button != 13);

if(panjangY == 21 && panjangX == 37)
{
    bersih();
    setcolor(10);
    box(30,7,117,35);
    box1(40,12,107,30);
    setcolor(7);
    koor(50,21); printf("MASUKAN KODE REGISTRASI : ");
    scanf("%d", &kode); fflush(stdin);
    if (kode==3748)
    {
        //menu login
    }
    else
    {
        koor(50,23);
        printf("KODE LOGIN SALAH !");
    }
}
else if(panjangY == 21 && panjangX == 94)
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
    setcolor(10);
    box1(59,10,90,13);
    setcolor(7);
    koor(70,11); printf("W E I G H T");
    koor(69,12); printf("T R A C K E R");
    koor(75,28); printf("By");
    koor(67,30); printf("Herry, Utari, Darryl");
    koor(59,25);
    for(int i=1 ; i<=34 ; i++){
        setcolor(10);
        printf("%c",219);
        Sleep(10); }
}

//Fungsi Pemilihan Jenis User
void pemilihanUser()
{
    bersih();
    setcolor(10);
    box(30,7,117,35);
    box1(68,10,82,12);
    box1(41,20,49,22);
    box1(98,20,106,22);
    setcolor(7);
    koor(70,11);printf("JENIS USER");
    koor(42,21);printf("Premium");
    koor(99,21);printf("Reguler");
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

void signup ()
{
    fp=fopen("data.txt", "a");

    puts("Masukkan nama lengkap : ");
    gets(a.nama);
    puts("Masukkan username baru : ");
    gets(a.username);
    puts("Masukkan password : ");
    gets(a.password);
    puts("Masukkan nomor hp : ");
    gets(a.noTLP);

    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
}

void login ()
{
    for(int i=0; i<3; i++)
    {
    fp=fopen("data.txt", "r");

    printf("\nMasukkan username : ");
    gets(username);
    printf("\nMasukkan password : ");
    for(int i=0; i<8; i++)
    {
        ch=getch();
        password[i]=ch;
        ch='*';;
        printf("%c", ch);
    }

    fread(&a, sizeof(a), 1, fp);

        compare1=strcmp(username, a.username);
        compare2=strcmp(password, a.password);

        if(compare1==0 && compare2!=0)
        {
            printf("Password anda salah!");
            ulang=ulang+1;
        }
        else if(compare1!=0 && compare2==0)
        {
            printf("Username anda salah!");
            ulang=ulang+1;
        }
        else if(compare1!=0 && compare2!=0)
        {
            printf("data anda salah!");
            ulang=ulang+1;
        }
        else if(compare1==0 && compare2==0)
        {
            break;
        }
    }
    if(ulang<3)
    {
        printf("\nWelcome %s!", username);
    }
    else
    {
        printf("\nLogin Gagal!");
    }
}
