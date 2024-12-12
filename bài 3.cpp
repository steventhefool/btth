#include <iostream>
using namespace std;
int main (){
	int select;
	float input, output;
	printf ("==============CHUONG TRINH CHUYEN DOI TIEN TE==============\n");
	printf ("1. USD to VND\n");
	printf ("2. EUR to VND\n");
	printf ("3. GBP to VND\n");
	printf ("4. JPY to VND\n");
	printf ("5. VND to USD\n");
	printf ("6. VND to EUR\n");
	printf ("7. VND to GBP\n");
	printf ("8. VND to JPYY\n");
	printf ("Nhap don vi tien te ban muon chuyen doi (1-8)? ");
	scanf ("%d", &select);
	switch (select){
		case 1:
			printf ("Nhap so tien ban muon doi tu USD sang VND: ");
			scanf ("%f", &input);
			output = 23500 * input;
			printf ("So tien VND doi tu %f USD la: %f VND", input, output);
			break;
		case 2:
			printf ("Nhap so tien ban muon doi tu EUR sang VND: ");
			scanf ("%f", &input);
			output = 25000 * input;
			printf ("So tien VND doi tu %f EUR la: %f VND", input, output);
			break;
		case 3:
			printf ("Nhap so tien ban muon doi tu GBP sang VND: ");
			scanf ("%f", &input);
			output = 28000 * input;
			printf ("So tien VND doi tu %f GBP la: %fVND", input, output);
			break;
		case 4:
			printf ("Nhap so tien ban muon doi tu JPY sang VND: ");
			scanf ("%f", &input);
			output = 180 * input;
			printf ("So tien VND doi tu %f JPY la: %f VND", input, output);
			break;
		case 5:
			printf ("Nhap so tien ban muon doi tu VND sang USD: ");
			scanf ("%f", &input);
			output = input /23500;
			printf ("So tien USD doi tu %f VND la: %f USD", input, output);
			break;
		case 6:
			printf ("Nhap so tien ban muon doi tu VND to EUR: ");
			scanf ("%f", &input);
			output = input/25000;
			printf ("So tien EUR doi tu %f VND la: %f EUR", input, output);
			break;
		case 7:
			printf ("Nhap so tien ban muon doi tu VND sang GBP: ");
			scanf ("%f", &input);
			output = input/28000;
			printf ("So tien GBP doi tu %f VND la: %f GBP", input, output);
			break;
		case 8:
			printf ("Nhap so tien ban muon doi tu VND sang JPY: ");
			scanf ("%f", &input);
			output = input/180;
			printf ("So tien JPY doi tu %fVND la: %f JPY ", input, output);
			break;
		default:
			printf("khong hop le");
			break;
	}
	return 0;
}
