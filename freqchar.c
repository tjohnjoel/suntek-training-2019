 #include<stdio.h>
 #include<string.h>
int freq(char string[100])
 {
 	 int key = 0, count[26] = {0}, x;
 	   while (string[key] != '\0') 
   {
      if (string[key] >= 'a' && string[key] <= 'z') 
	  {
         x = string[key] - 'a';
         count[x]++;
      }
      key++;
   }
   for (key = 0; key < 26; key++)
   {
  			if(count[key]>0) 
         printf("%c - %d\n", key + 'a', count[key]);
 }
 }
 int main()
 {
   char string[100];
  
 
   printf("Enter a string\n");
   gets(string);
 	freq(string);
   return 0;
}
