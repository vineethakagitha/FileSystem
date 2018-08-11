#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*typedef struct user_det
{
	int id;
	char name[10];
}user;
typedef struct cate{
	char cat_name[10];
	int userid;
	int users[20];
}cat;
typedef struct user_table{
	int id;
	int loc;
}user_tab;
typedef struct cat_table{
	int id;
	int loc;
}cat_tab;
typedef struct messages
{
	int msges[128];
	int cat;
};
typedef struct inode
{
	
};*/
void main()
{
	FILE *fp;
	int i;
	int offset = 0;
	char bital = '1', bitno = '0';
	fp = fopen("fileData.bin", "rb+");
	for (i = 0; i < 4; i++)
		fwrite(&offset,sizeof(int), 1, fp);
	for (i = 0; i < 64 * 1024; i++)
	{
		if (i < 513)
			fwrite(&bital, sizeof(char), 1, fp);
		else
			fwrite(&bitno, sizeof(char), 1, fp);
	}

}