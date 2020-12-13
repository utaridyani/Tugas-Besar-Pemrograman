#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<dos.h>

int gender, age1,ask1;                        /* Variabel untuk memasukkan nilai
                                         age1   = untuk memasukkan dan menyimpan nilai penentuan usia
                                         gender = untuk memasukkan dan menyimpan nilai penentuan jenis kelamin*/
double mess, height;                     /* Variabel untuk memasukkan nilai
                                         height = untuk memasukkan nilai tinggi badan
                                         mess   = untuk memasukkan nilai berat badan*/
double hasil,hasil_TEE;              /* Variabel untuk memasukkan nilai
                                         hasil_BMR = total nilai aritmatika dalam perhitungan kebutuhan kalori harian
                                         hasil_TEE = total nilai aritmatika dalam perhitungan total energi*/
double bmr;

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

double BMR();
void utama();
void tanya();
double TEE();
void result_TEE();
double Final_TEE();
void Tanggal_Waktu();

int main(){
  Loading();
  utama();
}

void utama(){
bersih();
Tanggal_Waktu();
   printf("\t\t||=================================||\n");
   printf("\t\t||  Program Perhitungan Kebutuhan  ||\n");
   printf("\t\t||         Kalori Harian           ||\n");
   printf("\t\t||=================================||\n");

   printf("\n+-+-----------------------+-+\n");
   printf("| |Tentukan jenis kelamin | |\n");
   printf("+-+---------+-------------+-+\n");
   printf("|1|Laki-laki|             | |\n");
   printf("+-+---------+             | |\n");
   printf("|2|Perempuan|             | |\n");
   printf("+-+---------+-------------+-+\n");
   printf("| |Tekan                  | |\n");
   printf("| |(1) untuk laki-laki    | |\n");
   printf("| |(2) untuk perempuan    | |\n");
   printf("+-+-----------------------+-+\n");
    printf("\nJawaban anda : ");
    scanf ("%d",&gender);
    printf("\nMasukkan usia                  : ");
    scanf ("%d", &age1);
    printf("\nmasukkan tinggi badan dalam cm : ");
    scanf ("%lf",&height);
    printf("\nmasukkan berat badan dalam kg  : ");
    scanf ("%lf",&mess);
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

    printf("\n+----------------------------------+\n");
    printf("|Tentukan level aktivitas fisik    |\n");
    printf("+---+-------------+----------------+\n");
    printf("|No | Level       |  Tekan Angka   |\n");
    printf("+---+-------------+----------------+\n");
    printf("| 1 |Tidak aktif  |      (1)       |\n");
    printf("| 2 |Cukup aktif  |      (2)       |\n");
    printf("| 3 |Aktif        |      (3)       |\n");
    printf("| 4 |Sangat aktif |      (4)       |\n");
    printf("+---+-------------+----------------+\n");
    printf("\nJawaban anda : ");
    scanf ("%d", &ask1);
    hasil_TEE = TEE();
    printf("Total energi anda sebesar %.2lf kcals",hasil_TEE);
    result_TEE();
}

double TEE(){

    bmr = BMR();

    if(ask1 == 1){
      return bmr*1.2;
    }else if(ask1 == 2){
      return bmr*1.375;
    }else if(ask1 == 3){
      return bmr*1.55;
    }else if(ask1 == 4){
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

    hasil = Final_TEE();

     if(gender == 1){
        if(hasil < 2500){
            printf("\nKebutuhan kalori anda kurang sehingga perlu ditambah sebesar %.2lf kcals agar stabil\n", hasil);
        }else if(hasil > 2500){
            printf("\nKebutuhan kalori anda lebih sehingga perlu dikurangi sebesar %.2lf kcals agar stabil\n", hasil);
        }
     if(gender == 2){
        if(hasil_TEE < 2000){
            printf("\nKebutuhan kalori anda kurang sehingga perlu ditambah sebesar %.2lf kcals agar stabil\n", hasil);
        }else if(hasil_TEE > 2000){
            printf("\nKebutuhan kalori anda lebih sehingga perlu dikurangi sebesar %.2lf kcals agar stabil\n", hasil);
        }
    }

    }
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
    koor(37,9);
    printf("||===========================================||\n");
    koor(37,10);
    printf("||    Perhitungan Kebutuhan Kalori Harian    ||\n");
    koor(37,11);
    printf("||===========================================||\n");
    koor(37,14);
    for(int i=1 ; i<=48 ; i++){
        setcolor(7);
        printf("%c",219);
        Sleep(60);
        }
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
