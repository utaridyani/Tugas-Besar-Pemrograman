#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <dos.h>

//prototype WEIGHT TRACKER
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

//prototype program BMI
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

//Prototype Perhitungan Kalori
int ask;
double bmr;
double hasiltee,hasil_TEE;
double BMR();
void utama();
void tanya();
double TEE();
void result_TEE();
double Final_TEE();


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
        koor(55,21); printf("Login Gagal!");
        koor(53,22); printf("Silahkan melakukan rerun program untuk login ulang");
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
 // Fitur Hitung BMI

    Loading();
    Main_Menu_BMI();
    up_or_down();
    result_BMI();
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
    }
    else if(panjangX==46 && panjangY==18)
    {
        //Fitur menu sehat
        // Loading();
        //utama_sehat();
        //Rekomendasi_makanan();
    }
    else if(panjangX==46 && panjangY==21)
    {
        //fitur hitung kalori
        Loading();
        utama();
    }
    else if(panjangX==46 && panjangY==24)
    {
        //fitur tracker
         tracker(pilihan, penurunan1, penurunan2, kenaikan1 ,kenaikan2, bulanPertama, bulanKedua, bulanKetiga);
    }
    else if(panjangX==46 && panjangY==27)
    {
        //fitur tanya dokter
         mainTanyaDokter (hari, dokter, pengguna, userID);
    }
    else if(panjangX==46 && panjangY==30){
        //Fitur Bakar Kalori
        Loading();
        perhitungankalorisaatolahraga();
    }
    getch();

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
    koor(50,30); printf("Bakar Kalori");
}
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
// Fungsi Program BMI
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

void Loading2(){

     for(int i=1 ; i<=10; i++){
        setcolor(3);
        printf(" %c ",223);
        Sleep(180); } }

void Main_Menu_BMI(){

   bersih();
   setcolor(10);
   box(5,7,116,30);
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
        koor(18,32);printf("Masukkan tinggi badan dalam cm  : ");
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
        koor(18,32);printf("Masukkan tinggi badan dalam cm  : ");
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
//Fungsi Perhitungan Kalori
void utama(){
bersih();
   setcolor(10);
   box(5,7,116,20);
   setcolor(7);
   koor(8,8);Tanggal_Waktu();
   box(38,10,85,16);
   setcolor(7);
   koor(53,12);printf("Program Perhitungan");
   koor(54,14);printf("Kebutuhan Kalori");
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
        koor(18,32);printf("Masukkan tinggi badan dalam cm  : ");
        setcolor(10);
        box(55,31,80,33);setcolor(7);koor(58,32);scanf("%lf", &height);
    tanya();
}

double BMR(){

    if(gender == 1){
        return 88.4 + (13.4*mess) + (4.8*height) - (5.68*age1);
    }
    else if(gender == 2){
        return 447.6 + (9.25*mess) + (3.1*height) - (4.33*age1);
    }
}

void tanya(){

    printf("\n");
    printf("\n");
    printf("\n");
    setcolor(7);
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

