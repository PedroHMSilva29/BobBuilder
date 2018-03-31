#include <stdio.h>
#include <stdlib.h>

#define PROGRAMA 100
#define PROCEDIMENTO 101
#define FIMPROCEDIMENTO 102
#define INTEIRO 103
#define BOOLEANO 104
#define SE 105
#define ENTAO 106
#define SENAO 107
#define FIMSE 108
#define ESCREVA 109
#define VERDADEIRO 110
#define FALSO 111
#define ENQUANTO 112
#define FACA 113
#define FIMENQUANTO 115
#define FIMPROGRAMA 116
#define IDENTIFICADOR 117
#define ERROR 666

int scanner(char cod[], int *pos){
	q0: 
		if(cod[*pos] == 'p'){
			printf("\n %c", cod[*pos] );
			goto q1;
		}else if(cod[*pos] == 's'){
			printf("\n %c", cod[*pos] );
			goto q10;
		}else if(cod[*pos] == 'b'){
			printf("\n %c", cod[*pos] );
			goto q27;
		}else if(cod[*pos] == 'e'){
			printf("\n %c", cod[*pos] );
			goto q36;
		}else if(cod[*pos] == 'f'){
			printf("\n %c", cod[*pos] );
			goto q56;
		}else if(cod[*pos] == 'i'){
			printf("\n %c", cod[*pos] );
			goto q98;
		}else if(cod[*pos] == 'v'){
			printf("\n %c", cod[*pos] );
			goto q106;
		}else if((cod[*pos] == 'A') ||  (cod[*pos] == 'B') ||  (cod[*pos] == 'C') ||  (cod[*pos] == 'D') ||  (cod[*pos] == 'E') ||  (cod[*pos] == 'F') ||  (cod[*pos] == 'G') ||  (cod[*pos] == 'H') ||  (cod[*pos] == 'I') ||  (cod[*pos] == 'J') ||  (cod[*pos] == 'K') ||  (cod[*pos] == 'L') ||  (cod[*pos] == 'M') ||  (cod[*pos] == 'N') ||  (cod[*pos] == 'O') ||  (cod[*pos] == 'P') ||  (cod[*pos] == 'Q') ||  (cod[*pos] == 'R') ||  (cod[*pos] == 'S') ||  (cod[*pos] == 'T') ||  (cod[*pos] == 'U') ||  (cod[*pos] == 'V') ||  (cod[*pos] == 'W') ||  (cod[*pos] == 'X') ||  (cod[*pos] == 'Y') ||  (cod[*pos] == 'Z') ||  (cod[*pos] == 'a') ||   (cod[*pos] == 'c') ||  (cod[*pos] == 'd') ||  (cod[*pos] == 'g') ||  (cod[*pos] == 'h') ||    (cod[*pos] == 'j') ||  (cod[*pos] == 'k') ||  (cod[*pos] == 'l') ||  (cod[*pos] == 'm') ||  (cod[*pos] == 'n') ||  (cod[*pos] == 'o') ||  (cod[*pos] == 'q') ||  (cod[*pos] == 'r') ||   (cod[*pos] == 't') ||  (cod[*pos] == 'u') ||  (cod[*pos] == 'w') ||  (cod[*pos] == 'x') ||  (cod[*pos] == 'y') ||  (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;			
		}


	q1: (*pos)++;
		if(cod[*pos] == 'r'){
			printf("\n %c", cod[*pos] );
			goto q2;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z') ){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		else {
			printf("\n %c", cod[*pos] );
			goto q666;
		}

  	q2: (*pos)++;
		if(cod[*pos] == 'o'){
			printf("\n %c", cod[*pos] );
			goto q3;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		else {
			printf("\n %c", cod[*pos] );
			goto q666;
		}

  	q3: (*pos)++;
  	
		if(cod[*pos] == 'g'){
			printf("\n %c", cod[*pos] );
			goto q4;
		}else if(cod[*pos] == 'c'){
			printf("\n %c", cod[*pos] );
			goto q17;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q4: (*pos)++;
  	
		if(cod[*pos] == 'r'){
			printf("\n %c", cod[*pos] );
			goto q5;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q5: (*pos)++;
  	
		if(cod[*pos] == 'a'){
			printf("\n %c", cod[*pos] );
			goto q6;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q6: (*pos)++;
  	
		if(cod[*pos] == 'm'){
			printf("\n %c", cod[*pos] );
			goto q7;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q7: (*pos)++;
  	
		if(cod[*pos] == 'a'){
			printf("\n %c", cod[*pos] );
			goto q8;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q8: (*pos)++;
  	
		if(cod[*pos] == ' '){
			printf("\n %c", cod[*pos] );
			goto q9;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}
  	q9: (*pos)++;
  	 return PROGRAMA;

  	q10: (*pos)++;
  	
  	 	if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q11;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q11: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q12;
  	 	}else if(cod[*pos] == 'n'){
			printf("\n %c", cod[*pos] );
			goto q13;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}
  	 q12: (*pos)++;
  	  return SE;

  	 q13: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q14;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q14: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q15;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q15: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q16;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q16: (*pos)++;
  	 	return SENAO;	

  	 q17: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q18;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q18: (*pos)++;
  	 if (cod[*pos] == 'd'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q19;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q19: (*pos)++;
  	 if (cod[*pos] == 'i'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q20;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q20: (*pos)++;
  	 if (cod[*pos] == 'm'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q21;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q21: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q22;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q22: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q23;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q23: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q24;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q24: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q25;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q25: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q26;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}
  	 q26: (*pos)++;
  	 return PROCEDIMENTO;

  	 q27: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q28;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 q28: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q29;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q29: (*pos)++;
  	 if (cod[*pos] == 'l'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q30;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	q30: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q31;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	q31:(*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q32;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	q32:(*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q33;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	q33:(*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q34;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q34:(*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q35;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}
		
  	 q35:(*pos)++;
  	 return BOOLEANO;

  	 q36: (*pos)++;
  	 if (cod[*pos] == 's'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q37;
  	 	}else if(cod[*pos] == 'n'){
			printf("\n %c", cod[*pos] );
			goto q44;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q37: (*pos)++;
  	 if (cod[*pos] == 'c'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q38;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q38: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q39;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
  	 	
  	 q39: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q40;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q40: (*pos)++;
  	 if (cod[*pos] == 'v'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q41;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q41: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q42;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q42: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q43;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}
  	 q43: (*pos)++;
 		return ESCREVA;

  	 q44: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q45;
  	 	}else if(cod[*pos] == 'q'){
			printf("\n %c", cod[*pos] );
			goto q49;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q45: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q46;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q46: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q47;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q47: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q48;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q48: (*pos)++;
 		return ENTAO;

  	 q49: (*pos)++;
  	 if (cod[*pos] == 'u'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q50;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q50: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q51;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q51: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q52;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q52: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q53;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q53: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q54;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q54: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q55;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q55: (*pos)++;
	  	 return ENQUANTO;

  	 q56: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q57;
  	 	}else if(cod[*pos] == 'i'){
			printf("\n %c", cod[*pos] );
			goto q65;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q57: (*pos)++;
  	 if (cod[*pos] == 'c'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q58;
  	 	}else if(cod[*pos] == 'l'){
			printf("\n %c", cod[*pos] );
			goto q61;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q58: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q59;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q59: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q60;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q60: (*pos)++;
  	 	return FACA;

  	 q61: (*pos)++;
  	 if (cod[*pos] == 's'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q62;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q62: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q63;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q63: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q64;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q64: (*pos)++;
  		return FALSO;

  	 q65: (*pos)++;
  	 if (cod[*pos] == 'm'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q66;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q66: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q67;
  	 	}else if(cod[*pos] == 'p'){
			printf("\n %c", cod[*pos] );
			goto q76;
		}else if(cod[*pos] == 's'){
			printf("\n %c", cod[*pos] );
			goto q95;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q67: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q68;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q68: (*pos)++;
  	 if (cod[*pos] == 'q'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q69;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q69: (*pos)++;
  	 if (cod[*pos] == 'u'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q70;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q70: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q71;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q71: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q72;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q72: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q73;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q73: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q74;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q74: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q75;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q75: (*pos)++;
  	  return FIMENQUANTO;

  	 q76: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q77;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q77: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q78;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
  	 q78: (*pos)++;
  	 if (cod[*pos] == 'c'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q79;
  	 	}else if(cod[*pos] == 'g'){
			printf("\n %c", cod[*pos] );
			goto q89;
		}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q79: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q80;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q80: (*pos)++;
  	 if (cod[*pos] == 'd'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q81;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q81: (*pos)++;
  	 if (cod[*pos] == 'i'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q82;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q82: (*pos)++;
  	 if (cod[*pos] == 'm'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q83;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l')  || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q83: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q84;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q84: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q85;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q85: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q86;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q86: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q87;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q87: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q88;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q88: (*pos)++;
  	 	return FIMPROCEDIMENTO;

  	 q89: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q90;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q90: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q91;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q91: (*pos)++;
  	 if (cod[*pos] == 'm'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q92;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q92: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q93;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q93: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q94;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q94: (*pos)++;
 		return FIMPROGRAMA;

  	 q95: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q96;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q96: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q97;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q97: (*pos)++;
  	 	return FIMSE;

  	 q98: (*pos)++;
  	 if (cod[*pos] == 'n'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q99;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q99: (*pos)++;
  	 if (cod[*pos] == 't'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q100;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q100: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q101;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q101: (*pos)++;
  	 if (cod[*pos] == 'i'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q102;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q102: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q103;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q103: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q104;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

  	 q104: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q105;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

  	 q105: (*pos)++;
		return INTEIRO;

	 q106: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q107;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q107: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q108;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q108: (*pos)++;
  	 if (cod[*pos] == 'd'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q109;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q109: (*pos)++;
  	 if (cod[*pos] == 'a'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q110;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q110: (*pos)++;
  	 if (cod[*pos] == 'd'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q111;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
	 q111: (*pos)++;
  	 if (cod[*pos] == 'e'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q112;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
	 q112: (*pos)++;
  	 if (cod[*pos] == 'i'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q113;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
	 q113: (*pos)++;
  	 if (cod[*pos] == 'r'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q114;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}
		
	 q114: (*pos)++;
  	 if (cod[*pos] == 'o'){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q115;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}else if(cod[*pos] == ' '){
			goto q118;
		}

	 q115: (*pos)++;
  	 if (cod[*pos] == ' '){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q116;
  	 	}else  if ((cod[*pos] == 'A') || (cod[*pos] == 'B') || (cod[*pos] == 'C') || (cod[*pos] == 'D') || (cod[*pos] == 'E') || (cod[*pos] == 'F') || (cod[*pos] == 'G') || (cod[*pos] == 'H') || (cod[*pos] == 'I') || (cod[*pos] == 'J') || (cod[*pos] == 'K') || (cod[*pos] == 'L') || (cod[*pos] == 'M') || (cod[*pos] == 'N') || (cod[*pos] == 'O') || (cod[*pos] == 'P') || (cod[*pos] == 'Q') || (cod[*pos] == 'R') || (cod[*pos] == 'S') || (cod[*pos] == 'T') || (cod[*pos] == 'U') || (cod[*pos] == 'V') || (cod[*pos] == 'W') || (cod[*pos] == 'X') || (cod[*pos] == 'Y') || (cod[*pos] == 'Z') || (cod[*pos] == 'a') || (cod[*pos] == 'b') || (cod[*pos] == 'c') || (cod[*pos] == 'd') || (cod[*pos] == 'e') || (cod[*pos] == 'f') || (cod[*pos] == 'g') || (cod[*pos] == 'h') || (cod[*pos] == 'i') || (cod[*pos] == 'j') || (cod[*pos] == 'k') || (cod[*pos] == 'l') || (cod[*pos] == 'm') || (cod[*pos] == 'n') || (cod[*pos] == 'o') || (cod[*pos] == 'p') || (cod[*pos] == 'q') || (cod[*pos] == 'r') || (cod[*pos] == 's') || (cod[*pos] == 't') || (cod[*pos] == 'u') || (cod[*pos] == 'v') || (cod[*pos] == 'w') || (cod[*pos] == 'x') || (cod[*pos] == 'y') || (cod[*pos] == 'z')){
			printf("\n %c", cod[*pos] );
			goto q117;
		}

	 q116: (*pos)++;
  	 	return VERDADEIRO;

  	 q117:(*pos)++;
  	 if ((cod[*pos] == 'A') ||  (cod[*pos] == 'B') ||  (cod[*pos] == 'C') ||  (cod[*pos] == 'D') ||  (cod[*pos] == 'E') ||  (cod[*pos] == 'F') ||  (cod[*pos] == 'G') ||  (cod[*pos] == 'H') ||  (cod[*pos] == 'I') ||  (cod[*pos] == 'J') ||  (cod[*pos] == 'K') ||  (cod[*pos] == 'L') ||  (cod[*pos] == 'M') ||  (cod[*pos] == 'N') ||  (cod[*pos] == 'O') ||  (cod[*pos] == 'P') ||  (cod[*pos] == 'Q') ||  (cod[*pos] == 'R') ||  (cod[*pos] == 'S') ||  (cod[*pos] == 'T') ||  (cod[*pos] == 'U') ||  (cod[*pos] == 'V') ||  (cod[*pos] == 'W') ||  (cod[*pos] == 'X') ||  (cod[*pos] == 'Y') ||  (cod[*pos] == 'Z') ||  (cod[*pos] == 'a') ||  (cod[*pos] == 'b') ||  (cod[*pos] == 'c') ||  (cod[*pos] == 'd') ||  (cod[*pos] == 'e') ||  (cod[*pos] == 'f') ||  (cod[*pos] == 'g') ||  (cod[*pos] == 'h') ||  (cod[*pos] == 'i') ||  (cod[*pos] == 'j') ||  (cod[*pos] == 'k') ||  (cod[*pos] == 'l') ||  (cod[*pos] == 'm') ||  (cod[*pos] == 'n') ||  (cod[*pos] == 'o') ||  (cod[*pos] == 'p') ||  (cod[*pos] == 'q') ||  (cod[*pos] == 'r') ||  (cod[*pos] == 's') ||  (cod[*pos] == 't') ||  (cod[*pos] == 'u') ||  (cod[*pos] == 'v') ||  (cod[*pos] == 'w') ||  (cod[*pos] == 'x') ||  (cod[*pos] == 'y') ||  (cod[*pos] == 'z')){
  	 		printf("\n %c", cod[*pos] );
  	 		goto q117;
  	 	}else if (cod[*pos] == ' '){
  	 		goto q118;
  	 	}

  	q118:(*pos)++;
  	 	return IDENTIFICADOR;


  q666:
  	return ERROR;


}

int main(){
	
	int p = 0;
	char codigo[] = {"pr "};
    int x = scanner(codigo,&p) ;
	printf("\n codigo = %d",x);
	
}
