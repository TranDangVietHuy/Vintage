char* rTrim (char s[]){
    int i = strlen(s)-1;
    while (s[i] == ' ') i--;
    s[i+1] = '\0';
    return s;
}

char *lTrim (char s[]){
    int i = 0;
    while (s[i] = ' ')i++;
    if (i>0) strcpy (&s[0], &s[i]);
    return s;
}