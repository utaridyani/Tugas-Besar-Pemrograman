#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>


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

   box(5,7,116,20);
   koor(8,8);Tanggal_Waktu();
   box(38,10,85,16);
   koor(53,12);printf("Program Perhitungan");
   koor(54,14);printf("Kebutuhan Kalori");
   box(5,21,116,23);
   koor(52,22);printf("Tentukan jenis kelamin");
   box(5,24,116,34);
   koor(25,28);printf("%c Tekan 1 untuk Laki-laki",62);
   koor(75,28);printf("%c Tekan 2 untuk Perempuan",62);
   box(5,35,116,38);
   koor(15,36);printf("Jawaban anda : ");
   scanf("%d",&gender);
   koor(52,39);Loading2();
   bersih();
    box(5,20,116,40);
        koor(18,26);printf("Masukkan berat badan dalam kg");
        box(55,25,80,27);koor(58,26);scanf("%lf", &mess);
        koor(18,29);printf("Masukkan usia dalam tahun");
        box(55,28,80,30);koor(58,29);scanf("%lf", &age1);
        koor(18,32);printf("Masukkan tinggi badan dalam cm  : ");
        box(55,31,80,33);koor(58,32);scanf("%lf", &height);
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
    box(5,57,116,75);
    koor(10,59);printf("Jawaban anda : ");
    scanf ("%d", &ask1);
    koor(10,62);hasil_TEE = TEE();
    koor(10,63);printf("Total energi anda sebesar %.2lf kcals",hasil_TEE);
    koor(10,65);result_TEE();
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
        if(hasil_TEE < 2500){
            printf("Kebutuhan kalori anda kurang sehingga perlu ditambah sebesar %.2lf kcals agar stabil\n", hasil);
        }else if(hasil_TEE > 2500){
            printf("Kebutuhan kalori anda lebih sehingga perlu dikurangi sebesar %.2lf kcals agar stabil\n", hasil);
        }
     if(gender == 2){
        if(hasil_TEE < 2000){
            printf("Kebutuhan kalori anda kurang sehingga perlu ditambah sebesar %.2lf kcals agar stabil\n", hasil);
        }else if(hasil_TEE > 2000){
            printf("Kebutuhan kalori anda lebih sehingga perlu dikurangi sebesar %.2lf kcals agar stabil\n", hasil);
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
    setcolor(3);
    box(10,7,117,35);
    box(35,18,90,27);
    koor(52,22);
    printf("Perhitungan Kebutuhan Kalori");
    koor(50,24);
    for(int i=1 ; i<=10; i++){
        setcolor(3);
        printf(" %c ",223);
        Sleep(180); } }


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

    if (Jam < 12){
        koor(8,9);printf("%02d:%02d:%02d\n", Jam,Menit,Detik);
    }
    else{
        koor(8,9);printf("%02d:%02d:%02d\n", Jam-12,Menit,Detik);
    }

    koor(8,10);printf("%02d/%02d/%d\n", tanggal,bulan1,tahun);
}

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

void Loading2(){

     for(int i=1 ; i<=10; i++){
        setcolor(3);
        printf(" %c ",223);
        Sleep(180); } }


