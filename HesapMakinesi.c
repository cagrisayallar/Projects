#include <stdio.h>
#include <stdlib.h>

int toplam();
int cikarma();
int carpma();
float bolme();
int mod();
int faktoriyel();


int main (){




		printf("Hesap Makinesine Hos Geldiniz\n-----------------------------------\n");

		printf("Lutfen Girilecek Sayilari Ve islemi giriniz.. (ornek: 5 * 4) \n");

		while(1){
        int sayi1,sayi2;
		char islem;

        printf("\n");
		scanf("%d %c %d",&sayi1,&islem,&sayi2);

		switch (islem)
		{
			case '+' :
			printf(": %d ",toplam(sayi1,sayi2));
			break;

			case '-' :
			printf(":%d ",cikarma(sayi1,sayi2));
			break;

			case '*' :
			printf(":%d ",carpma(sayi1,sayi2));
			break;

			case '/' :
            printf("%.2f",bolme(sayi1,sayi2));
			break;

			case '%' :
			printf(":%d ",mod(sayi1,sayi2));
			break;

			case '!' :
			printf(":%d %d",faktoriyel(sayi1),faktoriyel(sayi2));
			break;

		}
		}

}

int toplam(int a,int b)
{
	int sonuc = a + b;
	return sonuc;
}

int cikarma(int a,int b)
{
	int sonuc = a - b;
	if(a<b)
	return (-1) * sonuc;
	else
	return sonuc;

}

int carpma(int a,int b)
{
	int sonuc = a * b;
	return sonuc;
}

float bolme(int a,int b)
{
    float sonuc=(float)a/b;

	return sonuc;
}

int mod(int a , int b)
{
	int sonuc = a % b;
	return sonuc;
}

int faktoriyel(int a)
{
	int sonuc=1;
	for(int i=1;i<=a;i++)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}
