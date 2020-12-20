#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<dos.h>



/* Program Perhitungan Berat Badan Ideal oleh*/

/* Deklarasi variabel global pada program perhitungan berat badan*/

double height, mess; /* Variabel untuk memasukkan nilai
                        height = untuk memasukkan nilai tinggi badan
                        mess   = untuk memasukkan nilai berat badan*/
double BBL;          /* Variabel untuk memasukkan nilai
                        BBL    = untuk memasukkan nilai BBL (Berat Bayi Lahir)*/
double age1;         /* Variabel untuk memasukkan nilai
                        age1   = untuk memasukkan nilai usia*/
double hasil;        /* Variabel untuk memasukkan nilai
                        hasil  = untuk memasukkan nilai pada perhitungan berat badan ideal*/
int qna1,qna2,gender;/* Variabel untuk memasukkan nilai
                        qna1   = untuk memasukkan dan menyimpan nilai golongan pada fungsi Main_Menu_BMI()
                        qna2   = untuk memasukkan dan menyimpan nilai penentuan pada pencetakan file pada fungsi up_or_down()
                        gender = untuk memasukkan dan menyimpan nilai penentuan jenis kelamin pada fungsi ask1()*/
int tanggal;
int bulan1;
int tahun;
int Jam;
int Menit;
int Detik;

double bulan;        /* Variabel untuk memasukkan nilai
                        bulan  = untuk memasukkan dan menyimpan nilai bulan pada fungsi ask1()*/


void Main_Menu_BMI();   /* Fungsi tampilan awal program perhitungan berat badan ideal*/
void ask1();            /* Fungsi yang digunakan untuk menampilkan opsi golongan usia dan memasukkan nilai bulan, BBL, height, mess, age1*/
double Calculate_BMI(); /* Fungsi yang digunakan untuk melakukan proses aritmatika setelah fungsi ask1() berhasil dieksekusi*/
double saran();         /* Fungsi yang digunakan untuk melakukan proses aritmatika dan penentuan seberapa
                           besar pengurangan atau penambahan dari berat badan yang telah berhasil diinputkan pada fungsi ask1()
                           dan juga setelah melalui proses aritmatika pada fungsi Calculate_BMI()*/

void up_or_down();      /* Fungsi yang digunakan untuk memasukkan dan menyimpan apakah user mengalami
                           kekurangan, kelebihan atau kondisi normal setelah fungsi ask1() berhasil tercetak dilayar*/
void Final_BMI();       /* Fungsi yang digunakan dalam memeriksa hasil aritmatika pada fungsi Calculate_BMI(),
                           kemudian mencocokkannya dari berbagai kondisi yang telah ditentukan*/
void result_BMI();      /* Fungsi yang digunakan untuk mencetak file berupa .txt, yang berisi hasil perhitungan, serta keterangan*/

/* Fungsi yang di gunakan dalam pembuatan animasi
preloader (proses loading) pada program ini oleh Utari*/
void koor(double x , double y);
void bersih();
void delay(int sec);
void setcolor(unsigned short color);
void Loading();
void Tanggal_Waktu();
void box(int a,int b,int c,int d);
void box1(int a,int b,int c,int d);


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

int main(){

    Loading();
    Main_Menu_BMI();
    up_or_down();
    result_BMI();
}

void Main_Menu_BMI(){

   bersih();
   setcolor(3);
   box(5,7,116,30);
   Tanggal_Waktu();
   box1(45,16,80,22);
   koor(48,19);printf("Program Perhitungan Badan Ideal\n");
   koor(56,24);printf("Selamat datang\n");
   koor(50,25);printf("Program ini dapat  membantu\n");
   koor(50,26);printf("anda dalam menentukan tubuh\n");
   koor(50,27);printf("yang ideal pada bayi,balita\n");
   koor(50,28);printf(",remaja,hingga dewasa.\n");
   box(5,31,116,35);
   koor(50,33);printf("Tentukan opsi di bawah ini\n");
   box(5,36,116,55);
   koor(20,40);printf("No\n");
   koor(45,40);printf("Kategori");
   koor(70,40);printf("Rentan Usia");
   koor(100,40);printf("Kode");
   koor(20,42);printf("1");koor(45,42);printf("Bayi");koor(70,42);printf("0-6   bulan");koor(100,42);printf("1");
   koor(20,44);printf("2");koor(45,44);printf("Bayi");koor(70,44);printf("7-12  bulan");koor(100,44);printf("2");
   koor(20,46);printf("3");koor(45,46);printf("Anak-anak");koor(70,46);printf("1-10  tahun");koor(100,46);printf("3");
   koor(20,48);printf("4");koor(45,48);printf("Remaja");koor(70,48);printf("11-18 tahun");koor(100,48);printf("4");
   koor(20,50);printf("5");koor(45,50);printf("Dewasa");koor(70,50);printf("19-60 tahun");koor(100,50);printf("5");
   box(5,56,116,60);
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
        box(5,5,116,9);
        koor(50,7);printf("Tentukan jenis kelamin");
        box(5,10,116,20);
        koor(30,14);printf("%c Tekan 1 untuk Laki-laki",62);
        koor(73,14);printf("%c Tekan 2 untuk Perempuan",62);
        box(5,22,116,35);
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
        box(5,5,116,9);
        koor(50,7);printf("Tentukan jenis kelamin");
        box(5,10,116,20);
        koor(30,14);printf("%c Tekan 1 untuk Laki-laki",62);
        koor(73,14);printf("%c Tekan 2 untuk Perempuan",62);
        box(5,22,116,35);
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
        box(5,5,116,9);
        koor(50,7);printf("Tentukan jenis kelamin");
        box(5,10,116,20);
        koor(30,14);printf("%c Tekan 1 untuk Laki-laki",62);
        koor(73,14);printf("%c Tekan 2 untuk Perempuan",62);
        box(5,22,116,38);
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
        box(5,20,116,40);
        koor(18,26);printf("Masukkan berat badan dalam kg");
        box(55,25,80,27);koor(58,26);scanf("%lf", &mess);
        koor(18,29);printf("Masukkan usia dalam tahun");
        box(55,28,80,30);koor(58,29);scanf("%lf", &age1);
        koor(18,32);printf("Masukkan tinggi badan dalam cm  : ");
        box(55,31,80,33);koor(58,32);scanf("%lf", &height);
        hasil = Calculate_BMI();
        koor(52,35);Loading2();
        bersih();
        box(34,22,90,28);
        koor(52,24);printf("BBI anda adalah %.2lf kg\n", hasil);
        Final_BMI();
        break;
        case 5:
        box(5,20,116,40);
        koor(18,26);printf("Masukkan berat badan dalam kg");
        box(55,25,80,27);koor(58,26);scanf("%lf", &mess);
        koor(18,29);printf("Masukkan usia dalam tahun");
        box(55,28,80,30);koor(58,29);scanf("%lf", &age1);
        koor(18,32);printf("Masukkan tinggi badan dalam cm  : ");
        box(55,31,80,33);koor(58,32);scanf("%lf", &height);
        hasil = Calculate_BMI();
        koor(52,35);Loading2();
        bersih();
        box(34,22,90,28);
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
    printf("\n\n\t+-----------------------------------------+\n");
    printf("\t|  Cetak pada file dengan menekan angka   |\n");
    printf("\t+-------+---------------------------------+\n");
    printf("\t| Angka |          Keterangan             |\n");
    printf("\t+-------+---------------------------------+\n");
    printf("\t|   1   | untuk kategori kekurangan gizi  |\n");
    printf("\t|       | atau kekurangan berat badan     |\n");
    printf("\t+-------+---------------------------------+\n");
    printf("\t|   0   | untuk kategori gizi normal      |\n");
    printf("\t|       | atau berat badan ideal          |\n");
    printf("\t+-------+---------------------------------+\n");
    printf("\t|   2   | untuk kategori kelebihan gizi   |\n");
    printf("\t|       | atau kelebihan berat badan      |\n");
    printf("\t+-------+---------------------------------+\n");

    box(5,58,116,60);
    koor(15,59);printf("Jawaban anda : ");
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
    else{
        koor(20,32);
        printf("Tidak Valid");
        koor(20,33);
        exit(1);
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
   else{
        koor(20,32);
        printf("Tidak Valid");
        koor(20,33);
        exit(1);
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
   else{
        koor(51,29);
        printf("Tidak Valid");
        koor(51,32);
        exit(1);
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
    else{
        koor(51,29);
        printf("Tidak Valid");
        koor(51,32);
        exit(1);
    }
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


void koor(double x , double y)
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
    box1(35,18,90,27);
    koor(53,22);
    printf("Perhitungan Badan Ideal\n");
    koor(50,24);
    for(int i=1 ; i<=10; i++){
        setcolor(3);
        printf(" %c ",223);
        Sleep(180); } }

void Loading2(){

     for(int i=1 ; i<=10; i++){
        setcolor(3);
        printf(" %c ",223);
        Sleep(180); } }


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





