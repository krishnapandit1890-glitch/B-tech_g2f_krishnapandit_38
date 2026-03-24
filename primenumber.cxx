#include<stdio.h>
int main (){
	int n,i;
	printf("enter the number:");
	scanf("%d",&n);
	if (n<=1){printf("not a prime number");
	}
	else { for(i=2;i*i<=n;i++){
		if(n%=0){
			printf("not prime");
		break;
		}
	}
	if(i*i>n){printf("prime");
	}
	}
	return 0;
}