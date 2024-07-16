/* getchar example : typewriter */
#include <bits/stdc++.h>

int main (){
  char c;
  int* letter = new int[91];
  //int letter[91];  //need 65((int)'A') --> 90((int)'Z')
  int counter=0;  //counts how many different letters have been found so far


  do {
    c=getchar();
    //if(c!=' ' || c!='\n'){  //skip ' ' or '\n'
    	//printf("char: %c, ",c);  //chk if c is getting the right input from line 11
    int aVal=0; //ascii val
    if(c>='A' && c<='Z'){
        aVal=(int)c;  //convert letter to ascii
    }
    else if(c>='a' && c<='z'){
        aVal=(int)c; //convert letter to ascii
        aVal=aVal-32;  //convert ascii of lowercase to ascii of uppercase
    }

    //printf("ascii val of char: %d\n",aVal);  //chk if conversion is done right //upto this the program seems to be working fine

    //letter[aVal]++;

//problem is here i guess
    if(aVal>=65 && aVal<=90 && letter[aVal]==0){  //if capital letter of aVal=0, then it's a new letter so line 29,30
        counter++;
        letter[aVal]++;
    }

    //printf("letter[%d]= %d\n",aVal,letter[aVal]);  //chk to see contents of letter[aVal]  //aVal ranges from 65 to 90
    //}


  } while (c != '\n');  //terminate prog

  if(counter==26){  //if 26  letter was found, so panagram else not panagram
    //printf("%d pangram\n", counter);
     printf("pangram\n");
  }
  else{
    //printf("%d not pangram\n", counter);
     printf("not pangram\n");
  }

  return 0;
}
