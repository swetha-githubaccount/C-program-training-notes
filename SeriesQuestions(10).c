#include <stdio.h>

//Write a program to calculate the sum of an arithmetic series
int ArithmeticSeriesSum(int firstTerm , int comDiff , int noOfTerms)
{
    if(noOfTerms <= 0)
        return 0;
    return noOfTerms * (2 * firstTerm + (noOfTerms - 1) * comDiff) / 2;
}

//Write a program to calculate the sum of a geometric series

int GeometricSeriesSum(int firstTerm , int comratio , int noOfTerms)
{
    if(noOfTerms <= 0)
        return 0;
    return firstTerm * (pow(comratio , noOfTerms)-1 )/(comratio - 1);
}

//Write a program to calculate the sum of a harmonic series. 
double harmonicSeriesSum(int n)
{
    if(n <= 0)
        return 0;
    else
        double sum = 0.0;
        for(int i=0;i<n;i++)
            sum += 1.0 / i;
    return sum;
}

//Write a program to generate the first n terms of the Fibonacci series.
void fibonacciSeries(int n)
{
    if(n<=0)
        return;
    int a = 0,b = 1;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a);
        int next = a+b;
        a = b;
        b = next;
    }
    printf("\n");
}

// Write a program to calculate the sum of a factorial series
int factorial(int n)
{
    if(n==0)
        return 1;
    return n * factorial(n-1);
}
int factorialSeriesSum(int n)
{
    int sum = 0;
    if(n<=0)
        return 0;
    for(int i=0;i<=n;i++)
    {
        sum += factorial(i);
    }
    return sum;
}

//Write a program to calculate the sum of a power series
int powerSeries(int base , int expo)
{
    return pow(base , expo);
}

//Write a program to approximate the value of a function using a Maclaurin series.
double Maclaurin(double x,int n)
{
    if(n<=0)
        return 1.0;
    double Msum = 1.0, term = 1.0;
    for(int i=0;i<n;i++)
    {
        term *= x/i;
        Msum += term;
    }
    return Msum;
}

//Write a program to calculate the sum of an alternating series.
int alternating_series_sum(int first_term, int common_ratio, int num_terms) {
    if (num_terms <= 0) return 0;
    int sum = 0, term = first_term;
    for (int i = 0; i < num_terms; i++) {
        sum += term;
        term *= common_ratio;
    }
    return sum;
}

//Write a program to approximate the sum of an infinite series
double infinite_series_sum(double tolerance) {
    double sum = 0.0, term = 1.0;
    int n = 1;
    while (term > tolerance) {
        sum += term;
        n++;
        term = 1.0 / n;
    }
    return sum;
}

int main()
{
    int firstTerm , comDiff , noOfTerms;
    //to calculate the sum of an arithmetic series
    printf("Give the firstTerm, comDiff , no.of.terms to find Arithmetic Series Sum : ");
    scanf("%d %d %d",&firstTerm , &comDiff, &noOfTerms);
    int ArithSum = ArithmeticSeriesSum(firstTerm , comDiff , noOfTerms);
    printf("\nThe arthimetic sum of the series is %d",ArithSum);

    //to calculate the sum of a geometric series

    int GfirstTerm , comratio , GnoOfTerms;
    printf("Give the firstTerm, comRatio , no.of.terms to find Arithmetic Series Sum : ");
    scanf("%d %d %d",&GfirstTerm , &comratio, &GnoOfTerms);
    int ArithSum = GeometricSeriesSum(GfirstTerm , comratio , GnoOfTerms);
    printf("\nThe geometric sum of the series is %d",ArithSum);

    //to calculate the sum of a harmonic series.

    int n;
    printf("Enter the number n : ");
    scanf("%d",&n);
    double sum = harmonicSeriesSum(n);
    printf("\nThe harmonic sum of the series is %lf",sum);

    // to generate the first n terms of the Fibonacci series.
    int fn;
    printf("Enter the number n : ");
    scanf("%d",&fn);
    fibonacciSeries(fn);

//to calculate the sum of a factorial series
    int factN;
    printf("Enter the number n : ");
    scanf("%d",&factN);
    int Nfactorial = factorialSeriesSum(factN);
    printf("\nThe factorial of n numbers is %d.",Nfactorial);

//to calculate the sum of a power series

    int base , expo;
    printf("\nEnter the base and exponent value : ");
    scanf("%d %d",&base , &expo);
    int power= powerSeries(base , expo);
    printf("\nThe power is : %d\n",power);

//to approximate the value of a function using a Maclaurin series.
    double Mx= 1.0;
    int Mn = 5;
    printf("\nMaclaurin Series (e^x) Approximation: %.5lf",Maclaurin(Mx,Mn));

//to calculate the sum of an alternating series.
    int first_term = 1, common_ratio = -1, num_terms = 5;
    printf("Alternating Series Sum: %d\n", alternating_series_sum(first_term, common_ratio, num_terms));
    
//to approximate the sum of an infinite series
    double tolerance = 0.001;
    printf("Infinite Series Sum (with tolerance): %.5lf\n", infinite_series_sum(tolerance));
   
    return 0;
}