/* 
Define: 코드 작성을 위한 참고자료 - 텍스트 파일 비교하는 프로그램
Memo:
 1. 언어 의사소통의 기본은 소리임을 주의하자.
Write date: 2021. 10. 14. ~ 
*/


#include <stdio.h>

int main(void){

	//declare file pointer fp1, fp2, fp3

	FILE * fp1;
	FILE * fp2;
	FILE * fp3;

	//fp1과 fp2를 비교하는 코드는 아래와 같다.

	while(1){
		//인덱스(index)를 나타내는 변수 i를 선언한다.
		int i = 0;
		//파일 포인터를 만든다.
		//파일 포인터로부터 일정 크기만큼 버퍼에 저장한다.
		//파일 포인터를 일정 크기만큼 이동시킨다.

		//파일 포인터가 EOF를 가리키는지 확인한다. 만일 EOF를 가리킨다면 반복문을 종료한다.
		break;
	}

	//fp1과 fp3를 비교하는 코드는 아래와 같다. 

	//close file pointer

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	return 0;
}

/*
Resource: 
1. 열심히 취업한 공대누나. “[C언어 독학하기] 20. 파일 입출력 (fopen_s)”. 공대누나의 일상과 전자공학, 2020년 12월 20일. https://gdnn.tistory.com/100?category=886154.
2. “C 언어 코딩 도장: 70.4 파일에서 문자열 읽기”. 접근된 2021년 10월 1일. https://dojang.io/mod/page/view.php?id=610.
*/

