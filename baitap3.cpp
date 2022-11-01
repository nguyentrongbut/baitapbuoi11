#include<stdio.h>
#include<string.h>

int main() {
	char chuoia[50];
	printf("Nhap chuoi thu nhat: ");
	scanf("%s", chuoia);
	char chuoib[50];
	printf("Nhap chuoi thu hai: ");
	scanf("%s", chuoib);
	
	char* sosanh = strstr(chuoia, chuoib);
	if(sosanh) {
		printf("chuoi thu hai nam trong chuoi thu nhat ");
	} else {
		printf("chuoi thu hai khong nam trong chuoi thu nhat ");
	}
		
}
