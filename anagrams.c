 #include<stdio.h>
 #include<string.h>
 int freq(char string[],char string1[])
 {
 	 int flag=0,key = 0, count[26] = {0},count1[26]={0}, x,y;
 	   while (string[key] != '\0') 
   {
      if (string[key] >= 'a' && string[key] <= 'z') 
	  {
         x = string[key] - 'a';
         count[x]++;
      }
      key++;
   }
 		key=0;
    while (string1[key] != '\0') 
   {
      if (string1[key] >= 'a' && string1[key] <= 'z') 
	  {
         y = string1[key] - 'a';
         count1[y]++;
      }
      key++;
   }
   for (key = 0; key < 26; key++)
   {
   	if(count[key]!=count1[key])
   	return 0;
  }
  return 1;
}
 int main()
 {
   char string[100],string1[100];
   printf("Enter a string\n");
   gets(string);
   	printf("Enter a string\n");
   gets(string1);
   if(freq(string,string1)==1)
   {
    	printf("both strings are anagram\n");
	}
	else
    {
    	printf("both strings are not anagram\n");
	}
   	 return 0;
}
