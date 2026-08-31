bool isValid(char* s) {
    int top = -1;
    for (int i=0;s[i]!='\0';i++)
    {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[')
            s[++top] = c;
        else{
            if (top==-1) return false;
            char open=s[top--];
            if ((c == ')' && open != '(') || (c == '}' && open != '{') || (c == ']' && open != '['))
                return false;
        }
    }
    return top == -1;
}
