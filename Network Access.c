#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int employeeID,securitytraining,account;
	printf("is your employeeID valid?");
	scanf("%d",&employeeID);
	if(employeeID==1){
		printf("valid\n");
	}
	else 
	printf("not valid\n");
	printf("have you completed securitytraining?");
	scanf("%d",&securitytraining);
	if(securitytraining==1){
		printf("complete\n");
	}
	else
	printf("incomplete\n");
	printf("is your account active ?");
	scanf("%d",&account);
	if (account==1){
		printf("active\n");
	}
	else 
	printf("inactive\n");
	if(employeeID==0){
		printf("access rejected:invalid employeeID\n");
		}
	else 
	printf("access granted\n");
		if(employeeID==1&&securitytraining==0){
			printf("acces rejected:training required\n");
		}
		else
		printf("access granted\n");
			if(employeeID==1&&securitytraining==1&&account==0){
				printf("access rejected:account inactive\n");
			}
			else 
			printf("access granted\n");
				if(employeeID==1&&securitytraining==1&&account==1){
					printf("acces granted\n");
				}
					return 0;
}
