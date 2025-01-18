
#include <stdio.h>
#include <math.h>

int main() {

    int i,n;
    float mean=0.0,sum=0.0,sd=0.0,var=0.0,varmean=0.0;

    scanf("%d",&n);
    float data[n];

    for (i = 0; i <n;i++)
    {
        scanf("%f", &data[i]);

    }

    for (i = 0; i <n;i++)
    {
        sum += data[i];
    }

    mean = sum/n;

    for (i = 0; i <n; i++)
    {
        var += pow(data[i] - mean, 2);
    }

    varmean = var/n;
    sd = sqrt(varmean);

    printf("%.3f",sd);


    return 0;

}


