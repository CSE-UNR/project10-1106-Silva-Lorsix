//Lorsix Silva
//CS135
//Project10


//Need 6 Functions


#include <stdio.h>

#define FILENAME "mystery.txt"
#define ROW_CAP 6
#define COLUMN_CAP 6


int copyWord(FILE* wordFile, int columns, char selectedWord[][columns]);
int sizeChecker(FILE* wordFile, int size, char userGuess [][size]);
//void attemptCounter(int guessNum, );


int main(){
//file pointer, declare arrays and variables
	int size = 0;
	char userGuess[ROW_CAP];
	char selectedWord[ROW_CAP][COLUMN_CAP];
	int guessNum = 0;
	FILE* wordFile;

	wordFile = fopen(FILENAME, "r");
//Check for File
	if(wordFile == NULL){
		printf("Couldn't open file\n");
		return 0;
		}
	size = copyWord(wordFile, COLUMN_CAP, selectedWord);
	sizeChecker(size, );
	fclose(wordFile);
//game part
	do(
	printf("GUESS %d! Enter your guess: ", guessNum + 1);
	fgets(userGuess, ROW_CAP, stdin);
	guessNum++
	}while(guessNumber < 6 && userGuess[size] != selectedWord[size]);

return 0;
}



//Functions

int copyWord(FILE* wordFile, int columns, char selectedWord[][columns]){

int size = 0;

while(fscanf(wordFile, "%s", selectedWord[size]) == 1){
		size++;
		}		
		return size;
	}
	
int sizeChecker(FILE* wordFile, int size, char userGuess[]){

while (size < 5) {
printf("Please enter a 5 letter word: ");
size = copyWord(wordFile, COLUMN_CAP, selectedWord);
}

return size;
}
