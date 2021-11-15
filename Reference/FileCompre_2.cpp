/* 
Define: 코드 작성을 위한 참고자료 - 텍스트 파일 비교하는 프로그램
Memo:
 1. 언어 의사소통의 기본은 소리임을 주의하자.
Write date: 2021. 10. 14. ~ 
*/

#include <stdio.h>

int main(void){

	//declare file pointer fp1, fp2.
	FILE * fp1;
	FILE * fp2;
	FILE * fp3;

	//fp1 is subject of comparing text.
	//fp2 is object of comparing text.
	//fp3 is object of saving text.

	//make buffer. buffer size is 1. this buffer is unit to compare two text.
	char buffer1[1];
	char buffer2[1];

	//fp1과 fp2를 비교하는 코드는 아래와 같다.
	while(1){
		//인덱스(index)를 나타내는 변수 i를 선언한다.
		int i = 0;
		
		//파일 포인터로부터 일정 크기만큼 버퍼에 저장한다.
		fp1 = fopen("test1.txt", "r");
		fp2 = fopen("test2.txt", "r");
		fp3 = fopen("test3.txt", "w");

		//save buffer text file.
		fgets(buffer1, 1, fp1);
		fgets(buffer2, 1, fp2);

		//파일 포인터가 EOF를 가리키는지 확인한다. 만일 EOF를 가리킨다면 반복문을 종료한다. 
		if( (buffer1[0]==EOF) || (buffer2[0]==EOF) ){
			break;
		}

		//compare buffer. if two buffer is same, then content of buffer save.
		if( buffer1[0] == buffer2[0]){
			fputc(buffer1[0], fp3);
		}

		//move next position of pointer as size as char.
		fp1 = fp1 + sizeof(char);
		fp2 = fp2 + sizeof(char);
	}



	//close file pointer
	fclose(fp1);
	fclose(fp2);

	return 0;
}

/*
Resource: 
1. 열심히 취업한 공대누나. “[C언어 독학하기] 20. 파일 입출력 (fopen_s)”. 공대누나의 일상과 전자공학, 2020년 12월 20일. https://gdnn.tistory.com/100?category=886154.
2. “C 언어 코딩 도장: 70.4 파일에서 문자열 읽기”. 접근된 2021년 10월 1일. https://dojang.io/mod/page/view.php?id=610.
3. “C 언어 레퍼런스 - fopen 함수”. 접근된 2021년 10월 16일. https://modoocode.com/58.
4. 청. “[C언어] 파일의 끝 (feof)”. 네이버 블로그 | 청청청. 접근된 2021년 10월 16일. https://blog.naver.com/ehdwls3831/221351564239.
*/

