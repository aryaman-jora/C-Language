#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rollno;
	char name[10];
};
main()
{
struct student *s;
FILE *fp;
s=(struct student*)malloc(sizeof(struct student));
printf("enter roll no");
scanf("%d",&s->rollno);
printf("enter name");
scanf("%s",s->name);

fp=fopen("student","w+");
{
if(fp==NULL)
    {
		printf("file could not opened");
	}
else
	{
		fwrite(s,sizeof(struct student),1,fp);
	}	
}
fclose(fp);

fp=fopen("student","r+");
{
	if(fp==NULL)
	{
		printf("file could not opened");
	}
	else
	{
		fread(s,sizeof(struct student),1,fp);
		
		printf("%d",s->rollno);
		printf("%s",s->name);
	}
}
fclose(fp);
}
