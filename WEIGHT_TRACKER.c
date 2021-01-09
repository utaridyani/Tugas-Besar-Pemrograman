#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <dos.h>

//===============================================//
//===============================================//
//             Deklarasi Prototype               //
//                  Menu Utama                   //
//===============================================//
//===============================================//
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
void Tanggal_Waktu();
void back();
void backreg();
void backpremium();

//===============================================//
//===============================================//
//             Deklarasi Prototype               //
//           Fitur Penghitungan BMI              //
//===============================================//
//===============================================//
double height, mess;
double BBL;
double age1;
double hasil;
int qna1,qna2,gender;
int tanggal;
int bulan1;
int tahun;
int Jam;
int Menit;
int Detik;
double bulan;
void Main_Menu_BMI();
void ask1();
double Calculate_BMI();
double saran();
void up_or_down();
void Final_BMI();
void result_BMI();
void Loading();
void Loading2();

//===============================================//
//===============================================//
//             Deklarasi Prototype               //
//           Fitur Penghitungan Kalori           //
//===============================================//
//===============================================//
int ask;
double bmr;
double hasiltee,hasil_TEE;
double BMR();
void utama();
void tanya();
double TEE();
void result_TEE();
double Final_TEE();

//===============================================//
//===============================================//
//             Deklarasi Prototype               //
//             Fitur Tanya Dokter                //
//===============================================//
//===============================================//
int tanyaDokter (int hari, int dokter);
void mainTanyaDokter (int hari, int dokter, int pengguna, int userID, char password, int panjangX,int panjangY,int button);
void TanggalWaktu();

//===============================================//
//===============================================//
//             Deklarasi Prototype               //
//                Fitur Tracker                  //
//===============================================//
//===============================================//
void errorHandling();
void tracker(int pilihan, double penurunan1, double penurunan2, double kenaikan1 , double kenaikan2, double bulanPertama, double bulanKedua, double bulanKetiga);

//===============================================//
//===============================================//
//             Deklarasi Prototype               //
//              Fitur Menu Sehat                 //
//===============================================//
//===============================================//
int bmi;
void utama_sehat();
void Rekomendasi_makanan ();

//===============================================//
//===============================================//
//          Deklarasi Variable Global            //
//===============================================//
//===============================================//
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
int hari, dokter, pengguna, userID;
double penurunan1, penurunan2, kenaikan1 , kenaikan2;
double bulanPertama, bulanKedua, bulanKetiga;
FILE * fp;

//===============================================//
//===============================================//
//                 Main Function                 //
//===============================================//
//===============================================//
int main()
{
    menuAwal(panjangX, panjangY, button, kode, pilihan);
}

//------------Fungsi Untuk Menu Utama------------//

//===============================================//
//===============================================//
// Nama Fungsi : koor                            //
// Input       : Int x, int y                    //
// Output      : Void                            //
// Deskripsi   : Meletakkan karakter pada posisi //
//               yang diinginkan sesuai          //
//               koordinat                       //
//                                               //
// Created by Utari                              //
//===============================================//
//===============================================//
void koor(int x , int y)
{
    HANDLE h;
    COORD c;
    c.X = x;
    c.Y = y;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h,c);
}

//===============================================//
//===============================================//
// Nama Fungsi : bersih                          //
// Input       : Void                            //
// Output      : Void                            //
// Deskripsi   : Membersihkan layar dari program //
//               yang telah berjalan             //
//                                               //
// Created by Utari                              //
//===============================================//
//===============================================//
void bersih()
{
    system("cls");
}

//===============================================//
//===============================================//
// Nama Fungsi : errorHandling                   //
// Input       : Void                            //
// Output      : Void                            //
// Deskripsi   : Menangani kesalahan input oleh  //
//               user                            //
//                                               //
// Created by Utari                              //                              
//===============================================//
//===============================================//
void errorHandling()
{
    printf("Input yang anda masukkan salah!");
}

//===============================================//
//===============================================//
// Nama Fungsi : delay                           //
// Input       : Int sec                         //
// Output      : Void                            //
// Deskripsi   : Memblocking program sehingga    //
//               terjadi jeda sesuai waktu yang  //
//               telah ditentukan                //
//                                               //
// Created by Utari                              //                              
//===============================================//
//===============================================//
void delay(int sec)
{
    Sleep(sec);
}

//===============================================//
//===============================================//
// Nama Fungsi : setcolor                        //
// Input       : Unsigned short color            //
// Output      : Void                            //
// Deskripsi   : Memberikan warna pada karakter  //
//               yang akan ditampilkan           //
//                                               //
// Created by Utari                              //                              
//===============================================//
//===============================================//
void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

//===============================================//
//===============================================//
// Nama Fungsi : namaProgram                     //
// Input       : Void                            //
// Output      : Void                            //
// Deskripsi   : Tampilan pertama program yang   //
//               memuat nama program dan penyusun//
//                                               //
// Created by Utari                              //                              
//===============================================//
//===============================================//
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

//===============================================//
//===============================================//
// Nama Fungsi : pemilihanUser                   //
// Input       : Void                            //
// Output      : Void                            //
// Deskripsi   : Menampilkan pilihan jenis user  //
//                                               //
// Created by Utari                              //                              
//===============================================//
//===============================================//
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

//===============================================//
//===============================================//
// Nama Fungsi : box                             //
// Input       : Int a, Int b, Int c, Int d      //
// Output      : Char                            //
// Deskripsi   : Membentuk box dengan 2 garis    //
//               pinggir menggunakan looping     //
//                                               //
// Created by Utari                              //                              
//===============================================//
//===============================================//
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

//===============================================//
//===============================================//
// Nama Fungsi : box1                            //
// Input       : Int a, Int b, Int c, Int d      //
// Output      : Char                            //
// Deskripsi   : Membentuk box dengan 1 garis    //
//               pinggir menggunakan looping     //
//                                               //
// Created by Utari                              //                              
//===============================================//
//===============================================//
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

//===============================================//
//===============================================//
// Nama Fungsi : signup                          //
// Input       : Struct data                     //
// Output      : String                          //
// Deskripsi   : Akses membuat akun untuk peng-  //
//               guna baru                       //
//                                               //
// Created by Utari                              //                              
//===============================================//
//===============================================//
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

//===============================================//
//===============================================//
// Nama Fungsi : Login                           //
// Input       : Char username, char password    //
// Output      : String                          //
// Deskripsi   : Akses login untuk pengguna yang //
//               telah memiliki akun             //
//                                               //
// Created by Utari                              //                              
//===============================================//
//===============================================//
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
        box1(40,12,107,30);
        if(compare1==0 && compare2!=0)
        {
            bersih();
            setcolor(10);
            box1(40,12,107,30);
            setcolor(4);
            koor(50,25); printf("Password anda salah!");
            koor(50,26); printf("Masukkan ulang data");
            ulang=ulang+1;
        }
        else if(compare1!=0 && compare2==0)
        {
            bersih();
            setcolor(10);
            box1(40,12,107,30);
            setcolor(4);
            koor(50,25); printf("Username anda salah!");
            koor(50,26); printf("Masukkan ulang data");
            ulang=ulang+1;
        }
        else if(compare1!=0 && compare2!=0)
        {
            bersih();
            setcolor(10);
            box1(40,12,107,30);
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
        koor(67,28); printf("Welcome %s!", username);
        koor(67,29); printf("wait...........");
        sleep(5);
        menuFitur();
    }
    else
    {
        bersih();
        setcolor(10);
        box(30,7,117,35);
        box1(40,12,107,30);
        setcolor(4);
        koor(68,21); printf("Login Gagal!");
        koor(53,22); printf("Silahkan melakukan rerun program untuk login ulang");
        sleep(100);
        ExitProcess(login);
    }
}

//===============================================//
//===============================================//
// Nama Fungsi : menuAwal                       //
// Input       : int panjangX,int panjangY,      // 
//               int button,int kode, int pilihan//
// Output      : String                          //
// Deskripsi   : Fungsi untuk user melakukan pe- //
//               milihan jenis user              //
//                                               //
// Created by Utari                              //                              
//===============================================//
//===============================================//
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

    //Opsi untuk memindahkan pilihan jenis user
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
        for(int i=40; i<108; i++)
        {
            koor(i,23); printf("%c", 179);
            koor(i,27); printf("%c", 179);
        }
        koor(45, 15); printf("1.Sign Up");
        koor(45, 18); printf("2.Sign In");
        koor(45, 25); printf("Masukkan Pilihan Anda : ");
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
 // Fitur Hitung BMI
    Loading();
    Main_Menu_BMI();
    up_or_down();
    result_BMI();
    printf("\n");
    Sleep(6);
    backreg();
}
getch();
return 0;
}

//===============================================//
//===============================================//
// Nama Fungsi : menuFitur                       //
// Input       : Void                            //
// Output      : Void                            //
// Deskripsi   : Fungsi untuk user melakukan pe- //
//               pemilihan fitur                 //
//                                               //
// Created by Utari                              //
//===============================================//
//===============================================//
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
        else if(button==80 && panjangY==27)
        {
            panjangY=30;
        }
        else if(button==72 && panjangY==30)
        {
            panjangY=27;
        }

    }while (button!=13);

    if(panjangX==46 && panjangY==15)
    {
        //Fitur hitung bmi
        Loading();
        Main_Menu_BMI();
        up_or_down();
        result_BMI();
        printf("\n");
        Sleep(6);
        backpremium();
    }
    else if(panjangX==46 && panjangY==18)
    {
        //Fitur menu sehat
        Loading();
        utama_sehat();
        Rekomendasi_makanan();
        delay(10000);
        backpremium();
    }
    else if(panjangX==46 && panjangY==21)
    {
        //fitur hitung kalori
        Loading();
        utama();
        delay(10000);
        backpremium();
    }
    else if(panjangX==46 && panjangY==24)
    {
        //fitur tracker
        tracker(pilihan, penurunan1, penurunan2, kenaikan1 , kenaikan2, bulanPertama, bulanKedua, bulanKetiga);
        printf("\n");
        delay(10000);
        backpremium();
    }
    else if(panjangX==46 && panjangY==27)
    {
        //fitur tanya dokter
         mainTanyaDokter (hari, dokter, pengguna, userID, password, panjangX, panjangY, button);
         printf("\n");
         delay(10000);
         backpremium();
    }
    else if(panjangX==46 && panjangY==30){
        //Fitur Bakar Kalori
        Loading();
        perhitungankalorisaatolahraga();
        delay(10000);
        backpremium();
    }
    getch();
}

//===============================================//
//===============================================//
// Nama Fungsi : Fitur                           //
// Input       : Void                            //
// Output      : Void                            //
// Deskripsi   : Menampilkan pilihan fitur       //
//                                               //
// Created by Utari                              //
//===============================================//
//===============================================//
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
    koor(50,30); printf("Bakar Kalori");
}

//===============================================//
//===============================================//
// Nama Fungsi : Tanggal_Waktu                   //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : Menampilkan tanggal dan waktu   //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void Tanggal_Waktu(){
    time_t current;
    time(&current);

    koor(15,10);printf("%s", ctime(&current));

    struct tm*local = localtime(&current);

    tanggal = local->tm_mday;
    bulan1  = local->tm_mon + 1;
    tahun   = local->tm_year + 1900;
    Jam     = local->tm_hour;
    Menit   = local->tm_min;
    Detik   = local->tm_sec;

    if (Jam < 12){
        koor(15,11);
        printf("%02d:%02d:%02d\n", Jam,Menit,Detik);
    }
    else{
        koor(15,11);
        printf("%02d:%02d:%02d\n", Jam-12,Menit,Detik);
    }
    koor(15,12);
    printf("%02d/%02d/%d\n", tanggal,bulan1,tahun);
}

//------Fungsi Dalam Fitur Penghitungan BMI------//

//===============================================//
//===============================================//
// Nama Fungsi : Loading                         //
// Input       : void                            //
// Output      : String                          //
// Deskripsi   : Jeda dari satu fungsi ke fungsi //
//               lainnya                         //
//                                               //
// Created by Utari                              //
// Updated by Herry                              //
//===============================================//
//===============================================//
void Loading(){
    bersih();
    setcolor(10);
    box(10,7,117,35);
    box1(35,16,90,32);
    koor(49,22);
    setcolor(7);
    printf("W E I G H T  T R A C K E R");
    koor(60,24);
    printf("B Y");
    koor(52,26);
    printf("Darryl Utari Herry");
    koor(46,28);
    for(int i=1 ; i<=10; i++){
        setcolor(10);
        printf(" %c ",223);
        Sleep(180); } }

//===============================================//
//===============================================//
// Nama Fungsi : Loading2                        //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : Jeda dari satu fungsi ke fungsi //
//               lainnya                         //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void Loading2(){
     for(int i=1 ; i<=10; i++){
        setcolor(10);
        printf(" %c ",223);
        Sleep(180); } }

//===============================================//
//===============================================//
// Nama Fungsi : Main_Menu_BMI                   //
// Input       : Int qna1                        //
// Output      : String                          //
// Deskripsi   : Menampilkan deskripsi program   //
//               dan juga usia user              //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void Main_Menu_BMI(){
   bersih();
   setcolor(10);
   box(5,7,116,30);
   setcolor(7);
   Tanggal_Waktu();
   box1(45,16,80,22);
   setcolor(7);
   koor(48,19);printf("Program Perhitungan Badan Ideal\n");
   koor(56,24);printf("Selamat datang\n");
   koor(50,25);printf("Program ini dapat  membantu\n");
   koor(50,26);printf("anda dalam menentukan tubuh\n");
   koor(50,27);printf("yang ideal pada bayi,balita\n");
   koor(50,28);printf(",remaja,hingga dewasa.\n");
   setcolor(10);
   box(5,31,116,35);
   setcolor(7);
   koor(50,33);printf("Tentukan opsi di bawah ini\n");
   setcolor(10);
   box(5,36,116,55);
   setcolor(7);
   koor(20,40);printf("No\n");
   koor(45,40);printf("Kategori");
   koor(70,40);printf("Rentan Usia");
   koor(100,40);printf("Kode");
   koor(20,42);printf("1");koor(45,42);printf("Bayi");koor(70,42);printf("0-6   bulan");koor(100,42);printf("1");
   koor(20,44);printf("2");koor(45,44);printf("Bayi");koor(70,44);printf("7-12  bulan");koor(100,44);printf("2");
   koor(20,46);printf("3");koor(45,46);printf("Anak-anak");koor(70,46);printf("1-10  tahun");koor(100,46);printf("3");
   koor(20,48);printf("4");koor(45,48);printf("Remaja");koor(70,48);printf("11-18 tahun");koor(100,48);printf("4");
   koor(20,50);printf("5");koor(45,50);printf("Dewasa");koor(70,50);printf("19-60 tahun");koor(100,50);printf("5");
   setcolor(10);
   box(5,56,116,60);
   setcolor(7);
   koor(15,58);printf("Masukkan Kode : ");
   scanf("%d", &qna1);
   ask1();
}

//===============================================//
//===============================================//
// Nama Fungsi : ask1                            //
// Input       : Int gender, int age1, int BBL   //
// Output      : String                          //
// Deskripsi   : Menghitung BMI user sesuai      //
//               dengan jenis kelamin            //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void ask1(){
   bersih();
   Loading();
   bersih();
   switch(qna1){
        case 1:
        setcolor(10);
        box(5,5,116,9);
        setcolor(7);
        koor(50,7);printf("Tentukan jenis kelamin");
        setcolor(10);
        box(5,10,116,20);
        setcolor(7);
        koor(30,14);printf("%c Tekan 1 untuk Laki-laki",62);
        koor(73,14);printf("%c Tekan 2 untuk Perempuan",62);
        setcolor(10);
        box(5,22,116,35);
        setcolor(7);
        koor(20,25);printf("Jawaban anda : ");
        scanf("%d",&gender);
        koor(20,27);printf("Masukkan usia dalam bulan       : ");
        scanf("%lf", &age1);
        koor(20,29);printf("Masukkan BBL bayi anda dalam kg : ");
        scanf("%lf", &BBL);
        hasil = Calculate_BMI();
        koor(20,31);printf("BBL anda adalah %.2lf g\n", hasil);
        Final_BMI();
        break;
        case 2:
        setcolor(10);
        box(5,5,116,9);
        setcolor(7);
        koor(50,7);printf("Tentukan jenis kelamin");
        setcolor(10);
        box(5,10,116,20);
        setcolor(7);
        koor(30,14);printf("%c Tekan 1 untuk Laki-laki",62);
        koor(73,14);printf("%c Tekan 2 untuk Perempuan",62);
        setcolor(10);
        box(5,22,116,35);
        setcolor(7);
        koor(20,25);printf("Jawaban anda : ");
        scanf("%d",&gender);
        koor(20,27);printf("Masukkan usia dalam bulan       : ");
        scanf("%lf", &age1);
        koor(20,29);printf("Masukkan berat badan dalam  kg  : ");
        scanf("%lf", &BBL);
        hasil = Calculate_BMI();
        koor(20,31);printf("BBL anda adalah %.2lf g\n", hasil);
        Final_BMI();
        break;
        case 3:
        setcolor(10);
        box(5,5,116,9);
        setcolor(7);
        koor(50,7);printf("Tentukan jenis kelamin");
        setcolor(10);
        box(5,10,116,20);
        setcolor(7);
        koor(30,14);printf("%c Tekan 1 untuk Laki-laki",62);
        koor(73,14);printf("%c Tekan 2 untuk Perempuan",62);
        setcolor(10);
        box(5,22,116,38);
        setcolor(7);
        koor(20,25);printf("Jawaban anda : ");
        scanf("%d",&gender);
        koor(20,27);printf("Masukkan berat badan dalam kg : ");
        scanf("%lf", &mess);
        koor(20,29);printf("Masukkan usia dalam tahun     : ");
        scanf("%lf", &age1);
        koor(20,31);printf("Lebih berapa bulan ?");
        koor(20,32);printf("Jika bulan ini tepat dengan hari ulang tahun anda maka ketikanlah 0");
        koor(20,33);printf("Jawaban anda : ");
        scanf("%lf",&bulan);
        hasil = Calculate_BMI();
        koor(20,35);printf("BBL anda adalah %.2lf kg", hasil);
        Final_BMI();
        break;
        case 4:
        setcolor(10);
        box(5,20,116,40);
        setcolor(7);
        koor(18,26);printf("Masukkan berat badan dalam kg");
        setcolor(10);
        box(55,25,80,27);setcolor(7);koor(58,26);scanf("%lf", &mess);
        koor(18,29);printf("Masukkan usia dalam tahun");
        setcolor(10);
        box(55,28,80,30);setcolor(7);koor(58,29);scanf("%lf", &age1);
        koor(18,32);printf("Masukkan tinggi badan dalam cm   ");
        setcolor(10);
        box(55,31,80,33);setcolor(7);koor(58,32);scanf("%lf", &height);
        hasil = Calculate_BMI();
        koor(52,35);Loading2();
        bersih();
        setcolor(10);
        box(34,22,90,28);
        setcolor(7);
        koor(52,24);printf("BBI anda adalah %.2lf kg\n", hasil);
        Final_BMI();
        break;
        case 5:
        setcolor(10);
        box(5,20,116,40);
        setcolor(7);
        koor(18,26);printf("Masukkan berat badan dalam kg");
        setcolor(10);
        box(55,25,80,27);setcolor(7);koor(58,26);scanf("%lf", &mess);
        koor(18,29);printf("Masukkan usia dalam tahun");
        setcolor(10);
        box(55,28,80,30);setcolor(7);koor(58,29);scanf("%lf", &age1);
        koor(18,32);printf("Masukkan tinggi badan dalam cm   ");
        setcolor(10);
        box(55,31,80,33);setcolor(7);koor(58,32);scanf("%lf", &height);
        hasil = Calculate_BMI();
        koor(52,35);Loading2();
        bersih();
        setcolor(10);
        box(34,22,90,28);
        setcolor(7);
        koor(52,24);printf("BMI anda adalah %.2lf kg/m^2\n", hasil);
        Final_BMI();
        break;
        default:
        printf("Data yang anda masukkan salah");
        break;
    }
}

//===============================================//
//===============================================//
// Nama Fungsi : Calculate_BMI                   //
// Input       : Void                            //
// Output      : Int                             //
// Deskripsi   : Menampilkan hasil penghitungan  //
//               BMI                             //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
double Calculate_BMI(){

    if(qna1 == 1){
    if((age1 >= 0 && age1 <= 6) && (BBL > 0)){
        return ((age1*600) + (BBL*1000));
    }
    }
    else if(qna1 == 2){
        if((age1 >= 7 && age1 <= 12) && (age1 >= 0)){
            return (BBL*1000) + (age1*500);
        }
    }
    else if(qna1 == 3){
        if((age1 >= 1 && age1 <=10) && (bulan >= 0 && bulan <= 12)){
            if(bulan == 12){
                return (2*(age1+1)+8);
            }
            else if(bulan >= 3 || bulan <= 4){
                return (((2*(age1 + 1))+8));
            }else{
                return ((2*age1)+8);
         }
       }
    }

    else if(qna1 == 4){
        if(age1 > 10 && age1 <= 18){
            return(height - 100)-((height-100)*0.1);
        }
    }
    else if(qna1 == 5){
        if(age1 >= 19 && age1 <= 60){
            return (mess/((height/100)*(height/100)));
    }
  }
}

//===============================================//
//===============================================//
// Nama Fungsi : saran                           //
// Input       : Void                            //
// Output      : Int                             //
// Deskripsi   : Menampilkan BMI normal dari user//
//               tersebut                        //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
double saran(){

    hasil = Calculate_BMI();

    if(qna1== 1){
        if(gender == 1){
           if(age1 == 0.0){
              if(hasil < 2500){
                return 2500 - hasil;
            }
              else if(hasil > 4400){
                return hasil - 4400;
            }
        }
        else if(age1 == 1.0){
            if(hasil < 3400){
                return 3400 - hasil;
            }
            else if(hasil > 5800){
                return 5800 - hasil;
            }
        }
        else if(age1 == 2.0){
            if(hasil < 4300){
                return 4300 - hasil;
            }
            else if(hasil > 7100){
                return 7100 - hasil;
            }
        }
        else if(age1 == 3.0){
            if(hasil < 5000){
                return 5000 - hasil;
            }
            else if(hasil > 8000){
                return hasil - 8000;
            }
        }
        else if(age1 == 4.0){
            if(hasil < 5600){
                return 5600 - hasil;
            }
            else if(hasil > 8700){
                return hasil - 8700;
            }
        }
        else if(age1 == 5.0){
            if(hasil < 6000){
                return 6000 - hasil;
            }
            else if(hasil > 9300){
                return hasil - 9300;
            }
        }
        else if(age1 == 6.0){
            if(hasil < 6400){
                return 6400 - hasil;
            }
            else if(hasil > 9800){
                return hasil - 9800;
            }
        }
    }
    if(gender == 2){
        if(age1 == 0.0){
              if(hasil < 2400){
                return 2400 - hasil;
            }
              else if(hasil > 4200){
                return hasil - 4200;
            }
        }
        else if(age1 == 1.0){
            if(hasil < 3200){
                return 3200 - hasil;
            }
            else if(hasil > 5500){
                return 5500 - hasil;
            }
        }
        else if(age1 == 2.0){
            if(hasil < 3900){
                return 3900 - hasil;
            }
            else if(hasil > 6600){
                return 6600 - hasil;
            }
        }
        else if(age1 == 3.0){
            if(hasil < 4500){
                return 4500 - hasil;
            }
            else if(hasil > 7500){
                return hasil - 7500;
            }
        }
        else if(age1 == 4.0){
            if(hasil < 5000){
                return 5000 - hasil;
            }
            else if(hasil > 8200){
                return hasil - 8200;
            }
        }
        else if(age1 == 5.0){
            if(hasil < 5400){
                return 5400 - hasil;
            }
            else if(hasil > 8800){
                return hasil - 8800;
            }
        }
        else if(age1 == 6.0){
            if(hasil < 5700){
                return 5700 - hasil;
            }
            else if(hasil > 9300){
                return hasil - 9300;
            }
        }
    }
   }
   else if(qna1 == 2){
        if(gender == 1){
           if(age1 == 7.0){
              if(hasil < 6700){
                return 6700 - hasil;
            }
              else if(hasil > 10300){
                return hasil - 10300;
            }
        }
        else if(age1 == 8.0){
            if(hasil < 6900){
                return 6900 - hasil;
            }
            else if(hasil > 10700){
                return 10700 - hasil;
            }
        }
        else if(age1 == 9.0){
            if(hasil < 7100){
                return 7100 - hasil;
            }
            else if(hasil > 11000){
                return 11000 - hasil;
            }
        }
        else if(age1 == 10.0){
            if(hasil < 7400){
                return 7400 - hasil;
            }
            else if(hasil > 11400){
                return hasil - 11400;
            }
        }
        else if(age1 == 11.0){
            if(hasil < 7600){
                return 5600 - hasil;
            }
            else if(hasil > 11700){
                return hasil - 11700;
            }
        }
        else if(age1 == 12.0){
            if(hasil < 7700){
                return 77000 - hasil;
            }
            else if(hasil > 12000){
                return hasil - 12000;
            }
         }
      }
      else if(gender == 2){
        if(age1 == 7.0){
              if(hasil < 6000){
                return 6000 - hasil;
            }
              else if(hasil > 9800){
                return hasil - 9800;
            }
        }
        else if(age1 == 8.0){
            if(hasil < 6300){
                return 6300 - hasil;
            }
            else if(hasil > 10200){
                return 10200 - hasil;
            }
        }
        else if(age1 == 9.0){
            if(hasil < 6500){
                return 6500 - hasil;
            }
            else if(hasil > 10500){
                return 10500 - hasil;
            }
        }
        else if(age1 == 10.0){
            if(hasil < 6700){
                return 6700 - hasil;
            }
            else if(hasil > 10900){
                return hasil - 10900;
            }
        }
        else if(age1 == 11.0){
            if(hasil < 6900){
                return 6900 - hasil;
            }
            else if(hasil > 11200){
                return hasil - 11200;
            }
        }
        else if(age1 == 12.0){
            if(hasil < 7000){
                return 7000 - hasil;
            }
            else if(hasil > 10500){
                return hasil - 10500;
            }
         }
      }
   }
   else if(qna1 == 3 || qna1 == 4){

        if(hasil > mess){
            return hasil - mess;
        }
        else if(hasil < mess){
            return mess - hasil;
        }
   }
   else if(qna1 == 5){
        if(hasil < 18.5){
            return 18.5 - hasil;
        }
        else if(hasil > 24.9){
            return hasil - 24.9;
        }
   }
}

//===============================================//
//===============================================//
// Nama Fungsi : up_or_down                      //
// Input       : int qna2                        //
// Output      : String                          //
// Deskripsi   : Fungsi untuk user melakukan pen-//
//               cetakan file                    //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void up_or_down(){

    printf("\n");
    printf("\n");
    setcolor(10);
    box1(5,37,55,56);
    box1(5,37,55,41);
    setcolor(7);
    koor(9,39);printf("   Cetak pada file dengan menekan angka    ");
    koor(7,43);printf("  Angka            Keterangan              ");
    koor(7,46);printf("    1     untuk kategori kekurangan gizi   ");
    koor(7,47);printf("          atau kekurangan berat badan      ");
    koor(7,49);printf("    0     untuk kategori gizi normal       ");
    koor(7,50);printf("          atau berat badan ideal           ");
    koor(7,52);printf("    2     untuk kategori kelebihan gizi    ");
    koor(7,53);printf("          atau kelebihan berat badan       ");
    setcolor(10);
    box(5,58,116,62);
    setcolor(7);
    koor(15,60);printf("Jawaban anda : ");
    scanf ("%d",&qna2);
    printf("\n");
}

//===============================================//
//===============================================//
// Nama Fungsi : Final_BMI                       //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : Menampilkan hasil kategori dari //
//               BMI user                        //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void Final_BMI(){

    hasil = Calculate_BMI();

    if(qna1 == 1){
    if((gender == 1 && age1 == 0.0) && (hasil < 2100)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 0.0) && (hasil >= 2100 && hasil < 2500)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 0.0) && (hasil >= 2500 && hasil < 4400)){
        koor(20,33);printf("\nKategori gizi normal");
    }else if((gender == 1 && age1 == 0.0) && (hasil >= 4400)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 1.0) && (hasil < 2900)){
        koor(20,33);printf("\nKategori gizi buruk");
    }else if((gender == 1 && age1 == 1.0) && (hasil >= 2900 && hasil < 3400)){
        koor(20,33);printf("\nKategori gizi kurang");
    }else if((gender == 1 && age1 == 1.0) && (hasil >= 3400 && hasil < 5800)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 1.0) && (hasil >= 5800)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 2.0) && (hasil < 3800)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 2.0) && (hasil >= 3800 && hasil < 4300)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 2.0) && (hasil >= 4300 && hasil < 7100)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 2.0) && (hasil >= 7100)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 3.0) && (hasil < 4400)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 3.0) && (hasil >= 4400 && hasil < 5000)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 3.0) && (hasil >= 5000 && hasil < 8000)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 3.0) && (hasil >= 8000)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 4.0) && (hasil < 4900)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 4.0) && (hasil >= 4900 && hasil < 5600)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 4.0) && (hasil >= 5600 && hasil < 8700)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 4.0) && (hasil >= 8700)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 5.0) && (hasil < 5300)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 5.0) && (hasil >= 5300 && hasil < 6000)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 5.0) && (hasil >= 6000 && hasil < 9300)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 5.0) && (hasil >= 9300)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 6.0) && (hasil < 5700)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 6.0) && (hasil >= 5700 && hasil < 6400)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 6.0) && (hasil >= 6400 && hasil < 9800)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 6.0) && (hasil >= 9800)){
        koor(20,33);printf("Kategori gizi lebih");
    }
    if((gender == 2 && age1 == 0.0) && (hasil < 2000)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 0.0) && (hasil >= 2000 && hasil < 2400)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 0.0) && (hasil >= 2400 && hasil < 4200)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 0.0) && (hasil >= 4200)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 2 && age1 == 1.0) && (hasil < 2700)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 1.0) && (hasil >= 2700 && hasil < 3200)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 1.0) && (hasil >= 3200 && hasil < 5500)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 1.0) && (hasil >= 5500)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 2 && age1 == 2.0) && (hasil < 3400)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 2.0) && (hasil >= 3400 && hasil < 3900)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 2.0) && (hasil >= 3900 && hasil < 6600)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 2.0) && (hasil >= 6600)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 2 && age1 == 3.0) && (hasil < 4000)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 3.0) && (hasil >= 4000 && hasil < 4500)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 3.0) && (hasil >= 4500 && hasil < 7500)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 3.0) && (hasil >= 7500)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 2 && age1 == 4.0) && (hasil < 4400)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 4.0) && (hasil >= 4400 && hasil < 5000)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 4.0) && (hasil >= 5000 && hasil < 8200)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 4.0) && (hasil >= 8200)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 2 && age1 == 5.0) && (hasil < 4800)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 5.0) && (hasil >= 4800 && hasil < 5400)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 5.0) && (hasil >= 5400 && hasil < 8800)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 5.0) && (hasil >= 8800)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 2 && age1 == 6.0) && (hasil < 5100)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 6.0) && (hasil >= 5100 && hasil < 5700)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 6.0) && (hasil >= 5700 && hasil < 9300)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 6.0) && (hasil >= 9300)){
        koor(20,33);printf("Kategori gizi lebih");
    }
  }
    else if(qna1 == 2){
    if((gender == 1 && age1 == 7.0) && (hasil < 5900)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 7.0) && (hasil >= 5900 && hasil < 6700)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 7.0) && (hasil >= 6700 && hasil < 10300)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 7.0) && (hasil >= 10300)){
        koor(20,33);printf("Kategori gizi lebih");
    }
    else if((gender == 1 && age1 == 8.0) && (hasil < 6200)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 8.0) && (hasil >= 6200 && hasil < 6900)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 8.0) && (hasil >= 6900 && hasil < 10700)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 8.0) && (hasil >= 10700)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 9.0) && (hasil < 6400)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 9.0) && (hasil >= 6400 && hasil < 7100)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 9.0) && (hasil >= 7100 && hasil < 11000)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 9.0) && (hasil >= 11000)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 10.0) && (hasil < 6600)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 10.0) && (hasil >= 6600 && hasil < 7400)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 10.0) && (hasil >= 7400 && hasil < 11400)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 10.0) && (hasil >= 11400)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 11.0) && (hasil < 6800)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 11.0) && (hasil >= 6800 && hasil < 7600)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 11.0) && (hasil >= 7600 && hasil < 11700)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 11.0) && (hasil >= 11700)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 12.0) && (hasil < 6900)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 6900 && hasil < 7700)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 7700 && hasil < 12000)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 12000)){
        koor(20,33);printf("Kategori gizi lebih");
    }
    else if((gender == 2 && age1 == 7.0) && (hasil < 5300)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 7.0) && (hasil >= 5300 && hasil < 6000)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 7.0) && (hasil >= 6000 && hasil < 9800)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 7.0) && (hasil >= 9800)){
        koor(20,33);printf("Kategori gizi lebih");
    }
    else if((gender == 2 && age1 == 8.0) && (hasil < 5600)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 8.0) && (hasil >= 5600 && hasil < 6300)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 8.0) && (hasil >= 6300 && hasil < 10200)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 8.0) && (hasil >= 10200)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 2 && age1 == 9.0) && (hasil < 5800)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 9.0) && (hasil >= 5800 && hasil < 6500)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 9.0) && (hasil >= 6500 && hasil < 10500)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 9.0) && (hasil >= 10500)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 2 && age1 == 10.0) && (hasil < 5900)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 10.0) && (hasil >= 5900 && hasil < 6700)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 10.0) && (hasil >= 6700 && hasil < 10900)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 10.0) && (hasil >= 10900)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 2 && age1 == 11.0) && (hasil < 6100)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 2 && age1 == 11.0) && (hasil >= 6100 && hasil < 6900)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 2 && age1 == 11.0) && (hasil >= 6900 && hasil < 11200)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 2 && age1 == 11.0) && (hasil >= 11200)){
        koor(20,33);printf("Kategori gizi lebih");
    }
     else if((gender == 1 && age1 == 12.0) && (hasil < 6300)){
        koor(20,33);printf("Kategori gizi buruk");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 6300 && hasil < 7000)){
        koor(20,33);printf("Kategori gizi kurang");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 7000 && hasil < 11500)){
        koor(20,33);printf("Kategori gizi normal");
    }else if((gender == 1 && age1 == 12.0) && (hasil >= 11500)){
        koor(20,33);printf("Kategori gizi lebih");
    }
  }
    else if(qna1== 3 || qna1 == 4){
    if(mess < hasil){
        koor(51,26);printf("Kategori berat badan kurang");
    }else if(mess > hasil){
         koor(51,26);printf("Kategori berat badan berlebih");
    }else if(mess == hasil){
         koor(51,26);printf("Kategori berat badan ideal");
    }
   }
    else if(qna1 == 5){
    if(hasil < 18.5){
        koor(51,26);printf("Berat badan kurang");
    }else if(hasil >= 18.5 && hasil <= 24.9){
        koor(51,26);printf("Berat badan normal");
    }else if(hasil >= 25.0 && hasil <= 29.9){
        koor(51,26);printf("Berat badan berlebih");
    }else if(hasil >= 30.0 && hasil <= 34.9){
        koor(51,26);printf("Diabetes tingkat I");
    }else if(hasil >= 35.0 && hasil <= 39.9){
        koor(51,26);printf("Diabetes tingkat II");
    }else if(hasil >= 40.0){
        koor(51,26);printf("Diabetes tingkat III");
    }
    }
    else{
        koor(20,32);
        printf("Tidak Valid");
        koor(20,33);
        exit(1);
    }
}

//===============================================//
//===============================================//
// Nama Fungsi : result_BMI                      //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : Menulis hasil BMI user dalam    //
//               file                            //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void result_BMI(){

    hasil  = Calculate_BMI();
    double hasil_saran = saran();

    if(qna1 == 1 || qna1 == 2){
    if (qna2 == 1){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||           Version 1.0           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|\t\t%02d:%02d:%02d    %02d/%02d/%d           |\n",Jam,Menit,Detik,tanggal,bulan1,tahun);
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.lf g                            |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya peningkatan berat  |\n");
    fprintf(fpoin,"|             | badan sekitar %.lf g             |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    else if(qna2 == 2){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||           Version 1.0           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|\t\t%02d:%02d:%02d    %02d/%02d/%d           |\n",Jam,Menit,Detik,tanggal,bulan1,tahun);
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.lf g                            |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya penurunan berat    |\n");
    fprintf(fpoin,"|             | badan sekitar %.lf g             |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    else if(qna2 == 0){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||           Version 1.0           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|\t\t%02d:%02d:%02d    %02d/%02d/%d           |\n",Jam,Menit,Detik,tanggal,bulan1,tahun);
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.lf g                            |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Berat badan dinyatakan normal    |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
  }
    else if (qna1 == 3 || qna1 == 4){
    if (qna2 == 1){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||           Version 1.0           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|\t\t%02d:%02d:%02d    %02d/%02d/%d           |\n",Jam,Menit,Detik,tanggal,bulan1,tahun);
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.lf kg                             |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya peningkatan berat  |\n");
    fprintf(fpoin,"|             | badan sekitar %.lf kg              |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    else if(qna2 == 2){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||           Version 1.0           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|\t\t%02d:%02d:%02d    %02d/%02d/%d           |\n",Jam,Menit,Detik,tanggal,bulan1,tahun);
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.lf kg                             |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya penurunan berat    |\n");
    fprintf(fpoin,"|             | badan sekitar %.lf kg              |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    else if(qna2 == 0){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|\t\t%02d:%02d:%02d    %02d/%02d/%d           |\n",Jam,Menit,Detik,tanggal,bulan1,tahun);
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.lf kg                             |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Berat badan dinyatakan normal    |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
 }
    else if(qna1 == 5){
    if (qna2 == 1){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||           Version 1.0           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|\t\t%02d:%02d:%02d    %02d/%02d/%d           |\n",Jam,Menit,Detik,tanggal,bulan1,tahun);
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.lf kg/m^2                         |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya peningkatan berat  |\n");
    fprintf(fpoin,"|             | badan sekitar %.lf kg/m^2          |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    else if(qna2 == 2){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||          Beta Version           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|\t\t%02d:%02d:%02d    %02d/%02d/%d           |\n",Jam,Menit,Detik,tanggal,bulan1,tahun);
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.lf kg/m^2                         |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Diperlukannya penurunan berat    |\n");
    fprintf(fpoin,"|             | badan sekitar %.lf kg/m^2          |\n",hasil_saran);
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    else if(qna2 == 0){
    FILE*fpoin;
    fpoin = fopen("Result.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     || Program Perhitungan Badan Ideal ||      |\n");
    fprintf(fpoin,"|     ||           Version 1.0           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|\t\t%02d:%02d:%02d    %02d/%02d/%d           |\n",Jam,Menit,Detik,tanggal,bulan1,tahun);
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"| Hasil       |%.lf kg/m^2                         |\n",hasil);
    fprintf(fpoin,"| Perhitungan |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Keterangan  | Berat badan dinyatakan normal    |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    }
}

//-----Fungsi Dalam Fitur Penghitungan Kalori----//

//===============================================//
//===============================================//
// Nama Fungsi : utama                           //
// Input       : int gender                      //
// Output      : String                          //
// Deskripsi   : Menu utama untuk fitur penghi-  //
//               tungan kalori                   //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void utama(){
bersih();
   setcolor(10);
   box(5,7,116,20);
   setcolor(7);
   Tanggal_Waktu();
   setcolor(10);
   box(38,12,85,18);
   setcolor(7);
   koor(53,14);printf("Program Perhitungan");
   koor(54,16);printf("Kebutuhan Kalori");
   setcolor(10);
   box(5,21,116,23);
   setcolor(7);
   koor(52,22);printf("Tentukan jenis kelamin");
   setcolor(10);
   box(5,24,116,34);
   setcolor(7);
   koor(25,28);printf("%c Tekan 1 untuk Laki-laki",62);
   koor(75,28);printf("%c Tekan 2 untuk Perempuan",62);
   setcolor(10);
   box(5,35,116,38);
   setcolor(7);
   koor(15,36);printf("Jawaban anda : ");
   scanf("%d",&gender);
   koor(52,42);Loading2();
   bersih();
   setcolor(10);
    box(5,20,116,40);
    setcolor(7);
        koor(18,26);printf("Masukkan berat badan dalam kg");
        setcolor(10);
        box(55,25,80,27);setcolor(7);koor(58,26);scanf("%lf", &mess);
        setcolor(7);
        koor(18,29);printf("Masukkan usia dalam tahun");
        setcolor(10);
        box(55,28,80,30);setcolor(7);koor(58,29);scanf("%lf", &age1);
        setcolor(7);
        koor(18,32);printf("Masukkan tinggi badan dalam cm   ");
        setcolor(10);
        box(55,31,80,33);setcolor(7);koor(58,32);scanf("%lf", &height);
    tanya();
}

//===============================================//
//===============================================//
// Nama Fungsi : BMR                             //
// Input       : Void                            //
// Output      : int                             //
// Deskripsi   : Menampilkan hasil sesuai dengan //
//               gender                          //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
double BMR(){

    if(gender == 1){
        return 88.4 + (13.4*mess) + (4.8*height) - (5.68*age1);
    }
    else if(gender == 2){
        return 447.6 + (9.25*mess) + (3.1*height) - (4.33*age1);
    }
}

//===============================================//
//===============================================//
// Nama Fungsi : tanya                           //
// Input       : int ask                         //
// Output      : String                          //
// Deskripsi   : Pemilihan level aktivitas fisik //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void tanya(){

    printf("\n");
    printf("\n");
    printf("\n");
    setcolor(10);
    koor(5,44);printf("+----------------------------------+\n");
    koor(5,45);printf("|Tentukan level aktivitas fisik    |\n");
    koor(5,46);printf("+---+-------------+----------------+\n");
    koor(5,47);printf("|No | Level       |  Tekan Angka   |\n");
    koor(5,48);printf("+---+-------------+----------------+\n");
    koor(5,49);printf("| 1 |Tidak aktif  |      (1)       |\n");
    koor(5,50);printf("| 2 |Cukup aktif  |      (2)       |\n");
    koor(5,51);printf("| 3 |Aktif        |      (3)       |\n");
    koor(5,52);printf("| 4 |Sangat aktif |      (4)       |\n");
    koor(5,53);printf("+---+-------------+----------------+\n");
    setcolor(10);
    box(5,57,116,75);
    setcolor(7);koor(10,59);printf("Jawaban anda : ");
    scanf ("%d", &ask);
    koor(10,62);hasil_TEE = TEE();
    koor(10,63);printf("Total energi anda sebesar %.2lf kcals",hasil_TEE);
    koor(10,65);result_TEE();
}

//===============================================//
//===============================================//
// Nama Fungsi : TEE                             //
// Input       : Void                            //
// Output      : Int                             //
// Deskripsi   : Menampilkan hasil saat input ask//
//               sama dengan 1                   //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
double TEE(){

    bmr = BMR();

    if(ask == 1){
      return bmr*1.2;
    }else if(ask == 2){
      return bmr*1.375;
    }else if(ask == 3){
      return bmr*1.55;
    }else if(ask == 4){
      return bmr*1.725;
    }
}

//===============================================//
//===============================================//
// Nama Fungsi : Final_TEE                       //
// Input       : Void                            //
// Output      : Int                             //
// Deskripsi   : Menampilkan perbandingan TEE    //
//               sesuai dengan gender            //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
double Final_TEE(){

    hasil_TEE = TEE();

    if(gender == 1){
        if(hasil_TEE < 2500){
            return 2500 - hasil_TEE;
        }else if(hasil_TEE > 2500){
            return hasil_TEE - 2500;
        }
    }
     else if(gender == 2){
        if(hasil_TEE < 2000){
            return 2000 - hasil_TEE;
        }else if(hasil_TEE > 2000){
            return hasil_TEE - 2500;
        }
    }
}

//===============================================//
//===============================================//
// Nama Fungsi : result_TEE                      //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : Menampilkan hasil dari analisis //
//               perhitungan kalori              //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void result_TEE(){

    hasiltee = Final_TEE();

     if(gender == 1){
        if(hasil_TEE < 2500){
            printf("Kebutuhan kalori anda kurang sehingga perlu ditambah sebesar %.2lf kcals agar stabil\n", hasiltee);
        }else if(hasil_TEE > 2500){
            printf("Kebutuhan kalori anda lebih sehingga perlu dikurangi sebesar %.2lf kcals agar stabil\n", hasiltee);
        }
     if(gender == 2){
        if(hasil_TEE < 2000){
            printf("Kebutuhan kalori anda kurang sehingga perlu ditambah sebesar %.2lf kcals agar stabil\n", hasiltee);
        }else if(hasil_TEE > 2000){
            printf("Kebutuhan kalori anda lebih sehingga perlu dikurangi sebesar %.2lf kcals agar stabil\n", hasiltee);
        }
    }

    }
}

//--------Fungsi Dalam Fitur Tanya Dokter--------//

//===============================================//
//===============================================//
// Nama Fungsi : tanyaDokter                     //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : Menampilkan pilihan hari untuk  //
//               sesi konsultasi                 //
//                                               //
// Created by Utari                              //
//===============================================//
//===============================================//
int tanyaDokter (int hari, int dokter){
    bersih();
    setcolor(10);
    box(30,7,117,35);
    box1(40,12,107,30);
    box1(66,14,82,16);
    TanggalWaktu();
    koor(68,15); printf("TANYA DOKTER");
    koor(45,18); printf("Pilih hari untuk sesi tanya jawab : ");
    koor (50,20); printf("Senin");
    koor (50,22); printf("Selasa");
    koor (50,24); printf("Rabu");
    koor (50,26); printf("Kamis");
    koor (50,28); printf("Jumat");

    printf("\n\n\n");
}

//===============================================//
//===============================================//
// Nama Fungsi : mainTanyaDokter                 //
// Input       : int hari, int dokter,           //
//               int pengguna, int userID, char  //
//               password, int panjangX,int      //
//               panjangY,int button             //
// Output      : String                          //
// Deskripsi   : Menu utama dari fitur tanya     //
//               dokter                          //
//                                               //
// Created by Utari                              //
//===============================================//
//===============================================//
void mainTanyaDokter (int hari, int dokter, int pengguna, int userID, char password, int panjangX,int panjangY,int button)
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

//---Fungsi dalam Fitur Rekomendasi Menu Sehat---//

//===============================================//
//===============================================//
// Nama Fungsi : utama_sehat                     //
// Input       : int bmi                         //
// Output      : String                          //
// Deskripsi   : Menampilkan menu utama fitur    //
//               rekomendasi menu sehat          //
//                                               //
// Created by Darryl                             //
// Updated by Herry                              //
//===============================================//
//===============================================//
void utama_sehat(){
bersih();
Tanggal_Waktu();
setcolor(10);
box(12,7,117,60);

    koor(45,10);printf("||=================================||");
    koor(45,11);printf("||         Rekomendasi Menu        ||");
    koor(45,12);printf("||          Makanan Sehat          ||");
    koor(45,13);printf("||=================================||");

    koor(15,15);printf("+-----------------------------------------------------------------------+\n");
    koor(15,16);printf("|                                                                       |\n");
    koor(15,17);printf("+-----------------------------------------------------------------------+\n");
    koor(15,18);printf("|Tentukan range BMI anda :                                              |\n");
    koor(15,19);printf("|                                                                       |\n");
    koor(15,20);printf("|       1. BMI < 17.0  (Sangat Kurus)                                   |\n");
    koor(15,21);printf("|       2. 17.0 - 18.4 (Kurus)                                          |\n");
    koor(15,22);printf("|       3. 18.5 - 25.0 (Normal)                                         |\n");
    koor(15,23);printf("|       4. 25.1 - 27.0 (Gemuk)                                          |\n");
    koor(15,24);printf("|       5. 27.0 < BMI  (Sangat Gemuk)                                   |\n");
    koor(15,25);printf("|                                                                       |\n");
    koor(15,26);printf("| Input nomor sesuai dengan BMI anda                                    |\n");
    koor(15,27);printf("+-----------------------------------------------------------------------+\n");
    koor(15,28);printf("Jawaban anda : ");
    scanf ("%d",&bmi);
    koor(15,29);printf("\n");
    koor(15,30);printf("\n");
    koor(15,31);printf("\n");

    if(bmi == 1){
        koor(15,34);printf("+-----------------------------------------------------------------------+\n");
        koor(15,35);printf("|Anda sangat kekurangan gizi                                            |\n");
        koor(15,36);printf("+-----------------------------------------------------------------------+\n");
        koor(15,37);printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        koor(15,38);printf("|                                                                       |\n");
        koor(15,39);printf("|       1. Kentang                                                      |\n");
        koor(15,40);printf("|       2. Nasi                                                         |\n");
        koor(15,41);printf("|       3. Susu                                                         |\n");
        koor(15,42);printf("|       4. Kacang                                                       |\n");
        koor(15,43);printf("|       5. Alpukat                                                      |\n");
        koor(15,44);printf("|       6. Daging Merah                                                 |\n");
        koor(15,45);printf("|                                                                       |\n");
        koor(15,46);printf("| Dapat disimpulkan bahwa,                                              |\n");
        koor(15,47);printf("| Anda harus mengonsumsi makanan dengan kadar protein dan               |\n");
        koor(15,48);printf("| karbohidrat yang tinggi.                                              |\n");
        koor(15,49);printf("+-----------------------------------------------------------------------+\n");
        }
    else if(bmi == 2){
        koor(15,34);printf("+-----------------------------------------------------------------------+\n");
        koor(15,35);printf("|Anda kekurangan gizi                                                   |\n");
        koor(15,36);printf("+-----------------------------------------------------------------------+\n");
        koor(15,37);printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        koor(15,38);printf("|                                                                       |\n");
        koor(15,39);printf("|       1. Roti                                                         |\n");
        koor(15,40);printf("|       2. Nasi                                                         |\n");
        koor(15,41);printf("|       3. Tempe                                                        |\n");
        koor(15,42);printf("|       4. Tahu                                                         |\n");
        koor(15,43);printf("|       5. Keju                                                         |\n");
        koor(15,44);printf("|       6. Daging                                                       |\n");
        koor(15,45);printf("|                                                                       |\n");
        koor(15,46);printf("| Dapat disimpulkan bahwa,                                              |\n");
        koor(15,47);printf("| Anda harus mengonsumsi makanan dengan kadar protein dan               |\n");
        koor(15,48);printf("| karbohidrat yang seimbang.                                            |\n");
        koor(15,49);printf("+-----------------------------------------------------------------------+\n");
        }
    else if(bmi == 3){
        koor(15,34);printf("+-----------------------------------------------------------------------+\n");
        koor(15,35);printf("| Anda sehat                                                            |\n");
        koor(15,36);printf("+-----------------------------------------------------------------------+\n");
        koor(15,37);printf("| Anda bebas mengonsumsi makanan apa saja.                              |\n");
        koor(15,38);printf("| Dengan catatan, gizi dalam setiap makanan yang anda                   |\n");
        koor(15,39);printf("| konsumsi seimbang dan tidak berlebihan.                               |\n");
        koor(15,40);printf("|                                                                       |\n");
        koor(15,41);printf("| Anda harus tetap memerhatikan 4 Sehat 5 Sempurna setiap kali          |\n");
        koor(15,42);printf("| anda mengonsumsi makanan agar tidak kekurangan maupun kelebihan gizi  |\n");
        koor(15,43);printf("+-----------------------------------------------------------------------+\n");
        }
     else if(bmi == 4){
        koor(15,34);printf("+-----------------------------------------------------------------------+\n");
        koor(15,35);printf("|Anda kelebihan gizi                                                    |\n");
        koor(15,36);printf("+-----------------------------------------------------------------------+\n");
        koor(15,37);printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        koor(15,38);printf("|                                                                       |\n");
        koor(15,39);printf("|       1. Oatmeal                                                      |\n");
        koor(15,40);printf("|       2. Apel                                                         |\n");
        koor(15,41);printf("|       3. Putih Telur                                                  |\n");
        koor(15,42);printf("|       4. Brokoli                                                      |\n");
        koor(15,43);printf("|       5. Daging Ikan                                                  |\n");
        koor(15,44);printf("|       6. Camilan Rendah Kalori                                        |\n");
        koor(15,45);printf("|                                                                       |\n");
        koor(15,46);printf("| Dapat disimpulkan bahwa,                                              |\n");
        koor(15,47);printf("| Anda harus menghindari makanan berlemak dan berkadar gula tinggi      |\n");
        koor(15,48);printf("| Anda juga harus mengurangi konsumsi garam berlebih, selain itu        |\n");
        koor(15,49);printf("| anda perlu mengatur porsi makan anda dan rajin berolahraga            |\n");
        koor(15,50);printf("+-----------------------------------------------------------------------+\n");
        }
    else if(bmi == 5){
        koor(15,34);printf("+-----------------------------------------------------------------------+\n");
        koor(15,35);printf("|Anda sangat kelebihan gizi                                             |\n");
        koor(15,36);printf("+-----------------------------------------------------------------------+\n");
        koor(15,37);printf("|Menu makanan yang cocok untuk anda adalah :                            |\n");
        koor(15,38);printf("|  Makanan dengan kadar kalori yang rendah                              |\n");
        koor(15,39);printf("|     Contohnya:                                                        |\n");
        koor(15,40);printf("|       1. Tomat Ceri                                                   |\n");
        koor(15,41);printf("|       2. Semangka                                                     |\n");
        koor(15,42);printf("|       3. Mentimun                                                     |\n");
        koor(15,43);printf("|       4. Bayam                                                        |\n");
        koor(15,44);printf("|       5. Daun Bawang                                                  |\n");
        koor(15,45);printf("|       6. Kembang Kol                                                  |\n");
        koor(15,46);printf("|                                                                       |\n");
        koor(15,47);printf("| Dapat disimpulkan bahwa,                                              |\n");
        koor(15,48);printf("| Anda harus mengonsumsi makanan dengan kadar kalori yang rendah        |\n");
        koor(15,49);printf("| Anda juga harus mengurangi konsumsi                                   |\n");
        koor(15,50);printf("| makanan yang berminyak dan berlemak                                   |\n");
        koor(15,51);printf("| Anda perlu mengetahui kadar gizi tiap makanan yang anda santap        |\n");
        koor(15,52);printf("+-----------------------------------------------------------------------+\n");
        }

    koor(40,53);printf("+-----------------------------------------------------------------------+\n");
    koor(40,54);printf("|                                                                       |\n");
    koor(40,55);printf("+-----------------------------------------------------------------------+\n");
    koor(40,56);printf("|                              Terima kasih                             |\n");
    koor(40,57);printf("|                        Semoga anda sehat selalu                       |\n");
    koor(40,58);printf("+-----------------------------------------------------------------------+\n");
    printf("\n");

return 0;
}

//===============================================//
//===============================================//
// Nama Fungsi : Rekomendasi_makanan             //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : Mencetak menu hasil pada file m //
//                                               //
// Created by Herry                              //
//===============================================//
//===============================================//
void Rekomendasi_makanan (){

    if(bmi==1){
    FILE*fpoin;
    fpoin = fopen("Rekomendasi Makanan.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     ||  Rekomendasi Makanan Bagi Anda  ||      |\n");
    fprintf(fpoin,"|     ||   Yang Sangat Kekurangan Gizi   ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Rekomendasi |  Kentang, Nasi, Susu, Kacang     |\n");
    fprintf(fpoin,"| Makanan     |  Alpukat, Daging Merah           |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Kesimpulan  | Anda harus mengonsumsi makanan   |\n");
    fprintf(fpoin,"|             | dengan kadar protein dan         |\n");
    fprintf(fpoin,"|             | karbohidrat yang tinggi.         |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    if(bmi==2){
    FILE*fpoin;
    fpoin = fopen("Rekomendasi Makanan.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     ||  Rekomendasi Makanan Bagi Anda  ||      |\n");
    fprintf(fpoin,"|     ||      Yang Kekurangan Gizi       ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Rekomendasi |  Roti, Nasi, Tempe, Tahu         |\n");
    fprintf(fpoin,"| Makanan     |  Keju, Daging                    |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Kesimpulan  | Anda harus mengonsumsi makanan   |\n");
    fprintf(fpoin,"|             | dengan kadar protein dan         |\n");
    fprintf(fpoin,"|             | karbohidrat yang seimbang.       |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    if(bmi==3){
    FILE*fpoin;
    fpoin = fopen("Rekomendasi Makanan.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     ||  Rekomendasi Makanan Bagi Anda  ||      |\n");
    fprintf(fpoin,"|     ||            Yang Sehat           ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Rekomendasi |  Anda bebas mengonsumsi makanan  |\n");
    fprintf(fpoin,"| Makanan     |  apa saja. Dengan catatan        |\n");
    fprintf(fpoin,"|             |  gizi dalam setiap makanan yang  |\n");
    fprintf(fpoin,"|             |  anda konsumsi seimbang dan      |\n");
    fprintf(fpoin,"|             |  tidak berlebihan.               |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Kesimpulan  | Anda harus tetap memerhatikan    |\n");
    fprintf(fpoin,"|             | 4 sehat 5 sempurna setiap kali   |\n");
    fprintf(fpoin,"|             | anda mengonsumsi makanan agar    |\n");
    fprintf(fpoin,"|             | tidak kekurangan maupun          |\n");
    fprintf(fpoin,"|             | kelebihan gizi.                  |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    if(bmi==4){
    FILE*fpoin;
    fpoin = fopen("Rekomendasi Makanan.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     ||  Rekomendasi Makanan Bagi Anda  ||      |\n");
    fprintf(fpoin,"|     ||       Yang Kelebihan Gizi       ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Rekomendasi |  Oatmeal, Apel, Putih Telur      |\n");
    fprintf(fpoin,"| Makanan     |  Brokoli, Daging Ikan, Cemilan   |\n");
    fprintf(fpoin,"|             |  Rendah Kalori                   |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Kesimpulan  | Anda harus menghindari makanan   |\n");
    fprintf(fpoin,"|             | berlemak, berkadar gula tinggi,  |\n");
    fprintf(fpoin,"|             | dan kadar garam tinggi. Selain   |\n");
    fprintf(fpoin,"|             | itu, anda juga harus mengatur    |\n");
    fprintf(fpoin,"|             | porsi makan anda agar tidak      |\n");
    fprintf(fpoin,"|             | berlebih dan rajin olahraga.     |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
    if(bmi==5){
    FILE*fpoin;
    fpoin = fopen("Rekomendasi Makanan.txt","w");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"|     ||  Rekomendasi Makanan Bagi Anda  ||      |\n");
    fprintf(fpoin,"|     ||   Yang Sangat Kelebihan Gizi    ||      |\n");
    fprintf(fpoin,"|     ||=================================||      |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Rekomendasi |  Tomat Ceri, Semangka, Bayam     |\n");
    fprintf(fpoin,"| Makanan     |  Mentimun, Daun Bawang,          |\n");
    fprintf(fpoin,"|             |  Kembang Kol                     |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"| Kesimpulan  | Anda harus mengonsumsi makanan   |\n");
    fprintf(fpoin,"|             | dengan kadar kalori yang rendah. |\n");
    fprintf(fpoin,"|             | Anda juga harus mengurangi       |\n");
    fprintf(fpoin,"|             | konsumsi makanan yang berminyak  |\n");
    fprintf(fpoin,"|             | dan berlemak. Anda perlu         |\n");
    fprintf(fpoin,"|             | mengetahui kadar gizi tiap       |\n");
    fprintf(fpoin,"|             | makanan yang anda santap         |\n");
    fprintf(fpoin,"|             |                                  |\n");
    fprintf(fpoin,"+-------------+----------------------------------+\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"|                  Terima Kasih                  |\n");
    fprintf(fpoin,"|          Telah menggunakan program ini         |\n");
    fprintf(fpoin,"|          Jaga kesehatan dan pola makan         |\n");
    fprintf(fpoin,"|                                                |\n");
    fprintf(fpoin,"+------------------------------------------------+\n");
    fclose (fpoin);
    }
}

//--------Fungsi Pada Fitur Bakar Kalori---------//

//===============================================//
//===============================================//
// Nama Fungsi : perhitungankalorisaatolahraga   //
// Input       : char jenisaktivitas             //
// Output      : String                          //
// Deskripsi   : Menu utama dari fitur perhitung-//
//               an bakar kalori                 //
//                                               //
// Created by Darryl                             //
// Updated by Herry                              //
//===============================================//
//===============================================//
void perhitungankalorisaatolahraga()
{
bersih();
Tanggal_Waktu();
setcolor(10);
box(15,7,117,35);
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


    koor(47,31);printf(" \n");
    koor(47,32);printf("============================================================\n");
    koor(47,33);printf("          Terima kasih telah menggunakan fitur ini          \n");
    koor(47,34);printf("============================================================\n");

    return 0;
}

//------------Fungsi Pada Fitur Tracker----------//

//===============================================//
//===============================================//
// Nama Fungsi : TanggalWaktu                    //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : Menampilkan tanggal dan waktu   //
//                                               //
// Created by Herry                              //
// Updated by Utari                              //
//===============================================//
//===============================================//
void TanggalWaktu(){

    int tanggal;
    int bulan1;
    int tahun;
    int Jam;
    int Menit;
    int Detik;
    time_t current;
    time(&current);

    struct tm*local = localtime(&current);

    tanggal = local->tm_mday;
    bulan1  = local->tm_mon + 1;
    tahun   = local->tm_year + 1900;
    Jam     = local->tm_hour;
    Menit   = local->tm_min;
    Detik   = local->tm_sec;

    box1(99,8,112,11);
    koor(112,9);printf("%c%c%c%c%c", 196,196,196,196,196);

    if (Jam < 12){

        koor(102,9);printf("%02d:%02d:%02d\n", Jam,Menit,Detik);
    }
    else{

        koor(102,9);printf("%02d:%02d:%02d\n", Jam-12,Menit,Detik);
    }

    koor(101,10);printf("%02d/%02d/%d\n", tanggal,bulan1,tahun);
}

//===============================================//
//===============================================//
// Nama Fungsi : tracker                         //
// Input       : int pilihan, double penurunan1, // 
//               double penurunan2, double       //
//               kenaikan1 , double kenaikan2,   // 
//               double bulanPertama, double     //
//               bulanKedua, double bulanKetiga  //
// Output      : String                          //
// Deskripsi   : Menu utama dari fitur tracker   //
//                                               //
// Created by Utari                              //
// Updated by Herry                              //
//===============================================//
//===============================================//
void tracker(int pilihan, double penurunan1, double penurunan2, double kenaikan1 , double kenaikan2, double bulanPertama, double bulanKedua, double bulanKetiga)
{
    bersih();
    setcolor(10);
    box(30,7,117,35);
    box1(40,12,107,30);
    TanggalWaktu();
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

//===============================================//
//===============================================//
// Nama Fungsi : back                            //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : tampilan untuk user beralih ke  //
//               fungsi sebelumnya atau keluar   //
//                                               //
// Created by Utari                              //
//===============================================//
//===============================================//
void back()
{
    bersih();
    setcolor(10);
    box(30,7,117,35);
    box(34,11,113,31);
    box1(59,19,64,21);
    box1(84,19,89,21);
    koor(60,20); printf("Back");
    koor(85,20); printf("Exit");
}

//===============================================//
//===============================================//
// Nama Fungsi : backpremium                     //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : Akses untuk user beralih ke pro-//
//               gram sebelumnya atau keluar dari//
//               fitur premium                   //
//                                               //
// Created by Utari                              //
//===============================================//
//===============================================//
void backpremium()
{
    panjangX = 56;
    panjangY = 20;

    do{
    back();

    koor(panjangX,panjangY);
    printf(">>");
    button = getch();

    if(button==77 && panjangX==56)
    {
        panjangX=81;
    }
    else if(button==75 && panjangX==81)
    {
        panjangX=56;
    }
    }while(button!=13);

    if(panjangX==56 && panjangY==20)
    {
        menuFitur();
    }
    else if(panjangX==81 && panjangY==20)
    {
        ExitProcess(menuAwal);
    }
}

//===============================================//
//===============================================//
// Nama Fungsi : backreg                         //
// Input       : Void                            //
// Output      : String                          //
// Deskripsi   : Akses untuk user beralih ke pro-//
//               gram sebelumnya atau keluar dari//
//               fitur user reguler              //
//                                               //
// Created by Utari                              //
//===============================================//
//===============================================//
void backreg()
{
    panjangX = 56;
    panjangY = 20;

    do{
    back();

    koor(panjangX,panjangY);
    printf(">>");
    button = getch();

    if(button==77 && panjangX==56)
    {
        panjangX=81;
    }
    else if(button==75 && panjangX==81)
    {
        panjangX=56;
    }
    }while(button!=13);

    if(panjangX==56 && panjangY==20)
    {
        bersih();
        menuAwal(panjangX, panjangY, button, kode, pilihan);
    }
    else if(panjangX==81 && panjangY==20)
    {
        bersih();
        ExitProcess(menuAwal);
    }
}

