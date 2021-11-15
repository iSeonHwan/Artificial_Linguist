/*
define: Program to analysis a message with comparing other message.
date: 2021.11.11.
*/

#include <stdio.h>

int main(void){

	char CIM; //CIM is Input Message of data class char.
	
	int end = 0;
	
	//input language message.
	scanf("%s", &CIM);

	//judge that message is first. if input message is first, then save message
	
	//declare FILE pointer fp.
	FILE * fp;
	
	fp = fopen("message.txt", "w");
	
	if(fp == NULL){
		printf("Fail\n");
		return 1;
	}
	
	while(end != EOF){
		end = fgetc(stdin);
		fputc(end, fp);
	}
	
	fclose(fp);
return 0;
}
