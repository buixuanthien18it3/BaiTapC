#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	int a[100];
	printf("nhap so phan tu cua mang");
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		printf("phan tu thu %d",i+1);
		scanf("%d",&a[i]);
	}
	
	for (int i = 0; i < n; i++)
	printf("mang[%d]= %d", i, a[i]);
	int tong;
	for(int i = 0; i <n;i++)
	{
	
	if (a[i]%2==0)
	tong = tong + a[i];
    }
    printf("tong mang chan la :%d ", tong);

}
