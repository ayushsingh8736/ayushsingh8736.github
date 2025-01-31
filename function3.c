
int add(int a, int b)
{
 int c;
 c=a+b;
 return c;
}
void main()
{
    int x,y, p;
    printf("%d %d %d", &x,&y,&p);

    printf("\n\nEnter 2 number:");
    scanf("%d%d", &x,&y);
    p=add(x,y);    // actual argument function calling
    printf("Addition is %d",p);


    getch ();
}
