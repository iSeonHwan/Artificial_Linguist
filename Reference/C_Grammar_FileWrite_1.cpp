/*
Define: 파일을 쓰는 C 함수 fopen_s()에 대한 간단한 예시
Write datd: 2021.10.1.
Resource: 공대누나의 일상과 전자공학. “[C언어 독학하기] 21. 파일 입출력, puts fgetc, fputc”, 2020년 12월 31일. https://gdnn.tistory.com/110?category=886154.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE * fp;
	int end = 0;
	fopen_s(&fp, "text_name.txt", "w"); //우분투 환경에서 컴파일 오류가 발생하였다. 빌드 환경에 따라 문법에 차이가 있는 것 같다.

	if (fp == NULL){
		printf("실패\n");
		return 1;
	}
	
	puts("숫자를 입력하세요"); //put()는 문자열을 출력하는 함수이다. 단, 문자열 뒤에 개행이 추가된다. 실패하면 EOF를 반환하고 성공하면 음수가 아닌 수를 반환한다.
	
	while(end != EOF){
		end = fgetc(stdin);
		fputc(end, fp);
	}
	fclose(fp);
	return 0;
}
