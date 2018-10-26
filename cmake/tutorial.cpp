#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TutorialConfig.h"
int main(int argc,char * argv[]){

	if (argc < 2){
		fprintf(stdout,"使用方法是:%s number\n",argc[0]);
		return 1;		
	}
	double in_val = atof(argv[1]);
	double out_val = sqrt(in_val);
	fprintf(stdout,"the square root of %g is %g\n",in_val,out_val);
	return 0;
}
