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

int strend(char *s, char *t) {
	if (*t == '\0')
		return 1;
	if (*s == '\0')
		return 0;
	int ct = 0;
	while (*s)
		s++;
	while (*t) {
		ct++;
		t++;
	}
	while (*s == *t&&ct>0) {
		s--;
		t--;
		ct--;
	}
	if(ct==0) return 1;
	return 0;

}

int main() {
	char *b = malloc(sizeof(char) * 50);
	char *a = malloc(sizeof(char) * 50);
	strcpy(a, "1");
	strcpy(b, "");
	int x = strend(a, b);
	printf("%d\n", x);
	free(a);
	free(b);
	return 0;

}
