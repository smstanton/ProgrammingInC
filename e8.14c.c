// Rewriting using global variables instead of arguments


// Matrix transposition

#include <stdio.h>

int startMatrix[4][5] = {
                         { 10,  5, -3, 17, 18 },
                         {  9,  0,  0,  8,  9 },
                         { 32, 20,  1,  0,  1 },
                         {  1,  2,  3,  4,  5 },
};
int finishMatrix[5][4];

int transposeMatrix () {

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 5; ++j) {
      finishMatrix[j][i] = startMatrix[i][j];
    }
  }

  return 0;
} 

int main (void)
{

  transposeMatrix ();

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 4; ++j) {
      printf ("%i, ", finishMatrix[i][j]);
    }
    printf ("\n");
  }

  return 0;
}
