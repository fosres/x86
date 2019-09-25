unsigned long get_sp(void)
{
	__asm__("movl %esp,%eax");
}

int main(void)
{
	printf("0x%x\n",get_sp());
}
