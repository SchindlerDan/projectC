int read_file( char* filename, char** buffer){
	//used some code from CIS 241
	File *in;

	in = fopen("test.txt", "r");
	if(in == NULL){
		printf("This file could not be found");
		exit(1);
	}
	int columns;
	int rows;
	fscanf(in, %d, &columns);
	fscanf(in, %d, &rows);
	char[rows][columns] map;
	int x;
	int y;
	//aasked Brendon Murthum and Tanner Gibson about fscanf
	//went to tutorialspoint.com to confirm that C for loops are created like java and C++ for loops
	for(x = 0; x < rows; x++ ){
		for(y = 0; y < colums; y++){
			fscanf(in, %c, map[x][y]);
		}
	}

	free(*buffer);
	*buffer = &map;

	for(x = 0; x < rows; x++){
		for(y = 0; y < columns; y++){
			fprintf(%c, map[x][y]);
		}
	
	}

}



int write_file( char* filename, char *buffer, int size){




}
