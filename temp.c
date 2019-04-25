/*Cipher Rotation code.this come will take a message and a rotaion key
from the user and encript that message by moving the letters along depending 
on what the cipher key is. Two functions; the main function, this gets the 
input and provides the output to the user. The cipher function, which does the 
encripting of the message. */ 

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int x, i; 
    char message[100], cha; 
    
    printf("Enter message here:"); 
    scanf("%s", message);
    printf("Enter key here:");
    scanf("%d", x);
    switch(x)
    
    {
        //message[100] = cha;
        
        case 1:
        
        
        if (message[i] >= 'a' && message[i] <= 'z')
                if ((message[i] + x) > 122)
           printf("%s", message[i] + x - 122 + 96);
        
           // for (i = 0; cha != '\0'; ++i);
           // cha = cha + x;
            //message[i] = cha;
        break;
    
        default: printf("Error");
        
    }
    
   // printf("Encripted message, %s", message);
    
    return 0;
    
}
    