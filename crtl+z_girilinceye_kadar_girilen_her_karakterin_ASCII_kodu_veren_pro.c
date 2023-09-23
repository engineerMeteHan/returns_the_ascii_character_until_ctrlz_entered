/// Author: Metehan GENCER

/* This program returns the ASCII
   code of each character entered from the
   keyword until crtl+z entered.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int c;
    const char ctrlz = 26;  // ASCII ondalýk kodu 26 (ctrl + z) - SUBTITUTE

    printf("Except for some control characters,"
           "\nthe code of the entered character will be displayed."
           "\nIf you want to end of the program, you should crrl+z on the keyboard...");

   while(1)
   {
       /* Read the keyboard key by projecting it on the screen.
          If ctrl+z is pressed, end the program.
        */

        printf("\nEnter a character: ");
        if ((c = _getche()) == ctrlz)
            break;

        /*
            Display ASCII code in decimal, hexadecimal and octal
            on the same line as the entered charactrer.
        */
        printf(", decimal: %d, hexadecimal: %x, octal: %o", c,c,c);
   }

   return 0;
}

// Except for some control characters, the code of the entered character will be displayed
