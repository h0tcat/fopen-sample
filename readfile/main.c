#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE* fp;
    char* text = "sukkiriC!!"; // Write chars
    int len = strlen(text);
    int ch;

    // write file to memo.txt

    if((fp = fopen("../memo.txt","w"))==NULL){
        exit(1);

    }
    for(int i=0;i<len;i++){ //write chars
        fputc(text[i],fp);
    }

    fclose(fp);

    //read file [memo.txt]

    if((fp=fopen("../memo.txt","r"))==NULL){
        exit(1);
    }

    while ((ch=fgetc(fp))!=EOF){
        putchar((char) ch); //print to Standard IO;
    }
    return 0;
}