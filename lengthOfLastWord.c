int lengthOfLastWord(char* s) {
    int size=strlen(s);
    int i=size-1;
    int store=0;

   while(i>=0 && s[i]==' ') 
   i--;
   while(i>=0 && s[i]!=' '){
    store++;
    i--;
   }
 return store;
}
