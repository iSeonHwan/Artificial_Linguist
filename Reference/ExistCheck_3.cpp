/*
정의: 파일이 있는지 여부를 확인하는 프로그램
*/


#include <stdio.h>
#include <unistd.h>

int main(void){
	//access()함수는 파일이 존재하는지 어떤 속성인지 알려주는 함수이다. unistd.h에 포함된 함수이다. 읽기 권한에는 R_OK, 쓰기 권한에는 W_OK, 실행 권한에는 X_OK를 사용할 수 있다. 읽기 및 쓰기 권한을 위해 R_OK | W_OK로 함께 사용할 수 있다.
	if( access("demo.txt", F_OK ) != -1){
		printf("file is found\n");
	}
	else{
		printf("file is not found\n");
	}
	return 0;
}


/*
끝난 일: 2021.10.21.
출처: Bharadwaj, Satishkumar. “C에 파일이 있는지 확인”. Delft Stack, 2020년 12월 25일. https://www.delftstack.com/ko/howto/c/c-check-if-file-exists/.
*/
