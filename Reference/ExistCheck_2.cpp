/*
Define : Programe(v2) to check in certain folder
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
    //state() is function reading file attribute. this function return 0 if its work success. and this return -1 if fail.
    int exist = stat(filename, &buffer);
    if(exist == 0){
        return 1;
    }
    else{
        return 0;
    }
}

/*
Finish: 2021.10.20.
출처: Bharadwaj, Satishkumar. “C에 파일이 있는지 확인”. Delft Stack, 2020년 12월 25일. https://www.delftstack.com/ko/howto/c/c-check-if-file-exists/.
*/
