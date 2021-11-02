/*
define: Program to check in certain folder.
*/

#include <stdio.h>
int main(void){
	FILE * file;
	
	if(file = fopen("test_1.txt", "r")){
		fclose(file);
		printf("file exists");
	}
	else{
		printf("file doesn't exist");
	}
	
	return 0;
}


/*
finish: 2021.11.03.
resorce: Bharadwaj, Satishkumar. “C에 파일이 있는지 확인”. Delft Stack, 2020년 12월 25일. https://www.delftstack.com/ko/howto/c/c-check-if-file-exists/.
*/
