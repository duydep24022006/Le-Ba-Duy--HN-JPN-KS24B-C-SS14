#include <stdio.h>

int main(){
	char str[100]={'d','e','p',' ','t','r','a','i','\0'};
	char character; 
	int sum=0; 
	do{
		printf("moi ban nhap 1 ki tu "); 
		scanf("%c",&character);
	} while(character=='\n');
	int length = strlen(str);
	printf("chuoi ban vua nhap la : ");
	for(int i=0;i<length;i++){
		if(str[i]==character){
			sum ++;
		}
	} 
	printf("so lan xuat hien cua '%c' la %d",character,sum);
	return 0;	
} 
