#include <stdio.h>

int main (void)
{

char letter = 'A';
char *pletter;

pletter = &letter;
pletter += 1;
//*pletter +=1;//this does the same as adding 1 to the value of 'A' making the ascii different
//letter += 1; this changes the ascii value of A to the next letter which is
//letter += 'd'; this adds the value of 'd' to the value of 'A' but that value is larger than the standard ascii of 127
// as such the computer interprets in to -91 instead of 165

printf ("The address of the letter variable is: %p\n\nThe value stored in letter is: %d\n\nThe actual letter is: %c\n\n",&letter,letter,letter);

printf("letterPTR points at memory address: %p\n\nThe actual data it has access to is: %c\n\n",pletter,*pletter);
return (0);
}