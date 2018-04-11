#include <stdio.h>
 int main()
 {
     int stack[1000];
     char buf[1000];
     int sp =0;
    printf("Input Enter numbers and characters in the write-back\n");
     while (!feof(stdin)) {
        if(scanf ("%s", buf) != 1 )
            break;
        switch(buf[0])
        {
             if [sp-1]==0
              then
              printf("error");
                break;
            case '=':
                 printf("Result = %d\n", stack[sp - 1]);  sp--;
                 break;
             case '+':
                stack[sp-2] = stack[sp-2] + stack[sp-1];  sp--;
                break;
             case '-':
                stack[sp-2] = stack[sp-2] - stack[sp-1];  sp--;
                break;
             case '*':
                stack[sp-2] = stack[sp-1] * stack[sp-2];  sp--;
                break;
             case '/':
          if stack[sp-1]==0
              then
              printf("error")
              else 
               stack[sp-2] = stack[sp-2] / stack[sp-1];   sp--;
                break;
             default:
                 stack[sp++] = atoi(buf);
        }
    }
     printf("Result = %d\n",stack[sp-1]);
     return 0;
 }
