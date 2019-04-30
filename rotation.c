#include <stdio.h>
int main() 
{
    int x, i; 
    char message[100]; 
    
    printf("Enter message here:"); 
    scanf("%s", message);
    printf("Enter key here:");
    scanf("%d", &x);
    
    for(i = 0; message[i] != '\0'; ++i)
		
		
		if(message[i] >= 'a' && message[i] <= 'z')
		{
			message[i] = message[i] - x;
		    
		}
			
		else if(message[i] >= 'A' && message[i] <='z')
			{
			    message[i] = message [i] - x;
			
			    if(message[i] > 'Z')
				message[i] = message[i] - 'z' + 'a' - 1;
			}
          
    
    printf("Encripted message, %s", message);
    
    return 0;
}  
