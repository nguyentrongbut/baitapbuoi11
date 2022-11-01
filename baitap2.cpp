#include<stdio.h>
#include<string.h>

int main() {
	char s[50];
	printf("Nhap chuoi: ");
	scanf("%s", s);
	int nguyenam = 0;
	int kytukhac = 0;
	for(int i = 0; i < strlen(s); i++) {
		if(s[i] == 97 || s[i] == 101 || s[i] == 111 || s[i] == 117 || s[i] == 105) {
			nguyenam++;
		} else {
			kytukhac++;
		}
	}
	
		printf("chuoi co chua %d nguyen am %d ky tu khac", nguyenam, kytukhac);
}

