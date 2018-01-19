int main()
{
   int n, sum = 0, c, val;
 
   printf("Enter the num of inte you want to add\n");
   scanf("%d", &n);
 
   printf("Enter %d inte\n",n);
 
   for (c = 1; c <= n; c++)
   {
      scanf("%d", &val);
      sum = sum + val;
   }
 
   printf("Sum of entered inte = %d\n",sum);
 
   return 0;
}
