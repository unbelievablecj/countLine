#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef  char string[1000] ;
string ss,sss;

int bj(string x,const char y[]){
	int i;
	bool a=true;
	for (i=0;i<strlen(y);i++){
		if (x[i]!=y[i]) a=false;
	}
	if (a) return 1;
	else return 0;
}

void list(void){//得到list.txt 
	system("dir /A:-D /B >list.txt");
	FILE *f;
	if((f=fopen("list.txt","r"))==NULL){
		printf("wrong list open\n");
	}
}
string s1="\0";

bool have=true;

int getLine(string s){
	FILE *f;
	int a=strlen(s);
	s[a-1]='\0';
	
	if((f=fopen(s,"r"))!=NULL){
		
	}
	int line=1;
  char c; 
	
	while (fgets(sss,100,f)!=NULL){ 
		//putchar(c);
		 line++;
	}
	return line;
}

int getList(int x){ 
	FILE *f;
	f=fopen("list.txt","r");
	int a=0,i;
	bool c;
	
	while (c=fgets(ss,100,f)!=NULL){
		if(bj(ss,"list.txt")==1||bj(ss,"main.exe")==1)continue;
		a+=getLine(ss);
		
	}

	return a;
	
}

