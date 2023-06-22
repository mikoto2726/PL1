//if (c >= '0' )
int IS_DIGIT(c)
    if c == 
int main(){
    const char *testcase = "alc80z1!";
    for (int i = 0; testcase[i] != '\0'; i++){
        char c = testcase[i];
        printf("%c %d %d\n", c, IS_DIGIT(c), is_digit(c));
    }
    return 0;
}