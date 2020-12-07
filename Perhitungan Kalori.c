#include<stdio.h>
#include<conio.h>

int gender, age1;       /* Variabel untuk memasukkan nilai
                        age1   = untuk memasukkan dan menyimpan nilai penentuan usia
                        gender = untuk memasukkan dan menyimpan nilai penentuan jenis kelamin*/
double mass, height;    /* Variabel untuk memasukkan nilai
                        height = untuk memasukkan nilai tinggi badan
                        mass   = untuk memasukkan nilai berat badan*/
double hasil;           /* Variabel untuk memasukkan nilai 
                        hasil = total nilai aritmatika dalam perhitungan kebutuhan kalori harian*/


void koor(int x , int y);
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void Loading();

double BMR();
void utama();
void tanya();
double TEE();

int main(){
  Loading();
  utama();
}

void utama(){


                        puts("||=================================||");
                        puts("||  Program Perhitungan Kebutuhan  ||");
                        puts("||         Kalori Harian           ||");
                        puts("||=================================||");

   printf("+-+-----------------------+-+\n");
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
    printf("|Jawaban anda : ");
    scanf ("%d",&gender);
    printf("Masukkan usia                  : ");
    scanf ("%d", &age1);
    printf("masukkan tinggi badan dalam cm : ");
    scanf ("%lf",&height);
    printf("masukkan berat badan dalam kg  : ");
    scanf ("%lf",&mass);
    hasil = BMR()/1000;
    printf("Kebutuhan kalori yang anda perlukan setiap harinya sebesar %.2lf kcals\n", hasil);
    tanya();
}

double BMR(){

    if(gender == 1){
        return 88362 + (13397*mass) + (4799*height) - (5677*age1);
    }
    else if(gender == 2){
        return 447593 + (9247*mass) + (3.098*height) - (433*age1);
    }
}

void tanya(){

    printf("Tentukan level aktivitas fisik : \n");
    printf("1.Tidak aktif\n");
    printf("2.Cukup aktif\n");
    printf("3.Aktif\n");
    printf("4.Sangat aktif\n");
    printf("Jawaban anda : ");
    scanf ("%d", &ask1);
    hasil = TEE()/1000;
    printf("Total energi yang diperlukan sebesar %.2lf kcals",hasil);
}

double TEE(){

    double bmr;
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
    koor(40,9);
    printf("||===============================||\n");
    koor(40,10);
    printf("||    Perhitungan Badan Ideal    ||\n");
    koor(40,11);
    printf("||===============================||\n");
    koor(40,14);
    for(int i=1 ; i<=34 ; i++){
        setcolor(7);
        printf("%c",219);
        Sleep(60); } }

