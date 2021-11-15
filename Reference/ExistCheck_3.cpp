/*
Define: File-Exist-Checking Program version 3.
*/


#include <stdio.h>
#include <unistd.h>

int main(void){
	//access() is function that inform file existing in certain folder. access() belong to unistd.h. "R_OK" to Redaing authority, "W_OK" to writing authority, "X_OK" to performing authority. "R_OK | W_OK" to reading and writing authority. 
	if( access("demo.txt", F_OK ) != -1){
		printf("file is found\n");
	}
	else{
		printf("file is not found\n");
	}
	return 0;
}


/*
Finish: 2021.10.21.
resource: Bharadwaj, Satishkumar. “C에 파일이 있는지 확인”. Delft Stack, 2020년 12월 25일. https://www.delftstack.com/ko/howto/c/c-check-if-file-exists/.
*/
