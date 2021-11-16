/*
Define: Local time outputing programe
Data: 2021.11.16.
*/


#include <time.h>
#include <cstdio>

int main(void){

	//Get the Current time
	time_t curTime = time(NULL);
	
	//Convert the current time
	struct tm * pLocal = NULL;
	
#if defined (_WIN32) || defined(_WINt64)
	pLocal = localtime(&curTime);
	
#else
	localtime_r(&curTime, pLocal);
	
#endif
	if (pLocal == NULL){
	//Failed to convert the current time
		return 1;
	}
	
	//Print the current time
	//printf("%04d-%02d-%02dT%02d:%02d:02d", pLocal->tm_year + 1900, pLocal->tm_mon + 1, pLocal->tm_mday, pLocal->tm_hour, pLocal->tm_min, pLocal->tm_sec);
	printf("%04d-%02d-%02d \n", pLocal->tm_year + 1900, pLocal->tm_mon + 1, pLocal->tm_mday);
	
	//return success
	return 0;
}




/*
Resource: C and C++. “C/C++ localtime 함수로 현재 시간 출력하기”. Calvin’s Memo, 2019년 12월 8일. https://calvinjmkim.tistory.com/31.
Data: 2011.11.16.
*/
