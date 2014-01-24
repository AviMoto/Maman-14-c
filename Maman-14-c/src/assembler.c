/*
 * assembler.c
 *
 *  Created on: Jan 24, 2014
 *      Author: avi
 */


#include "assembler.h"

int main (int argc, char *argv[]){
	FILE *fp = NULL; /* file pointer */
	FILE *ob = NULL;
	FILE *entry = NULL;
	char *line;	/* the reading line */
	int index;

	/* test if there is all arguments*/
	if(argc < 2){
		fprintf(stderr,"usage: assembler filename[,filename,....]");
		exit(1);
	}
	for (index = 1; index < argc; ++index) {
		fp = getFile(argv[index]);

		/* read all line from the file */
		while(fgets(line,MAX_CHAR_IN_LINE,fp) != NULL){

		}
		releaseFile(fp);
	}

	return 0;
}
