#include <stdio.h>

int main(){
	int n;
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d", &n);
	int a[n];
	int count = 0;
	printf("Nhap cac phan tu trong mang: \n");
	for( int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	if(count > 0){
	printf("cac so nguyen am la: ");
	for(int i = 0; i < n; i++){
		if(a[i] < 0){
			printf("%d", a[i]);
			count++;
		}
	}
	printf("\nco tong cong %d so nguyen am", count);
}else{
	printf("Mang khong co so am nao");
}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nmang sau khi sap xep tang dan la: ");
	for(int i = 0; i < n; i++){
		printf("%d", a[i]);
	}
}
