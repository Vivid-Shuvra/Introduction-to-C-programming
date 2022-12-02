#include<stdio.h>

    struct student
    {
        char* name;
        long int id_no;
        char* dept_name;
        float cgpa;

    };

    int main()
    {
        int n;
        struct student stud_info[5] =
        {
            {"Hasib", 3498, "EEE", 3.81},
            {"Nafiu", 5499, "CSE", 3.94},
            {"Jamil", 2498, "CE ",  3.51},
            {"Labib", 6499, "ME ",  3.64},
            {"piyus",7498,  "IPE",  3.41},

        };

        printf("NAME     ID     DEPARTMENT    CGPA/GRADE\n");
        printf("-------------------------------------------------");

        for(n = 0; n < 5; n++)
            printf("\n%s    %d    %s         %.2f", stud_info[n].name, stud_info[n].id_no,
                   stud_info[n].dept_name, stud_info[n].cgpa);

        return 0;
    }
