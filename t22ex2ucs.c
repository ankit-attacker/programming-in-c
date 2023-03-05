/* Ex -2    Units and Conversions
Write a program for user want to convert in  folowing 5 conversions.
 1 kms to miles
 2 inches to foot
 3 kgs to grams
 4 pound to kgs
 5 inches to meters
 */


//  to make exe file type command"./oldfilename -o newname"
// & for executing new file type command" ./newname.exe";

#include <stdio.h>
#include <stdlib.h>
int main();
float kmstomiles() // 1
{
    float b, c;
    printf("Enter value in kilometer\n");
    scanf("%f", &b);
    c = b * 0.621371;
    printf("%f kilometer equals %f mile\n", b, c);
    main();
}

float inchestofoot() // 2
{
    float d, e;
    printf("Enter value in inch\n");
    scanf("%f", &d);
    e = d * 0.0833333;
    printf("%f inch equals %f foot\n", d, e); // at 6 pm 2hr 25 minutes taken
    main();
}

float kgstograms() // 3
{
    float f, g;
    printf("Enter value in kg\n");
    scanf("%f", &f);
    g = f * 1000;
    printf("%f kg  equals %f grams\n", f, g);
    main();
}

float poundtokgs() // 4
{
    float h, i;
    printf("Enter value in pound\n");
    scanf("%f", &h);
    i = h * 0.453592;
    printf("%f pound equals %f kg\n", h, i);
    main();
}

float inchestometers() // 5
{
    float j, k;
    printf("Enter value in inches\n");
    scanf("%f", &j);
    k = j * 0.0254;
    printf("%f inch equals %f meters\n", j, k);
    main();
}

int a;
int cno() // cno - conversion number;
{
    scanf("%d", &a);
}

int main()
{
    printf("\eWELCOME TO UNIT CONVERSION SYSTEM\e\n Tell in which of the following you want to convert\n ");
    printf("Enter the corresponding conversion number for eg. 1,2,etc.\n");
    printf("1. kms to miles\n2. inches to foot\n3. kgs to grams\n4. pound to kgs\n5. inches to meters\n");
    printf("Plese enter 0 to exit form program\n");
    cno();
start:
    if (a == 0 || a == 1 || a == 2 || a == 3 || a == 4 || a == 5)
    {

        switch (a)
        {
        case 0:
            printf("Exiting the program......\a\n");
             exit(0);
            break;
        case 1:
            kmstomiles();
            break;
        case 2:
            inchestofoot();
            break;
        case 3:
            kgstograms();
            break;
        case 4:
            poundtokgs();
            break;
        case 5:
            inchestometers();
            break;
        }
    }
    else
    {
        
        printf("\a\aYou enteres wrong conversion number, Please enter again\n");
        cno();
        goto start;
    }

    return 0;
}
