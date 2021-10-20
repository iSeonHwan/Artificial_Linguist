/*
정의: 파일이 있는지 여부를 확인하는 프로그램
*/

#include <stdio.h>
#include <sys/stat.h>

int checkFileExists(const char * filename);

int main(void){

    if(checkFileExists("test_1.txt")){
        printf("file exists\n");
    }
    else{
        printf("file does not exists\n");
    }
}

int checkFileExists(const char * filename){
    struct stat buffer;
    //stat() 함수는 파일의 속성을 읽는 함수이다. 이 함수는 작업이 성공하면 0을 반환한다. 그렇지 않고 파일이 존재하지 않으면 -1을 반환한다. 
    int exist = stat(filename, &buffer);
    if(exist == 0){
        return 1;
    }
    else{
        return 0;
    }
}

/*
끝난 일: 2021.10.20.
출처: Bharadwaj, Satishkumar. “C에 파일이 있는지 확인”. Delft Stack, 2020년 12월 25일. https://www.delftstack.com/ko/howto/c/c-check-if-file-exists/.
*/
