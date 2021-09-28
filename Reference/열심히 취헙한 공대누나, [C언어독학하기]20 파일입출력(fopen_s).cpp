/* 
정의: 코드 작성을 위한 참고자료
출처: 열심히 취업한 공대누나. “[C언어 독학하기] 20. 파일 입출력 (fopen_s)”. 공대누나의 일상과 전자공학, 2020년 12월 20일. https://gdnn.tistory.com/100.
*/


#include <stdio.h>

int main(void){

	//파일 포인터 fp를 선언한다.
	FILE * fp;
	//읽어들인 텍스트 파일을 저장할 변수 'text'를 만든다.
	char text[100];
	//텍스트 파일을 읽어들인다.
	fopen_s(&fp, "test.txt", "r"); // "r"은 읽기 전용의 옵션을 가리킨다.
	
	if(fp == NULL){
		printf("파일 읽기 실패 \n");
		return 1;
	}
	while(1){
		fgets(text, 100, fp);
		printf("%s\n", text);
		if(feof(fp)) break; //feof()는 파일의 끝을 만나면 true를 돌려주는 함수이다.
	}
	//읽어들인 텍스트 파일을 닫는다.
	fclose(fp);
	return 0;
}
