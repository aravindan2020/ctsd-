int main()  
{  
    // declare local variables  
    char opt;  
    int n1, n2;   
    float res;  
    printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");  
    scanf ("%c", &opt); // take an operator
    printf (" \n Enter the first number: ");  
    scanf(" %d", &n1); // take fist number  
    printf (" Enter the second number: ");  
    scanf (" %d", &n2); // take second number  
    if (opt == '/' )  
    {  
        printf ("%d",n1/n2);  
    }  
    else if (opt == '*')  
    {  
        printf ("%d",n1*n2);  
     }  
       
    else if (opt == '-')  
    {  
        printf ("%d",n1-n2);  
     }  
        else if (opt == '+')  
    {  
        printf (" %d",n1+n2);  
     }     
}
