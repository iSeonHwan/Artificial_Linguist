/* 
Define: 코드 작성을 위한 참고자료 - 텍스트 파일 비교하는 프로그램
Memo:
 1. 언어 의사소통의 기본은 소리임을 주의하자.
Write date: 2021. 9. 28. ~ 2021. 10. 1.
*/


#include <stdio.h>

int main(void){

	//declare fp1, fp2, fp3 as file pointer.
	FILE * fp1;
	FILE * fp2; 
	FILE * fp3;
	//make 'text' as buffer to save text file temporarily.
	char text1[100];
	char text2[100];
	char text3[100];
	//read text file.
	//fopen_s(&fp, "test.txt", "r"); 	//"r" is only read mode option. // It occur compile error in ubuntu. build evironment of resource data is windows(visual studio 2019). I think each evironment's offering function is different.
	fp1 = fopen("test_1.txt", "r");
	fp2 = fopen("test_2.txt", "r");
	fp3 = fopen("test_3.txt", "r");
	
	fgets(text1, 100, fp1);
	fgets(text2, 100, fp2);
	fgets(text3, 100, fp3);


	//set index value
	int i = 0;
	//implement iteration statement while index is not equal to 99.
	while(i != 99){
	    //increament index i if index's value of text1 is equal to index's value of text2.
	    if(text1[i] == text2[i]){
         i++;
	    }
	    //break iteration statement when index's value of text1 is not equal to index's value of text2.
	    else if(text1[i] != text2[i]){
	    	break;
	    }
	}
	//print result of judgment about two buffer's value equality.
	if(i == 99){
		printf("text1 is equal to text2.\n");
	}
	else if(i != 99){
		printf("text1 is not equal to text2.\n");
	}

	//set index 'j' value
	int j = 0;
	//repeat iteration statment befor index j value is certain value.
	while(j != 99){
	    //increament index j value when each values of same index is equal.
	    if(text1[j] == text3[j]){
         j++;
	    }
	    // break interation statement when each values of same index in not equal.
	    else if(text1[j] != text3[j]){
	    	break;
	    }
	}
	//print result of judgment about equality of value of index j
	if(j == 99){
		printf("text1 is equal to text3.\n");
	}
	else if(j != 99){
		printf("text1 is not equal to text3.\n");
	}


	//close text file.
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}

/*

이 프로그램의 문제점: 일정 버퍼의 크기만큼만 비교한다. 그 외의 데이터는 비교하지 않는다.

Resource: 
1. 열심히 취업한 공대누나. “[C언어 독학하기] 20. 파일 입출력 (fopen_s)”. 공대누나의 일상과 전자공학, 2020년 12월 20일. https://gdnn.tistory.com/100?category=886154.
2. “C 언어 코딩 도장: 70.4 파일에서 문자열 읽기”. 접근된 2021년 10월 1일. https://dojang.io/mod/page/view.php?id=610.
*/

