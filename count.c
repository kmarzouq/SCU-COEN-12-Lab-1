#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 30

int main (int argc, char** argv){
if (argc!=2){
printf("failed to take in arguements");
exit(0);
}
FILE *fp;
char wrd[30];
fp = fopen (argv[1],"r");
if (fp == NULL){
printf("file failed to open");
exit(0);
}
int x =0;
while(fscanf(fp, "%s", wrd)==1){
x++;
}
//printf("%s,%d",argv[0],argc);
printf("%d words in the text", x);
fclose(fp);
}
