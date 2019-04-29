//rotation cipher, by Leanne Grevenitz
//this code will take a message and key from user and rotate it according to the key. 

 
#include <stdio.h>
int main() 
{
    int x, i; 
    char message[100]; // an array with a limit of 100 limits the length of the string
    
    printf("Enter message here:"); 
    scanf("%s", message); //
    printf("Enter key here:");
    scanf("%d", &x);
    
    for(i = 0; message[i] != '\0'; ++i)
		
		
		if(message[i] >= 'a' && message[i] <= 'z') //determins if the string is a lower case 
		{
			message[i] = message[i] + x; // adds the number assigned to
		    
		}
			
		else if(message[i] >= 'A' && message[i] <='z')
			{
			    message[i] = message [i] + x;
			
			    if(message[i] > 'Z')
				message[i] = message[i] - 'z' + 'a' - 1;
			}
          
    
    printf("Encripted message, %s", message);
    
    return 0;
}  




    