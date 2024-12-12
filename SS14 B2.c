#include <stdio.h>

int main(){
	char str[100];
	printf("moi ban nhap chuoi "); 
	fgets(str,100,stdin);
	int length=strlen(str);
	printf("chuoi ban vua nhap la : ");
	for(int i=0;i<length;i++){
		printf("%c ",str[i]);
	} 
	return 0;	
} 
