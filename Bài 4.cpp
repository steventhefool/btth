#include <iostream>
using namespace std;
int main (){
	int num;
	printf ("nhap vao mot so nguyen: ");
	scanf ("%d",&num);
	if (num >0){
	for (int i =1; i <=num; i++){
		if (num % i==0){
			printf ("%d\n",i);
		}
	}
}
	else {
		printf ("khong phai la mot so nguyen duong.");
	}
	return 0;
}
