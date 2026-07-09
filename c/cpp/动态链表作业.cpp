 #include<stdio.h>
 #include<stdlib.h>
 #define LEN sizeof(struct Student)
struct Student{
	long num;
    float score;
    struct Student *next;
};
int n;
struct Student *creat(void){
    struct Student *head,*p1,*p2;
    n=0;
    p1=p2=(struct Student*)malloc(LEN);
    scanf("%ld%f",&p1->num,&p1->score);
    head=NULL;
    while(p1->num!=0){
		n=n+1;
        if(n==1){
            head=p1;
        }else{
            p2->next=p1;
        }
        p2=p1;
        p1=(struct Student*)malloc(LEN);
        scanf("%ld%f",&p1->num,&p1->score);
    }
    p2->next=NULL;
    return(head);
}
void print(struct Student *head){
    struct Student *p;
    p=head;
    if(head!=NULL){
    do{
        printf("%ld %5.1f\n",p->num,p->score);
        p=p->next;
    }while(p!=NULL);
	}
}
int main()
{
	struct Student *pt,*head,*p,*q;
	pt=creat();
	printf("初次遍历链表：\n");
	print(pt);
	head=pt;
	struct Student max,*m;
	max.score=0;m=&max;
	p=head;
	do{
    	if(p->score>m->score){
        	m=p;
    	}
    	p=p->next;
	}while(p!=NULL);
	printf("分数最高的学生数据为：\n%ld %5.1f\n",m->num,m->score);
	return 0;
}
