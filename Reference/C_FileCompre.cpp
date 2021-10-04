/* 
Define: 코드 작성을 위한 참고자료 - 텍스트 파일 비교하는 프로그램
Memo:
 1. 언어 의사소통의 기본은 소리임을 주의하자.
Write date: 2021. 9. 28. ~ 2021. 10. 1.
*/


#include <stdio.h>

void ComfirmFile ( FILE * agr1 );
void PrintFile(FILE * arg1);


int main(void){

	//파일 포인터 fp를 선언한다.
	FILE * fp1, fp2, fp3;
	//읽어들인 텍스트 파일을 임시로 저장할 (버퍼) 변수 'text'를 만든다.
	char text[100];
	//텍스트 파일을 읽어들인다.
	//fopen_s(&fp, "test.txt", "r"); // "r"은 읽기 전용의 옵션을 가리킨다. //우분투 환경에서는 컴파일 오류가 발생하였다. 출처 자료의 빌드 환경은 윈도우의 비주얼 스튜디오 2019였다. 즉, 환경에 따라 지원하는 함수가 달라지는 것 같다.
	fp1 = fopen("test_1.txt", "r");
	fp2 = fopen("test_2.txt", "r");
	fp3 = fopen("test_3.txt", "r");
	
	//파일을 정상적으로 읽었는지의 여부를 검사한다.
	/*
	if(fp1 == NULL){
		printf("파일 읽기 실패 \n");
		return 1;
	}
	if(fp2 == NULL){
		printf("파일 읽기 실패 \n");
		return 1;
	}
	if(fp3 == NULL){
		printf("파일 읽기 실패 \n");
		return 1;
	}
	*/
	/* 위의 코드를 아래와 같이 일반환한다.
	void ComfirmFile ( FILE * agr1 ){
	if(agr1 == NULL]){
		printf("파일 읽기 실패 \n");
		return 1;
		}
	}
	*/
	ComfirmFile(fp1);
	ComfirmFile(fp2);
	ComfirmFile(fp3);
	
	/*
	while(1){
		fgets(text, 100, fp1); //fgets()는 데이터를 한 줄씩 읽어들이는 함수이다.
		printf("%s\n", text);
		if(feof(fp1)) break; //feof()는 파일의 끝을 만나면 true를 돌려주는 함수이다.
	}
	
	while(1){
		fgets(text, 100, fp2);
		printf("%s\n", text);
		if(foef(fp2)) break;
	}
	
	while(1){
		fgets(text, 100, fp3);
		printf("%s\n", text);
		if(foef(fp3)) break;
	}
	*/
	/* 위 코드를 일반화하하고 사용자 정의 함수로 만들면 아래와 같다.
	void PrintFile(FILE * arg1){
		while(1){
			fgets(text, 100, FILE * arg1);
			printf("%s\n", text);
			if(foef(FILE * arg1)) break;
		}
	}
	*/
	PrintFile(fp1);
	PrintFile(fp2);
	PrintFile(fp3);
	
	//읽어들인 텍스트 파일을 닫는다.
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}

void ComfirmFile ( FILE * agr1 ){
if(agr1 == NULL]){
	printf("파일 읽기 실패 \n");
	return 1;
	}
}

void PrintFile(FILE * arg1){
	printf("======FILE=====\n");
	while(1){
		fgets(text, 100, FILE * arg1);
		printf("%s\n", text);
		if(foef(FILE * arg1)) break;
	}
}

/*
Resource: 
1. 열심히 취업한 공대누나. “[C언어 독학하기] 20. 파일 입출력 (fopen_s)”. 공대누나의 일상과 전자공학, 2020년 12월 20일. https://gdnn.tistory.com/100?category=886154.
2. “C 언어 코딩 도장: 70.4 파일에서 문자열 읽기”. 접근된 2021년 10월 1일. https://dojang.io/mod/page/view.php?id=610.
*/

