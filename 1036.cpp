//#include <stdio.h>
//#include <string.h>
//
//
//struct Student
//{
//	char name[11];
//	char sex;
//	char id[11];
//	int score;
//};
//
//
//int main()
//{
//	struct Student t,m1 = {"",'F',"",-1},m2 = {"",'M',"",111};
//	int m;
//	scanf("%d",&m);
//	for(int i = 0;i < m;i++)
//	{
//		scanf("%s %c %s %d",t.name,&t.sex,t.id,&t.score);
//		if(t.sex == 'F')
//		{
//			if(t.score > m1.score)
//			{
//				strcpy(m1.name,t.name);
//				strcpy(m1.id,t.id);
//				m1.score = t.score;
//			}
//		}
//		else
//		{
//			if(t.score < m2.score)
//			{
//				strcpy(m2.name,t.name);
//				strcpy(m2.id,t.id);
//				m2.score = t.score;
//			}
//		}
//	}
//	if(m1.score == -1)
//	{
//		printf("Absent\n");
//	}
//	else
//	{
//		printf("%s %s\n",m1.name,m1.id);
//	}
//	if(m2.score == 111)
//	{
//		printf("Absent\n");
//	}
//	else
//	{
//		printf("%s %s\n",m2.name,m2.id);
//	}
//	if(m1.score != -1 && m2.score != 111)
//	{
//		printf("%d\n",m1.score - m2.score);	
//	}
//	else
//	{
//		printf("NA\n");
//	}
//}
