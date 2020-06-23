#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	scanf("%[^\n]%*c",str);
	//Shift left 3 to decipher
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]>=65 && str[i]<88 || str[i]>=97 && str[i]<120){
		str[i]=str[i]+3;
		}
		else{
			if(str[i]==88){
				str[i]=65;
			}
			if(str[i]==89){
				str[i]=66;
			}
			if(str[i]==90){
				str[i]=67;
			}
			if(str[i]==120){
				str[i]=97;
			}
			if(str[i]==121){
				str[i]=98;
			}
			if(str[i]=122){
				str[i]=99;
			}
		}
	}
	printf("%s",str);
}
