lude<string.h>
#define M 5
#define N 20
void main()
{
	int i,j;
	char x[N];
	char a[M][N];
	printf("Input name: \n");
	for(i=0;i<M;i++)
	gets(a[i]);
	for(i=1;i<M;i++)
	for(j=0;j<M-i;j++)
	if(strcmp(a[j],a[j+1])>0)
	{
		strcpy(x,a[j+1]);
		strcpy(a[j+1],a[j]);
		strcpy(a[j],x);
	}
	for(i=0;i<M;i++)
	printf("%s ",a[i]);
}
