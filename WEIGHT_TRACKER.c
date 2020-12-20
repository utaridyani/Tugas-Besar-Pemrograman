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
void menuAwal(int panjangX,int panjangY, int button,int kode, int pilihan);
void menuFitur();
void fitur();
void Tanggal_Waktu()

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
int ulang=0;
int ch;
int panjangX,panjangY,button,kode;
int pilihan;
FILE * fp;

//Fungsi main
int main()
{
    menuAwal(panjangX, panjangY, button, kode, pilihan);
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
        Sleep(100); }
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

//Fungsi Pembetukan Box Bergaris 2
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

//Fungsi Pembentukan Box bergaris 1
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

//Fungsi untuk signup bagi user baru
void signup ()
{
    bersih();
    setcolor(10);
    box(30,7,117,35);
    box1(40,12,107,30);
    fp=fopen("data.txt", "w");
    setcolor(7);
    koor (50,17);puts("Masukkan nama lengkap : ");
    koor (76,17);gets(a.nama);
    koor (50,20);puts("Masukkan username baru : ");
    koor (76,20);gets(a.username);
    setcolor(10);
    koor (50,22);puts("*Password harus berjumlah 8 karakter");
    setcolor(7);
    koor (50,23);puts("Masukkan password : ");
    koor (71,23);gets(a.password);
    koor (50,26);puts("Masukkan nomor hp : ");
    koor (71,26);gets(a.noTLP);

    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
    login();
}

//Fungsi Login
void login ()
{
    bersih();
    setcolor(10);
    box(30,7,117,35);
    box1(40,12,107,30);
    for(int i=0; i<3; i++)
    {
    fp=fopen("data.txt", "r");
    setcolor(7);
    koor (50,17); printf("Masukkan username : ");
    koor (71,17);gets(username);
    koor (50,21); printf("Masukkan password : ");
    koor (71,21);for(int i=0; i<8; i++)
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
            setcolor(4);
            koor(50,25); printf("Password anda salah!");
            koor(50,26); printf("Masukkan ulang data");
            ulang=ulang+1;
        }
        else if(compare1!=0 && compare2==0)
        {
            setcolor(4);
            koor(50,25); printf("Username anda salah!");
            koor(50,26); printf("Masukkan ulang data");
            ulang=ulang+1;
        }
        else if(compare1!=0 && compare2!=0)
        {
            bersih();
            setcolor(4);
            koor(50,21); printf("Data anda salah!");
            koor(50,26); printf("Masukkan ulang data");
            ulang=ulang+1;
        }
        else if(compare1==0 && compare2==0)
        {
            break;
        }
    }
    if(ulang<3)
    {
        setcolor(10);
        koor(70,29); printf("Welcome %s!", username);
        sleep(10);
        menuFitur();
    }
    else
    {
        bersih();
        setcolor(10);
        box(30,7,117,35);
        box1(40,12,107,30);
        setcolor(4);
        koor(50,21); printf("Login Gagal!");
        koor(35,22); printf("Sihlakan melakukan rerun program untuk login ulang");
        sleep(100);
        ExitProcess(login);
    }
}

//Fungsi Menu Awal
void menuAwal(int panjangX,int panjangY, int button,int kode, int pilihan)
{
    setcolor(10);
    box(30,7,117,35);
    namaProgram();

    panjangX = 37;
    panjangY = 21;

do{
    menuAwal:
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
    inputKodeRegistrasi:
    bersih();
    setcolor(10);
    box(30,7,117,35);
    box1(40,12,107,30);
    setcolor(7);
    koor(50,21); printf("MASUKAN KODE REGISTRASI : ");
    scanf("%d", &kode); fflush(stdin);
    if (kode==3748)
    {
        bersih();
        setcolor(10);
        box(30,7,117,35);
        box1(40,12,107,30);
        setcolor(7);
        koor(45, 15); printf("1.Sign Up");
        koor(45, 16); printf("2.Sign In");
        koor(45, 18); printf("Masukkan Pilihan Anda : ");
        scanf("%d", &pilihan); fflush(stdin);

        if(pilihan==1)
        {
            signup();
        }
        else if(pilihan==2)
        {
            login();
        }
    }
    else
    {
        koor(50,23); printf("KODE REGISTRASI SALAH !");
        koor(45,27); printf("1. Menu Awal");
        koor(91,27); printf("2. Input Ulang");
        koor(60,29); printf("Masukkan pilihan Anda : ");
        scanf("%d", &pilihan); fflush(stdin);

        if(pilihan==1)
        {
            goto menuAwal;
        }
        else if(pilihan==2)
        {
            goto inputKodeRegistrasi;
        }
        else
        {
            bersih();
            setcolor(10);
            box(30,7,117,35);
            box1(40,12,107,30);
            setcolor(7);
            koor(65,21); printf("Input Anda salah!");
        }
    }
}
else if(panjangY == 21 && panjangX == 94)
{
    bersih();
    //Fitur BMI
}

getch();
return 0;
}

void menuFitur()
{
    bersih();
    setcolor(10);
    box(30,7,117,35);
    panjangX=46;
    panjangY=15;
    do
    {
        fitur();

        koor(panjangX,panjangY);
        printf("-->");
        button = getch();

        if(button==80 && panjangY==15)
        {
            panjangY=18;
        }
        else if(button==72 && panjangY==18)
        {
            panjangY=15;
        }
        else if(button==80 && panjangY==18)
        {
            panjangY=21;
        }
        else if(button==72 && panjangY==21)
        {
            panjangY=18;
        }
        else if(button==80 && panjangY==21)
        {
            panjangY=24;
        }
        else if(button==72 && panjangY==24)
        {
            panjangY=21;
        }
        else if(button==80 && panjangY==24)
        {
            panjangY=27;
        }
        else if(button==72 && panjangY==27)
        {
            panjangY=24;
        }

    }while (button!=13);

    if(panjangX==50 && panjangY==15)
    {
        //Fitur hitung bmi
    }
    else if(panjangX==50 && panjangY==18)
    {
        //Fitur menu sehat
    }
    else if(panjangX==50 && panjangY==21)
    {
        //fitur hitung kalori
    }
    else if(panjangX==50 && panjangY==24)
    {
        //fitur tracker
    }
    else if(panjangX==50 && panjangY==27)
    {
        //fitur tanya dokter
    }
}

void fitur()
{
    bersih();
    setcolor(10);
    box(30,7,117,35);
    box1(68,9,82,11);
    setcolor(7);
    koor(70,10); printf("PILIH FITUR");
    koor(50,15); printf("Hitung BMI");
    koor(50,18); printf("Menu Sehat");
    koor(50,21); printf("Hitung Kalori");
    koor(50,24); printf("Tracker");
    koor(50,27); printf("Tanya Dokter");
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

