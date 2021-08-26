https://github.com/AhmedSayed54/AS.git

#include <stdio.h>
#include <stdlib.h>

struct course{
    int creHr[2];
    float studScore;
};
struct student{
    char courses[2][11];
    float total_score, mscore, pscore;
};

float gpa_total(float result)
{
    struct student Cgpa;
    struct course totalHr;
    
    totalHr.creHr[2] = 3,4;

    printf("Enter your score in math (out of 4)\n");
    scanf("%f", &Cgpa.mscore);
    printf("Enter your score in programming (out of 4)\n");
    scanf("%f", &Cgpa.pscore);
    float total_score = Cgpa.mscore + Cgpa.pscore;
    int total_creHr = totalHr.creHr[0] + totalHr.creHr[1];
    result = (float)total_score / total_creHr;
    return result;
}

int main()
{
    float GPA;
    gpa_total(GPA);
    printf("Your GPA is %.3f\n", GPA);
    system("pause");
       return 0;
}

