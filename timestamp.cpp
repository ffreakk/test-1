#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

int main(){
    
	time_t ltime; /* calendar time */
	ltime=time(NULL); /* get current cal time */
	printf("%s",asctime( localtime(&ltime) ) );
//	cout << asctime( localtime(&ltime) << endl;
	return 0;
}
