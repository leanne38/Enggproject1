//rotation cipher, by Leanne Grevenitz
//this code will take a message and key from user and rotate it according to the key. 

 
#include <stdio.h>
int main() 
{
    int x, i; 
    char message[100]; // limiting the length of the string to 100
    // get input from user
    printf("Enter message here:"); 
    scanf("%s", message); //
    printf("Enter key here:");
    scanf("%d", &x);
    
    for(i = 0; message[i] != '\0'; ++i) // initialise loop run conditions
    
		//if determined to be a upper case letter code will go to else if statment and run from there.
		
		if(message[i] >= 'a' && message[i] <= 'z') //asseses the ASCII number attacked to the string to see if it is a lower case letter 
		{
			message[i] = message[i] + x; // adds the key to the ASCII number attached to the letter to get the encrypted letter
		    
		}
			
		else if(message[i] >= 'A' && message[i] <='z')
			{
			    message[i] = message [i] + x;
			
			    if(message[i] > 'Z')
				message[i] = message[i] - 'z' + 'a' - 1;
			}
          
    
    printf("Encripted message, %s", message); //output
    
    return 0;
}  


    