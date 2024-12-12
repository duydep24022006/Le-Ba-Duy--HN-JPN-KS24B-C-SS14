#include <stdio.h>

int main(){
	char Str;
	printf("moi ban nhap ki tu muon dao nguoc \n");
	fgets(Str,100,stdin);
	int length=strlen(Str);
	printf("mang sau khi dao\n");
	printf("%c",Str);
	return 0;
}
	
