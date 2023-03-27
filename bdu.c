#include<stdio.h>
int main(){

    int i=2002000;
    for(i; i<=2002050; i++){


printf("<!-- %d single student information -->\n", i);
printf("<div class=\"single col-sm-6 col-lg-4\" id=\"s%d\">\n", i);
printf("\t<img src=\"student_img/%d.jpg\" alt=\"ID%d\">\n", i,i);
printf("\t<h3 class=\"name\">Name</h3>\n");
printf("\t<p class=\"title\">Student</p>\n");
printf("\t<p class=\"st_id\">STUDENT ID: %d</p>\n", i);
printf("\t<p class=\"district\">Home: N/A</p>\n");
printf("\t<p class=\"blood_group\">Blood Group: N/A</p>\n");
printf("\t<a class=\"contact\" href=\"#\">Contact</a>\n");
printf("</div>\n\n");

    }

scanf("%d", &i);
    return 0;
}
