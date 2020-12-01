#include <stdio.h>
#include <math.h>

int main()
{
	int pilihan;
	double penurunan1, penurunan2, kenaikan1 , kenaikan2;
	double bulanPertama, bulanKedua, bulanKetiga;

    printf("\nMasukkan BMI anda selama 3 bulan dengan format maksimal 2 angka dibelakang koma\n");
	printf("\n\tBMI bulan ke-1 : ");
	scanf("%lf", &bulanPertama);
	printf("\n\tBMI bulan ke-2 : ");
	scanf("%lf", &bulanKedua);
	printf("\n\tBMI bulan ke-3 : ");
	scanf("%lf", &bulanKetiga);

    printf("\n===================================================================");
    printf("\n\t\t\tREKAPITULASI BMI");
    printf("\n===================================================================");
	printf("\nBMI bulan pertama adalah %.2f\n", bulanPertama);
	printf("\nBMI bulan kedua adalah %.2f\n", bulanKedua);
	printf("\nBMI bulan ketiga adalah %.2f\n\n\n", bulanKetiga);

    printf("\n--------------------------");
    printf("\n        Tracking");
    printf("\n--------------------------");

	if(bulanPertama>bulanKedua)
	{
		penurunan1=bulanPertama-bulanKedua;
		printf("\nPada bulan kedua BMI anda mengalami penurunan sebesar %.2f", penurunan1);
	}
	else if(bulanKedua>bulanPertama)
	{
		kenaikan1=bulanKedua-bulanPertama;
		printf("\n\nPada bulan kedua BMI anda mengalami kenaikan sebesar %.2f", kenaikan1);
	}
	else if(bulanPertama=bulanKedua)
	{
		puts("\nBMI anda stabil pada bulan kedua");
	}

	if(bulanKedua>bulanKetiga)
	{
		penurunan2=bulanKedua - bulanKetiga;
		printf("\n\nPada bulan ketiga BMI anda mengalami penurunan sebesar %.2f", penurunan2);
	}
	else if(bulanKetiga>bulanKedua)
	{
		kenaikan2=bulanKetiga - bulanKedua;
		printf("\n\nPada bulan kedua BMI anda mengalami kenaikan sebesar %.2f", kenaikan2);
	}
	else if(bulanKetiga=bulanKedua)
	{
		puts("\nBMI anda stabil pada bulan ketiga");
	}
}

//fungsi error handling
void errorHandling()
{
	printf("Input yang anda masukkan salah!");
}
