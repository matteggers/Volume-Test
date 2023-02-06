#include <stdio.h>
#include <math.h>
#include <ctype.h>


const double pi = 3.14159265359;
char userChoice;
float volume;
float radius;



void shapeSelection() {
    float length, width, height;
    switch (userChoice)
    {
    case 'p': case 'P':
        printf("Type Length\n"); scanf("%f", &length);
        printf("Type Width\n"); scanf("%f", &width);
        printf("Type Height\n"); scanf("%f", &height);
        volume = ((length*width*height)/3);
        printf("%.3f", volume);
        break;

    case 'r': case 'R':
        printf("Type Length\n"); scanf("%f", &length);
        printf("Type Width\n"); scanf("%f", &width);
        printf("Type Height\n"); scanf("%f", &height);
        volume = (length*width*height);
        printf("%.2f", volume);
    case 's': case 'S':
        printf("Type radius\n"); scanf("%f", &radius);
        volume = ((4/3)*(pi)*(radius*radius*radius));
        printf("%.4f", volume);
        break;

    default:
        printf("Not a choice LOL");
        break;

    }   
}
//maybe do data storage once ran.