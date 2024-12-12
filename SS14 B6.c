#include<stdio.h>
void count(char string[]){
	int count=0;
	for(int i=0;string[i] != '\0';i++){
		if(string[i] !=' '){
			count++;
		} 
	} 
	printf("quatity character:%d",count-1);
	 
} 
int main(){
	char string[100];
 	printf("please enter string ");
 	fgets(string,100,stdin);
 	count(string);
 	
	return 0; 
} 
