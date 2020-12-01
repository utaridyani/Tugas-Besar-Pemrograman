#include<stdio.h>
#include<conio.h>

int gender, age1,ask1;
double mess, height;
double hasil;

double BMR();
void utama();
void tanya();
double TEE();

int main(){
  utama();
}

void utama(){


                        puts("||=================================||");
                        puts("||  Program Perhitungan Kebutuhan  ||");
                        puts("||         Kalori Harian           ||");
                        puts("||=================================||");

    printf("+-----------------------------------------------------------------------+\n");
    printf("|                                                                       |\n");
    printf("+-----------------------------------------------------------------------+\n");
    printf("|Tentukan jenis kelamin :                                               |\n");
    printf("|                                                                       |\n");
    printf("|       1.Laki-laki                                                     |\n");
    printf("|       2.Perempuan                                                     |\n");
    printf("|                                                                       |\n");
    printf("|Tekan 1 untuk laki-laki atau 2 untuk perempuan pada jawaban anda       |\n");
    printf("+-----------------------------------------------------------------------+\n");
    printf("|Jawaban anda : ");
    scanf ("%d",&gender);
    printf("Masukkan usia                  : ");
    scanf ("%d", &age1);
    printf("masukkan tinggi badan dalam cm : ");
    scanf ("%lf",&height);
    printf("masukkan berat badan dalam kg  : ");
    scanf ("%lf",&mess);
    hasil = BMR()/1000;
    printf("Kebutuhan kalori yang anda perlukan setiap harinya sebesar %.2lf kcals\n", hasil);
    tanya();
}

double BMR(){

    if(gender == 1){
        return 88362 + (13397*mess) + (4799*height) - (5677*age1);
    }
    else if(gender == 2){
        return 447593 + (9247*mess) + (3.098*height) - (433*age1);
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
