#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{
    float waist,hip,whr;
    int day,year, month,male=1,female=0,age,gender,repeat=1,inche=0,meter=1,measure;
    
    
    
    while (repeat==1)
    {
    
    
    printf("Please enter your birth date in terms of dd/mm/yy: ");
    scanf("%d/%d/%d", &day,  &month,  &year);
    age=2012-year;
    printf("Your age = %d\n", age);
    
    while (age<18)
    
    {
          printf("ERROR:WHR can only be calculated for people above 18.\n");
          printf("Please enter your birth date again: ");
          scanf("%d/%d/%d", &day,  &month,  &year);
          age=2012-year;
          printf("Your age = %d\n", age);
          
          }
    
    
    printf("Please enter your gender (for female = 0, for male =1): ");
    scanf("%d", &gender);
    while (gender!=1 && gender!=0)
    {
          printf("ERROR:You entered wrong code.\n");
          printf("Please enter the code again: ");
          scanf("%d", &gender);
          
          }
    
    printf("Please enter your measure type (for inche=0, for meter=1):");
    scanf("%d", &measure);
      while (measure!=0 && measure!=1)
    {
          printf("ERROR:You entered wrong code.\n");
          printf("Please enter the code again: ");
          scanf("%d", &measure);
          
          }
          
          if (measure==0)
          {               
     printf("Please enter your waistline in terms of inches: ");
    scanf("%f", &waist);
    waist=0.0254*waist;
    printf("Your waistline = %f  meter\n", waist);
    printf("Please enter your hip size in terms of inches: ");
    scanf("%f", &hip);
    hip=0.0254*hip;
    printf("Your hip size = %f  meter\n", hip);
       
}
    
    else
   
   
   {
    printf("Please enter your waistline in terms of meters: ");
    scanf("%f", &waist);
    
    printf("Please enter your hip size in terms of meters: ");
    scanf("%f", &hip);  
}
   
   
   
   
   
    
    whr = waist/hip;
    printf("Your WAIST-HIP ratio= %f\n", whr);
    
    if ((whr<0.75 && gender==0)||(whr<0.85 && gender==1))
    {
                 printf("Excellent.Your health risks statistically related to waist to hip ratio are minimal as it's unlikely that carrying much central fat.\n This is not to say that you aren’t overweight - you are if you have excess fat deposition distributed all over your body you're still at risk of disease.\n");
                 }
                 
                 else if ((whr>=0.75 && whr<0.80 && gender==0)||(whr>=0.85 && whr<0.90 && gender==1))
                 {
                      printf("Good.you're at low risk of weight-related disease but it's important to maintain your shape by a healthy diet and regular exercise.\n The longer you can prevent central fat deposition, the longer and healthier your life will be.\n");
              
                      }
                      
                      else if ((whr>=0.80 && whr<0.85 && gender==0)||(whr>=0.90 && whr<0.95 && gender==1))
                      
                      {
                           printf("Average. You may feel you're healthy but you already will have some fat deposited around the organs and in the membranes called the ‘omentum’ that line the abdominal cavity.\n This fat will have started to make the hormones and chemicals which increase your risk of disease.\n");
                           }
                           
                           else if ((whr>=0.85 && whr<0.90 && gender==0)||(whr>=0.95 && whr<1.0 && gender==1))
                          { 
                           printf("High. It shows that you have centrally stored fat and are at increased risk of disease compared to someone with no central fat.\n");
                           }
                           
                           else if ((whr>=0.90 && gender==0)||(whr>=1.0 && gender==1))
                           
                           {
                                printf("Extreme.With a very large abdominal girth compared to your hips you're extremely likely to be holding dangerous amounts of fat centrally,\n and so be at high risk of the all the diseases associated with this.\n");
                                
                                }
                                
                                
                           
                                printf ("If you want to continue, please enter 1: ");
                                scanf ("%d", &repeat);
                                
                                }
                                
                                system ("PAUSE");
                                return 0;
                                
                                }
                           
