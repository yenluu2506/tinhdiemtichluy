﻿// 13. Viết chương trình nhập vào từ bàn phím một dãy số nguyên gồm n phần tử. Tính trung bình cộng các phần tử chẵn của dãy.

/*#include<stdio.h>
int a[1000];
int n;
void Nhap() {
	int i;
	for (i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
}

void TrungBinhCongSoChan() {
	int i;
	int tong = 0;
	int dem = 0;

	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
		{
			tong += a[i];
			dem++;
		}
	}
	printf("Tong trung binh cong so chan la %d", tong / dem);
}

int main()
{
	printf("nhap phan tu mang ");
	scanf_s("%d", &n);
	Nhap();
	TrungBinhCongSoChan();


}*/