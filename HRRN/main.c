#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "list.c"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//插入数据 
void insert();
int main(int argc, char** argv) {
	List * PList;
	insert(PList);
	return 0;
}
//插入数据 
void insert(List * PList){
	PCB * P;
		do{
		char *name;
		int comeTime;
		int severTime;
		char judge;
		printf("%s","\n请输入进程名\n");
		scanf("%s",&name);
		printf("%s","请输入进程到达时间\n");
		scanf("%d",&comeTime);
		printf("%s","请输入进程服务时间\n") ; 
		scanf("%d",&severTime);
		P=InsertPCB(name,comeTime,severTime);
		InsertNode(P,PList);
		printf("%s","还需输入进程吗 y/n\n"); 
		judge=getch();
		if(judge=='n'){
			//printf("yes");
			break;
		}else{
			//printf("no");
			continue;
		}
	}while(true);
} 
// 高响应比算法 
int HRRN(){
		
}