# include <stdio.h>

int main(int argc, char const *argv[])
{
    /* This code was made to print degrees Fahrenheit then convert it to degrees celcius then to kelvines
    The data we will be using is 0 to 300 for F 
    we will increment by 20 for degrees celcius. 
    We will incremebt by 40 for kelvins*/
    int low = 0;
    int high = 300;
    int current = low; 
    int celcius;
    int kelvins;

    printf("far   cel   kel\n");

    while (current <= high)
    {
        printf("%*d",3, current);

        celcius = 5 * (current-32) / 9;
        printf("%*d",6, celcius);

        if ((current%40)==0)
        {
            kelvins=(current-32)*5/9+273.15;
            printf("%*d",6, kelvins);
        }
        
        printf("\n");

        current=current+20;
    }

    int ran;
    int rea;

    printf("\nfar   ran   rea\n");

    for (current = 0; current <= high; current = current + 20)
    {
        
        printf("%*d",3,current);

        ran = current + 459.67;

        printf("%*d",6,ran);

        if (current%30==0)
        {
            rea= ((current-32)*4)/9;
            printf("%*d",6,rea);
        }
        

        printf("\n");

    }
    
    
    
    return 0;
}
