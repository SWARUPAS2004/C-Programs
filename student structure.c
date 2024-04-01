//  input data for two students, display their information, and find the average of total marks.
#include <stdio.h>


struct student {
        char name[50];
        int Roll_no;
        float Total_marks;
    };
int main()
{
    struct student student1 ,student2;
    printf("Input details for student1\n");
    printf("Name:");
    scanf("%s",&student1.name);
    printf("Roll no:");
    scanf("%d",&student1.Roll_no);
    printf("Total Marks:");
    scanf("%f",&student1.Total_marks);
    
    printf("Input details for student2\n");
    printf("Name:");
    scanf("%s",&student2.name);
    printf("Roll no:");
    scanf("%d",&student2.Roll_no);
    printf("Total Marks:");
    scanf("%f",&student2.Total_marks);
    
    printf("\nStudent1 information\n");
    printf("Name: %s\n",student1.name);
    printf("Roll no: %d\n",student1.Roll_no);
    printf("Total Marks :%f\n",student1.Total_marks);
    
    printf("\nStudent2 information\n");
    printf("Name: %s\n",student2.name);
    printf("Roll no: %d\n",student2.Roll_no);
    printf("Total Marks :%f\n",student2.Total_marks);
    
    return 0;
}
// Input details for student1
// Name:Swarupa
// Roll no:49
// Total Marks:546
// Input details for student2
// Name:Tushar 
// Roll no:32
// Total Marks:591

// Student1 information
// Name: Swarupa
// Roll no: 49
// Total Marks :546.000000

// Student2 information
// Name: Tushar
// Roll no: 32
// Total Marks :591.000000