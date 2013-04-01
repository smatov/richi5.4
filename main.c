/*
 * main.c
 *
 *  Created on: 26.03.2013
 *      Author: dev
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <fcntl.h>

int strend(char *s, char *t){
	while(*s!=*t) ++s;
	if(*s=='\0')
		return 0;
	while(*s==*t&&*s!='\0')
	{
		s++;
		t++;
	}
	if(*s!='\0'||*t!='\0') return 0;
	return 1;


}

int main() {
	char a[256];
	char b[256];
	strcpy(a,"vasyaabc");
	strcpy(b,"abcde");
	int x=strend(a,b);
	printf("%d\n",x);
	return 0;

}
