// formal arguments & function definition (call by value or pass by value)

add(int a, int b){
int c;
c=a+b;
printf("Addition is %d",c);
}
main()
{
    int x=7, y=2;
    add(x,y);
    getch();
}
