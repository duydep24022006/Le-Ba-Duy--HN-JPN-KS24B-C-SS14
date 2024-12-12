#include <stdio.h>

int main(){
	char str[100];
	printf("moi ban nhap chuoi "); 
	fgets(str,100,stdin);
	int sum=0;
	int length=strlen(str);
	printf("chuoi ban vua nhap la : ");
	for(int i=0;i<length;i++){
		if(str[i]==' '){
			sum++; 
		} 
	} 
	printf("co so chu la %d",sum+1);
	return 0;	
} 
