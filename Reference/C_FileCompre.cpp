/* 
Define: 코드 작성을 위한 참고자료 - 텍스트 파일 비교하는 프로그램
Memo:
 1. 언어 의사소통의 기본은 소리임을 주의하자.
Write date: 2021. 9. 28. ~ 2021. 10. 1.
*/


#include <stdio.h>

int main(void){

	//파일 포인터 fp1, fp2, fp3를 선언한다.
	FILE * fp1;
	FILE * fp2; 
	FILE * fp3;
	//읽어들인 텍스트 파일을 임시로 저장할 (버퍼) 변수 'text'를 만든다.
	char text1[100];
	char text2[100];
	char text3[100];
	//텍스트 파일을 읽어들인다.
	//fopen_s(&fp, "test.txt", "r"); // "r"은 읽기 전용의 옵션을 가리킨다. //우분투 환경에서는 컴파일 오류가 발생하였다. 출처 자료의 빌드 환경은 윈도우의 비주얼 스튜디오 2019였다. 즉, 환경에 따라 지원하는 함수가 달라지는 것 같다.
	fp1 = fopen("test_1.txt", "r");
	fp2 = fopen("test_2.txt", "r");
	fp3 = fopen("test_3.txt", "r");
	
	fgets(text1, 100, fp1);
	fgets(text2, 100, fp2);
	fgets(text3, 100, fp3);
	
	//인덱스 값을 설정한다.
	int j = 0;
	//일정한 인덱스 값이 되기 전까지 반복문을 돈다.
	while(j != 99){
	    if(text1[j] == text2[j]){
	          //인덱스 값의 조건을 충족하지 못했다면, 1을 증가시킨다. 만일, 인덱스의 값을 충족했다면 두 버퍼의 텍스트가 동일함을 출력하고 반복문을 종료한다.
	        if(j != 99){j++;}
	        else{
	            printf("text1 is equal to text2.\n");
	            break;
	            }
	    }
	     //점검 중간에 다름이 발견되면, 두 텍스트가 동일하지 않음을 출력하고 반복문을 종료한다.
	    else{
	        printf("text1 is not equal to text2.\n");
	        break;
	    }
	}


	//읽어들인 텍스트 파일을 닫는다.
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

