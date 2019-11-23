#include<stdio.h>
#include<string.h>
void login()
{
	FILE *fp;
	char name[15];
	printf("Enter yor name:");
	fflush(stdin);
	gets(name);
	fp=fopen(name,"r");
	char ch;
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			printf("%c",ch);
		}
	}
	fclose(fp);
}
void new_acc()
{
	FILE *fp;
	char name[15];
	printf("Enter the number:");
	fflush(stdin);
	gets(name);
	fp=fopen(name,"a+");
	fputs(name,fp);
	fputs("\n=========\n",fp);
	char p[9],rp[9];
	printf("Enter the passwoad:");
	gets(p);
	printf("Enter the confome password:");
	gets(rp);
	if(strcmp(p,rp)==0)
	{
		printf("sacissful:");
		fputs(p,fp);
	}
	else
	{
		printf("woing password:");
	}
	fclose(fp);
}
int main()
{
	int user_pay;
	char name[15];
	int options;
	do{
		printf("=====UBI======\n");
		printf("LOGIN (1)\n");
		printf("NEW ACC(1)\n");
		printf("BALLANS DETTELS(3)\n");
		printf("Exit (0)\n");
		scanf("%d",&options);
		switch(options)
		{
			case 1:
				login();
				break;
				case 2:
					new_acc();
					break;
					case 3:
						break;
						default:
							printf("WOING....");
		}
	}while(options!=0);
}
