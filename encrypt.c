#include <stdio.h>
#include <string.h>

void convert(char string[]){
  int len, count;

  len = strlen(string) - 1;
  count = 0;
  while(count < len){
    if((string[count] <= 'M' && string[count] >= 'A') || (string[count] >= 'a' && string[count] <= 'm')){
      string[count] = string[count] + 13;
    }
    else if((string[count] <= 'Z' && string[count] >= 'N') || (string[count] >= 'n' && string[count] <= 'z')){
      string[count] = string[count] - 13;
    }
    count++;
  }
  string[count] = '\0'; //end string
}

int main(){
  char string[256];
  
  printf("\nEnter the string to encrypt => ");
  fflush(stdin);
  fgets(string, 256, stdin);
  convert(string);
  printf("\nThe encrypted string is => %s", string);
}
