/*
정의: 파일이 있는지 여부를 확인하는 프로그램
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
끝난 일:
출처: Bharadwaj, Satishkumar. “C에 파일이 있는지 확인”. Delft Stack, 2020년 12월 25일. https://www.delftstack.com/ko/howto/c/c-check-if-file-exists/.
*/
