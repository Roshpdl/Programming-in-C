/******************************************************************
 * 
 * hw1-maxline.c - find and print the longest line found in input
 * 
 ******************************************************************/

#include <stdio.h>

#define MAXLINE 1000 // define maximum input line length

/* function prototypes */
int getline1(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest line seen in input */
int main() {
  int len; /* current line length */
  int max; /* maximum length seen so far */
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = getline1(line, MAXLINE)) > 0) {
     if (len > max) {
  	max = len;
 	copy(longest, line);
     }
  }
  if (max > 0) { /* there was a line */
     printf("%s", longest);
  }
  return 0;
}

/* getline1: read a line into s, return length */
int getline1(char s[], int lim) {
   int c, i;
   for (i=0; i < lim-1 && (c = getchar()) != EOF && c!='\n'; ++i) {
      s[i] = c;
   }
   if (c == '\n') {
      s[i] = c;
      ++i;
   }
   s[i] = '\0';
   return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough to accommodate all characters */
/* NOTE: IN GENERAL THIS IS A BAD ASSUMPTION but we can make the assumption here */
void copy(char to[], char from[]) {
   int i = 0;
   while ((to[i] = from[i]) != '\0') {
       ++i;
   }
}