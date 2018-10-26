#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	int i;
	printf("参数个数=%d\n",argc);
	for(i=0; i<argc; i++)
	{
		printf("参数序号=%d ",i);
		printf("参数值=%s\n",argv[i]);
	}
	system("PAUSE");
	return 0;
}
