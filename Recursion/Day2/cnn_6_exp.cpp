#include <stdio.h>  
#include <string.h>  
  
void characterStuffing(char* originalData, char* stuffedData, char startChar, char endChar, char escapeChar)  
{  
    int originalLength = strlen(originalData);  
 int stuffedLength = 0;  
  
    for (int i = 0; i < originalLength; i++) {  
        if (originalData[i] == startChar || originalData[i] == endChar || originalData[i] == escapeChar) {  
            stuffedData[stuffedLength++] = escapeChar;  
        }  
        stuffedData[stuffedLength++] = originalData[i];  
    }  
  
    stuffedData[stuffedLength] = '\0';  
}  
  
void characterDestuffing(char* stuffedData, char* originalData, char startChar, char endChar, char escapeChar)  
{  
    int stuffedLength = strlen(stuffedData);  
    int originalLength = 0;  
  
    for (int i = 0; i < stuffedLength; i++) {  
        if (stuffedData[i] == escapeChar) {  
            i++;  
        }  
        originalData[originalLength++] = stuffedData[i];  
    }  
  
    originalData[originalLength] = '\0';  
}  
  
int main()  
{  
    char originalData[100] = "Hello World!";  
    char stuffedData[200];  
    char destuffedData[100];  
  
    char startChar = '<';  
    char endChar = '>';  
    char escapeChar = '\\';  
  
    printf("Original Data: %s\n", originalData);  
  
characterStuffing(originalData, stuffedData, startChar, endChar, escapeChar);  
    printf("Stuffed Data: %s\n", stuffedData);  
  
    characterDestuffing(stuffedData, destuffedData, startChar, endChar, escapeChar);  
    printf("Destuffed Data: %s\n", destuffedData);  
  
    return 0;  
}  