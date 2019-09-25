#include <stdio.h>

int main(int argc,char*argv[])
{
	char buf[512];

	if(argc>1)
	{
		strncpy(buf,argv[1],512);
	}
}
