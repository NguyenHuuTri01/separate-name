#include<stdio.h>
#include<string>
#include <cstring>
void inChuoi(char A[])
{
	for(int i = 0 ; i<strlen(A) ; i++)
	printf("%c",A[i]);
}
char *Lay_Ho(char HVT[], char Ho[]){
	int i=0;
	while(HVT[i]!=' '){
		Ho[i] = HVT[i];
		i++;
	}
	Ho[i]='\0';
	return Ho;
}
char *Lay_Ten(char HVT[], char Ten[]){
	int j = strlen(HVT) - 1, i=0;
	while(HVT[j] != ' '){
		Ten[i] = HVT[j];
		i++;
		j--;
	}
	strrev(Ten);
	Ten[i] = '\0';
	return Ten;
}
main() {
	char HVT[50], Ho[20], Dem[20], Ten[20];
	printf("Nhap Ho Va Ten: ");
	gets(HVT);
	Lay_Ten(HVT,Ten);
	Lay_Ho(HVT, Ho);
	printf("\nTen La: ");
	inChuoi(Ten);
	printf("\nHo La: ");
	inChuoi(Ho);
}

